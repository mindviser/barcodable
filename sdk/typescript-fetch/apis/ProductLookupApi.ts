/* tslint:disable */
/* eslint-disable */
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


import * as runtime from '../runtime';
import {
    InvalidCode,
    InvalidCodeFromJSON,
    InvalidCodeToJSON,
    Item,
    ItemFromJSON,
    ItemToJSON,
    NotFound,
    NotFoundFromJSON,
    NotFoundToJSON,
} from '../models';

export interface GetItemByASINRequest {
    asin: string;
}

export interface GetItemByEANRequest {
    ean: string;
}

export interface GetItemByUPCRequest {
    upc: string;
}

/**
 * no description
 */
export class ProductLookupApi extends runtime.BaseAPI {

    /**
     * Returns a single item
     * Find item by asin code
     */
    async getItemByASINRaw(requestParameters: GetItemByASINRequest): Promise<runtime.ApiResponse<Item>> {
        if (requestParameters.asin === null || requestParameters.asin === undefined) {
            throw new runtime.RequiredError('asin','Required parameter requestParameters.asin was null or undefined when calling getItemByASIN.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/v1/asin/{asin}`.replace(`{${"asin"}}`, encodeURIComponent(String(requestParameters.asin))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ItemFromJSON(jsonValue));
    }

    /**
     * Returns a single item
     * Find item by asin code
     */
    async getItemByASIN(requestParameters: GetItemByASINRequest): Promise<Item> {
        const response = await this.getItemByASINRaw(requestParameters);
        return await response.value();
    }

    /**
     * Returns a single item
     * Find item by UPC code
     */
    async getItemByEANRaw(requestParameters: GetItemByEANRequest): Promise<runtime.ApiResponse<Item>> {
        if (requestParameters.ean === null || requestParameters.ean === undefined) {
            throw new runtime.RequiredError('ean','Required parameter requestParameters.ean was null or undefined when calling getItemByEAN.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/v1/ean/{ean}`.replace(`{${"ean"}}`, encodeURIComponent(String(requestParameters.ean))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ItemFromJSON(jsonValue));
    }

    /**
     * Returns a single item
     * Find item by UPC code
     */
    async getItemByEAN(requestParameters: GetItemByEANRequest): Promise<Item> {
        const response = await this.getItemByEANRaw(requestParameters);
        return await response.value();
    }

    /**
     * Returns a single item
     * Find item by UPC code
     */
    async getItemByUPCRaw(requestParameters: GetItemByUPCRequest): Promise<runtime.ApiResponse<Item>> {
        if (requestParameters.upc === null || requestParameters.upc === undefined) {
            throw new runtime.RequiredError('upc','Required parameter requestParameters.upc was null or undefined when calling getItemByUPC.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        const response = await this.request({
            path: `/api/v1/upc/{upc}`.replace(`{${"upc"}}`, encodeURIComponent(String(requestParameters.upc))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ItemFromJSON(jsonValue));
    }

    /**
     * Returns a single item
     * Find item by UPC code
     */
    async getItemByUPC(requestParameters: GetItemByUPCRequest): Promise<Item> {
        const response = await this.getItemByUPCRaw(requestParameters);
        return await response.value();
    }

}
