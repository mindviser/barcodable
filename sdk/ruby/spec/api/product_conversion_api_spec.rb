=begin
#Barcodable.com API

#Barcodable.com API

The version of the OpenAPI document: 1.5.0
Contact: support@barcodable.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::ProductConversionApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ProductConversionApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::ProductConversionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ProductConversionApi' do
    it 'should create an instance of ProductConversionApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::ProductConversionApi)
    end
  end

  # unit tests for convert_code
  # Convert between UPC, EAN, and ASIN product codes.
  # Returns the converted UPC, EAN, and ASIN codes.
  # @param upc___ean___asin UPC, EAN, or ASIN
  # @param [Hash] opts the optional parameters
  # @return [InlineResponse200]
  describe 'convert_code test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
