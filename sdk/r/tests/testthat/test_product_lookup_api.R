# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate

context("Test ProductLookupApi")

api.instance <- ProductLookupApi$new()

test_that("GetItemByASIN", {
  # tests for GetItemByASIN
  # base path: https://virtserver.swaggerhub.com/magicCashew/barcodable/1.0.0
  # Find item by asin code
  # Returns a single item
  # @param character  asin  ASIN code of item to return 
  # @return [Item]

  # uncomment below to test the operation
  #expect_equal(result, "EXPECTED_RESULT")
})

test_that("GetItemByEAN", {
  # tests for GetItemByEAN
  # base path: https://virtserver.swaggerhub.com/magicCashew/barcodable/1.0.0
  # Find item by UPC code
  # Returns a single item
  # @param character  ean  EAN code of item to return 
  # @return [Item]

  # uncomment below to test the operation
  #expect_equal(result, "EXPECTED_RESULT")
})

test_that("GetItemByUPC", {
  # tests for GetItemByUPC
  # base path: https://virtserver.swaggerhub.com/magicCashew/barcodable/1.0.0
  # Find item by UPC code
  # Returns a single item
  # @param character  upc  UPC code of item to return 
  # @return [Item]

  # uncomment below to test the operation
  #expect_equal(result, "EXPECTED_RESULT")
})

