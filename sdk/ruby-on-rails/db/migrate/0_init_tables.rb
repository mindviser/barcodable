=begin
Barcodable.com API

Barcodable.com API

The version of the OpenAPI document: 1.5.0
Contact: support@barcodable.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end

class InitTables < ActiveRecord::Migration
  def change
    create_table "inline_response_200".pluralize.to_sym, id: false do |t|
      t.string :upcs
      t.string :eans
      t.string :asins
      t.string :message

      t.timestamps
    end

    create_table "inline_response_400".pluralize.to_sym, id: false do |t|
      t.string :message
      t.integer :status

      t.timestamps
    end

    create_table "invalid_code".pluralize.to_sym, id: false do |t|
      t.string :message
      t.integer :status

      t.timestamps
    end

    create_table "item".pluralize.to_sym, id: false do |t|
      t.string :upc
      t.string :ean
      t.string :isbn
      t.string :asin
      t.string :title
      t.string :sku
      t.string :mpn
      t.string :part_number
      t.string :upcs
      t.string :description
      t.string :brand
      t.string :manufacturer
      t.string :color
      t.Float :new_price
      t.Float :used_price
      t.string :currency_code
      t.string :url
      t.string :features
      t.string :dimensions
      t.string :images
      t.string :matched_items
      t.string :iso_country_codes
      t.string :company_name
      t.string :company_address
      t.string :categories
      t.string :category_hierarchies

      t.timestamps
    end

    create_table "not_found".pluralize.to_sym, id: false do |t|
      t.string :message
      t.integer :status

      t.timestamps
    end

  end
end
