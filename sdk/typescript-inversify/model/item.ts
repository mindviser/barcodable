/**
 * Barcodable.com API
 * Barcodable.com API
 *
 * The version of the OpenAPI document: 1.5.0
 * Contact: support@barcodable.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export interface Item { 
    upc?: string;
    ean?: string;
    isbn?: string;
    asin?: string;
    title?: string;
    sku?: string;
    mpn?: string;
    part_number?: string;
    /**
     * A list of matching upc codes.
     */
    upcs?: Array<string>;
    description?: string;
    brand?: string;
    manufacturer?: string;
    color?: string;
    new_price?: number;
    used_price?: number;
    currency_code?: string;
    url?: string;
    /**
     * A list of product feature descriptions.
     */
    features?: Array<string>;
    /**
     * Product dimensions and weight.  (\'meters\', \'centimeters\', \'millimeters\', \'inches\', \'feet\', \'yards\', \'ounces\', \'pounds\', \'grams\', \'milligrams\', \'kilograms\')
     */
    dimensions?: Array<object>;
    /**
     * A list product images.
     */
    images?: Array<string>;
    /**
     * Matched items for this product.
     */
    matched_items?: Array<object>;
    /**
     * A list of country codes from which this item belongs.
     */
    iso_country_codes?: Array<string>;
    /**
     * The company name registered to the product\'s UPC or EAN.
     */
    company_name?: string;
    /**
     * The company address registered to the product\'s UPC or EAN.
     */
    company_address?: string;
    /**
     * A list of categories for this product.
     */
    categories?: Array<string>;
    /**
     * A list of category hierarchies for this product. Categories are listed in order of generic category to most specific category.
     */
    category_hierarchies?: Array<string>;
}
