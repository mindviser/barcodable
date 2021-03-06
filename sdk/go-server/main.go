/*
 * Barcodable.com API
 *
 * Barcodable.com API
 *
 * API version: 1.5.0
 * Contact: support@barcodable.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package main

import (
	"log"
	"net/http"

	openapi "github.com/GIT_USER_ID/GIT_REPO_ID/go"
)

func main() {
	log.Printf("Server started")

	ProductConversionApiService := openapi.NewProductConversionApiService()
	ProductConversionApiController := openapi.NewProductConversionApiController(ProductConversionApiService)

	ProductLookupApiService := openapi.NewProductLookupApiService()
	ProductLookupApiController := openapi.NewProductLookupApiController(ProductLookupApiService)

	router := openapi.NewRouter(ProductConversionApiController, ProductLookupApiController)

	log.Fatal(http.ListenAndServe(":8080", router))
}
