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
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BarcodableComApi);
  }
}(this, function(expect, BarcodableComApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new BarcodableComApi.Item();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('Item', function() {
    it('should create an instance of Item', function() {
      // uncomment below and update the code to test Item
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be.a(BarcodableComApi.Item);
    });

    it('should have the property upc (base name: "upc")', function() {
      // uncomment below and update the code to test the property upc
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property ean (base name: "ean")', function() {
      // uncomment below and update the code to test the property ean
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property isbn (base name: "isbn")', function() {
      // uncomment below and update the code to test the property isbn
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property asin (base name: "asin")', function() {
      // uncomment below and update the code to test the property asin
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property title (base name: "title")', function() {
      // uncomment below and update the code to test the property title
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property sku (base name: "sku")', function() {
      // uncomment below and update the code to test the property sku
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property mpn (base name: "mpn")', function() {
      // uncomment below and update the code to test the property mpn
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property partNumber (base name: "part_number")', function() {
      // uncomment below and update the code to test the property partNumber
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property upcs (base name: "upcs")', function() {
      // uncomment below and update the code to test the property upcs
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property brand (base name: "brand")', function() {
      // uncomment below and update the code to test the property brand
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property manufacturer (base name: "manufacturer")', function() {
      // uncomment below and update the code to test the property manufacturer
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property color (base name: "color")', function() {
      // uncomment below and update the code to test the property color
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property newPrice (base name: "new_price")', function() {
      // uncomment below and update the code to test the property newPrice
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property usedPrice (base name: "used_price")', function() {
      // uncomment below and update the code to test the property usedPrice
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property currencyCode (base name: "currency_code")', function() {
      // uncomment below and update the code to test the property currencyCode
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property url (base name: "url")', function() {
      // uncomment below and update the code to test the property url
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property features (base name: "features")', function() {
      // uncomment below and update the code to test the property features
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property dimensions (base name: "dimensions")', function() {
      // uncomment below and update the code to test the property dimensions
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property images (base name: "images")', function() {
      // uncomment below and update the code to test the property images
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property matchedItems (base name: "matched_items")', function() {
      // uncomment below and update the code to test the property matchedItems
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property isoCountryCodes (base name: "iso_country_codes")', function() {
      // uncomment below and update the code to test the property isoCountryCodes
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property companyName (base name: "company_name")', function() {
      // uncomment below and update the code to test the property companyName
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property companyAddress (base name: "company_address")', function() {
      // uncomment below and update the code to test the property companyAddress
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property categories (base name: "categories")', function() {
      // uncomment below and update the code to test the property categories
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

    it('should have the property categoryHierarchies (base name: "category_hierarchies")', function() {
      // uncomment below and update the code to test the property categoryHierarchies
      //var instane = new BarcodableComApi.Item();
      //expect(instance).to.be();
    });

  });

}));
