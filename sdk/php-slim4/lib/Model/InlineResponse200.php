<?php

/**
 * InlineResponse200
 *
 * PHP version 7.1
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 */
namespace OpenAPIServer\Model;

use OpenAPIServer\Interfaces\ModelInterface;

/**
 * InlineResponse200
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
class InlineResponse200 implements ModelInterface
{
    private const MODEL_SCHEMA = <<<'SCHEMA'
{
  "properties" : {
    "upcs" : {
      "type" : "array",
      "description" : "A list of UPCs",
      "example" : [ "190198155795" ],
      "items" : {
        "type" : "string"
      }
    },
    "eans" : {
      "type" : "array",
      "description" : "A list of EANs",
      "example" : [ 1.90198155795E11 ],
      "items" : {
        "type" : "string"
      }
    },
    "asins" : {
      "type" : "array",
      "description" : "A list of ASINs",
      "example" : [ "B01M1EXQY4" ],
      "items" : {
        "type" : "string"
      }
    },
    "message" : {
      "type" : "string",
      "example" : "OK"
    }
  }
}
SCHEMA;

    /** @var string[] $upcs A list of UPCs*/
    private $upcs;

    /** @var string[] $eans A list of EANs*/
    private $eans;

    /** @var string[] $asins A list of ASINs*/
    private $asins;

    /** @var string $message */
    private $message;

    /**
     * Returns model schema.
     *
     * @param bool $assoc When TRUE, returned objects will be converted into associative arrays. Default FALSE.
     *
     * @return array
     */
    public static function getOpenApiSchema($assoc = false)
    {
        return json_decode(static::MODEL_SCHEMA, $assoc);
    }
}
