#
# Barcodable.com API
# 
# Barcodable.com API
# The version of the OpenAPI document: 1.5.0
# Contact: support@barcodable.com
# Generated by: https://openapi-generator.tech
#

import httpclient
import logging
import options

import openapiclient

import config

let logger = newConsoleLogger()
addHandler(logger)

let client = newHttpClient()
client.headers["User-Agent"] = config.useragent
