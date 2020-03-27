=begin
Barcodable.com API

Barcodable.com API

The version of the OpenAPI document: 1.5.0
Contact: support@barcodable.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end
Rails.application.routes.draw do

  def add_openapi_route http_method, path, opts = {}
    full_path = path.gsub(/{(.*?)}/, ':\1')
    match full_path, to: "#{opts.fetch(:controller_name)}##{opts[:action_name]}", via: http_method
  end

  add_openapi_route 'GET', '/magicCashew/barcodable/1.0.0/api/v1/convert/{upc | ean | asin}', controller_name: 'product_conversion', action_name: 'convert_code'
  add_openapi_route 'GET', '/magicCashew/barcodable/1.0.0/api/v1/asin/{asin}', controller_name: 'product_lookup', action_name: 'get_item_by_asin'
  add_openapi_route 'GET', '/magicCashew/barcodable/1.0.0/api/v1/ean/{ean}', controller_name: 'product_lookup', action_name: 'get_item_by_ean'
  add_openapi_route 'GET', '/magicCashew/barcodable/1.0.0/api/v1/upc/{upc}', controller_name: 'product_lookup', action_name: 'get_item_by_upc'
end
