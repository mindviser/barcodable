<?php

/**
 * AbstractProductLookupApi
 *
 * PHP version 7.1
 *
 * @package OpenAPIServer\Api
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * Barcodable.com API
 *
 * Barcodable.com API
 * The version of the OpenAPI document: 1.5.0
 * Contact: support@barcodable.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */
namespace OpenAPIServer\Api;

use Psr\Container\ContainerInterface;
use Psr\Http\Message\ServerRequestInterface;
use Psr\Http\Message\ResponseInterface;
use Exception;

/**
 * AbstractProductLookupApi Class Doc Comment
 *
 * @package OpenAPIServer\Api
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
abstract class AbstractProductLookupApi
{

    /**
     * @var ContainerInterface|null Slim app container instance
     */
    protected $container;

    /**
     * Route Controller constructor receives container
     *
     * @param ContainerInterface|null $container Slim app container instance
     */
    public function __construct(ContainerInterface $container = null)
    {
        $this->container = $container;
    }


    /**
     * GET getItemByASIN
     * Summary: Find item by asin code
     * Notes: Returns a single item
     * Output-Formats: [application/json]
     *
     * @param ServerRequestInterface $request  Request
     * @param ResponseInterface      $response Response
     * @param array|null             $args     Path arguments
     *
     * @return ResponseInterface
     * @throws Exception to force implementation class to override this method
     */
    public function getItemByASIN(ServerRequestInterface $request, ResponseInterface $response, array $args)
    {
        $asin = $args['asin'];
        $message = "How about implementing getItemByASIN as a GET method in OpenAPIServer\Api\ProductLookupApi class?";
        throw new Exception($message);

        $response->getBody()->write($message);
        return $response->withStatus(501);
    }

    /**
     * GET getItemByEAN
     * Summary: Find item by UPC code
     * Notes: Returns a single item
     * Output-Formats: [application/json]
     *
     * @param ServerRequestInterface $request  Request
     * @param ResponseInterface      $response Response
     * @param array|null             $args     Path arguments
     *
     * @return ResponseInterface
     * @throws Exception to force implementation class to override this method
     */
    public function getItemByEAN(ServerRequestInterface $request, ResponseInterface $response, array $args)
    {
        $ean = $args['ean'];
        $message = "How about implementing getItemByEAN as a GET method in OpenAPIServer\Api\ProductLookupApi class?";
        throw new Exception($message);

        $response->getBody()->write($message);
        return $response->withStatus(501);
    }

    /**
     * GET getItemByUPC
     * Summary: Find item by UPC code
     * Notes: Returns a single item
     * Output-Formats: [application/json]
     *
     * @param ServerRequestInterface $request  Request
     * @param ResponseInterface      $response Response
     * @param array|null             $args     Path arguments
     *
     * @return ResponseInterface
     * @throws Exception to force implementation class to override this method
     */
    public function getItemByUPC(ServerRequestInterface $request, ResponseInterface $response, array $args)
    {
        $upc = $args['upc'];
        $message = "How about implementing getItemByUPC as a GET method in OpenAPIServer\Api\ProductLookupApi class?";
        throw new Exception($message);

        $response->getBody()->write($message);
        return $response->withStatus(501);
    }
}
