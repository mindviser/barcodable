<?php
/**
 * InvalidCode
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Barcodable.com API
 *
 * Barcodable.com API
 *
 * The version of the OpenAPI document: 1.5.0
 * Contact: support@barcodable.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the InvalidCode model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class InvalidCode 
{
        /**
     * @var string|null
     * @SerializedName("message")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $message;

    /**
     * @var int|null
     * @SerializedName("status")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $status;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->message = isset($data['message']) ? $data['message'] : null;
        $this->status = isset($data['status']) ? $data['status'] : null;
    }

    /**
     * Gets message.
     *
     * @return string|null
     */
    public function getMessage()
    {
        return $this->message;
    }

    /**
     * Sets message.
     *
     * @param string|null $message
     *
     * @return $this
     */
    public function setMessage($message = null)
    {
        $this->message = $message;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return int|null
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Sets status.
     *
     * @param int|null $status
     *
     * @return $this
     */
    public function setStatus($status = null)
    {
        $this->status = $status;

        return $this;
    }
}


