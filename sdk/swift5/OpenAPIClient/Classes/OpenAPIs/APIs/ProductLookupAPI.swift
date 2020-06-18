//
// ProductLookupAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



open class ProductLookupAPI {
    /**
     Find item by asin code
     
     - parameter asin: (path) ASIN code of item to return 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getItemByASIN(asin: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Item?,_ error: Error?) -> Void)) {
        getItemByASINWithRequestBuilder(asin: asin).execute(apiResponseQueue) { result -> Void in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Find item by asin code
     - GET /api/v1/asin/{asin}
     - Returns a single item
     - responseHeaders: [X-ValidAuthorization(Bool), X-RateLimit-Limit(Int), X-RateLimit-Remaining(Int), X-RateLimit-Reset(Date)]
     - parameter asin: (path) ASIN code of item to return 
     - returns: RequestBuilder<Item> 
     */
    open class func getItemByASINWithRequestBuilder(asin: String) -> RequestBuilder<Item> {
        var path = "/api/v1/asin/{asin}"
        let asinPreEscape = "\(APIHelper.mapValueToPathItem(asin))"
        let asinPostEscape = asinPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{asin}", with: asinPostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Item>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**
     Find item by UPC code
     
     - parameter ean: (path) EAN code of item to return 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getItemByEAN(ean: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Item?,_ error: Error?) -> Void)) {
        getItemByEANWithRequestBuilder(ean: ean).execute(apiResponseQueue) { result -> Void in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Find item by UPC code
     - GET /api/v1/ean/{ean}
     - Returns a single item
     - responseHeaders: [X-ValidAuthorization(Bool), X-RateLimit-Limit(Int), X-RateLimit-Remaining(Int), X-RateLimit-Reset(Date)]
     - parameter ean: (path) EAN code of item to return 
     - returns: RequestBuilder<Item> 
     */
    open class func getItemByEANWithRequestBuilder(ean: String) -> RequestBuilder<Item> {
        var path = "/api/v1/ean/{ean}"
        let eanPreEscape = "\(APIHelper.mapValueToPathItem(ean))"
        let eanPostEscape = eanPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{ean}", with: eanPostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Item>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**
     Find item by UPC code
     
     - parameter upc: (path) UPC code of item to return 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func getItemByUPC(upc: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Item?,_ error: Error?) -> Void)) {
        getItemByUPCWithRequestBuilder(upc: upc).execute(apiResponseQueue) { result -> Void in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Find item by UPC code
     - GET /api/v1/upc/{upc}
     - Returns a single item
     - responseHeaders: [X-ValidAuthorization(Bool), X-RateLimit-Limit(Int), X-RateLimit-Remaining(Int), X-RateLimit-Reset(Date)]
     - parameter upc: (path) UPC code of item to return 
     - returns: RequestBuilder<Item> 
     */
    open class func getItemByUPCWithRequestBuilder(upc: String) -> RequestBuilder<Item> {
        var path = "/api/v1/upc/{upc}"
        let upcPreEscape = "\(APIHelper.mapValueToPathItem(upc))"
        let upcPostEscape = upcPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        path = path.replacingOccurrences(of: "{upc}", with: upcPostEscape, options: .literal, range: nil)
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<Item>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

}