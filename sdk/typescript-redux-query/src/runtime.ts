// tslint:disable
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


import { Meta, OptimisticUpdate, QueryKey, QueryOptions, Rollback, TransformStrategy, Update } from "redux-query";

export const BASE_PATH = "https://virtserver.swaggerhub.com/magicCashew/barcodable/1.0.0".replace(/\/+$/, "");

export interface TypedQueryConfig<TState, TBody> {
    force?: boolean;
    meta?: Meta;
    options?: QueryOptions;
    queryKey?: QueryKey;
    update?: Update<TState>;
    optimisticUpdate?: OptimisticUpdate<TState>;
    retry?: boolean;
    rollback?: Rollback<TState>;
    transform?: TransformStrategy<TState, TBody>
}

export class RequiredError extends Error {
    name: "RequiredError" = "RequiredError";
    constructor(public field: string, msg?: string) {
        super(msg);
    }
}

export const COLLECTION_FORMATS = {
    csv: ",",
    ssv: " ",
    tsv: "\t",
    pipes: "|",
};

export type ModelPropertyNaming = 'camelCase' | 'snake_case' | 'PascalCase' | 'original';

export function exists(json: any, key: string) {
    const value = json[key];
    return value !== null && value !== undefined;
}

export function mapValues(data: any, fn: (item: any) => any) {
  return Object.keys(data).reduce(
    (acc, key) => ({ ...acc, [key]: fn(data[key]) }),
    {}
  );
}