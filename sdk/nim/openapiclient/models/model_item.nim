#
# Barcodable.com API
# 
# Barcodable.com API
# The version of the OpenAPI document: 1.5.0
# Contact: support@barcodable.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_object

type Item* = object
  ## 
  upc*: string
  ean*: string
  isbn*: string
  asin*: string
  title*: string
  sku*: string
  mpn*: string
  part_number*: string
  upcs*: seq[string] ## A list of matching upc codes.
  description*: string
  brand*: string
  manufacturer*: string
  color*: string
  new_price*: float
  used_price*: float
  currency_code*: string
  url*: string
  features*: seq[string] ## A list of product feature descriptions.
  dimensions*: seq[object] ## Product dimensions and weight.  ('meters', 'centimeters', 'millimeters', 'inches', 'feet', 'yards', 'ounces', 'pounds', 'grams', 'milligrams', 'kilograms')
  images*: seq[string] ## A list product images.
  matched_items*: seq[object] ## Matched items for this product.
  iso_country_codes*: seq[string] ## A list of country codes from which this item belongs.
  company_name*: string ## The company name registered to the product's UPC or EAN.
  company_address*: string ## The company address registered to the product's UPC or EAN.
  categories*: seq[string] ## A list of categories for this product.
  category_hierarchies*: seq[string] ## A list of category hierarchies for this product. Categories are listed in order of generic category to most specific category.
