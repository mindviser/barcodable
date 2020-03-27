/**
 * Barcodable.com API
 * Barcodable.com API
 *
 * The version of the OpenAPI document: 1.5.0
 * Contact: support@barcodable.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Not_found.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Not_found::Not_found()
{
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
}

Not_found::~Not_found()
{
}

void Not_found::validate()
{
    // TODO: implement validation
}

web::json::value Not_found::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool Not_found::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_message);
            setMessage(refVal_message);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    return ok;
}

void Not_found::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
}

bool Not_found::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        utility::string_t refVal_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("message")), refVal_message );
        setMessage(refVal_message);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        int32_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    return ok;
}

utility::string_t Not_found::getMessage() const
{
    return m_Message;
}

void Not_found::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool Not_found::messageIsSet() const
{
    return m_MessageIsSet;
}

void Not_found::unsetMessage()
{
    m_MessageIsSet = false;
}
int32_t Not_found::getStatus() const
{
    return m_Status;
}

void Not_found::setStatus(int32_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Not_found::statusIsSet() const
{
    return m_StatusIsSet;
}

void Not_found::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


