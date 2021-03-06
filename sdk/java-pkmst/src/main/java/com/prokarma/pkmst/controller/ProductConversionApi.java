/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (4.3.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.InlineResponse200;
import com.prokarma.pkmst.model.InlineResponse400;

import io.swagger.annotations.*;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;
import java.io.IOException;

import java.util.List;
/**
 * Provides the info about api methods
 * @author pkmst
 *
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2020-03-27T18:10:02.490-04:00[America/New_York]")

@Api(value = "ProductConversion", description = "the ProductConversion API")
public interface ProductConversionApi {

    @ApiOperation(value = "Convert between UPC, EAN, and ASIN product codes.", notes = "Returns the converted UPC, EAN, and ASIN codes.", response = InlineResponse200.class, tags={ "Product Conversion", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "successful operation", response = InlineResponse200.class),
        @ApiResponse(code = 400, message = "search results matching criteria", response = InlineResponse400.class) })
    @RequestMapping(value = "/api/v1/convert/{upc | ean | asin}",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    ResponseEntity<InlineResponse200> convertCode(@ApiParam(value = "UPC, EAN, or ASIN",required=true ) @PathVariable("upc | ean | asin") String upcEanAsin, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}
