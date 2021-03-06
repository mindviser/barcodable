#
# Barcodable.com API
# 
# Barcodable.com API
# The version of the OpenAPI document: 1.5.0
# Contact: support@barcodable.com
# Generated by: https://openapi-generator.tech
#

import httpclient
import json
import logging
import marshal
import options
import strformat
import strutils
import tables
import typetraits
import uri

import ../models/model_invalid_code
import ../models/model_item
import ../models/model_not_found

const basepath = "https://virtserver.swaggerhub.com/magicCashew/barcodable/1.0.0"

template constructResult[T](response: Response): untyped =
  if response.code in {Http200, Http201, Http202, Http204, Http206}:
    try:
      when name(stripGenericParams(T.typedesc).typedesc) == name(Table):
        (some(json.to(parseJson(response.body), T.typedesc)), response)
      else:
        (some(marshal.to[T](response.body)), response)
    except JsonParsingError:
      # The server returned a malformed response though the response code is 2XX
      # TODO: need better error handling
      error("JsonParsingError")
      (none(T.typedesc), response)
  else:
    (none(T.typedesc), response)


proc getItemByASIN*(httpClient: HttpClient, asin: string): (Option[item], Response) =
  ## Find item by asin code

  let response = httpClient.get(basepath & fmt"/api/v1/asin/{asin}")
  constructResult[item](response)


proc getItemByEAN*(httpClient: HttpClient, ean: string): (Option[item], Response) =
  ## Find item by UPC code

  let response = httpClient.get(basepath & fmt"/api/v1/ean/{ean}")
  constructResult[item](response)


proc getItemByUPC*(httpClient: HttpClient, upc: string): (Option[item], Response) =
  ## Find item by UPC code

  let response = httpClient.get(basepath & fmt"/api/v1/upc/{upc}")
  constructResult[item](response)

