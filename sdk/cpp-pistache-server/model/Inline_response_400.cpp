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


#include "Inline_response_400.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_response_400::Inline_response_400()
{
    m_Message = "";
    m_MessageIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
    
}

Inline_response_400::~Inline_response_400()
{
}

void Inline_response_400::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Inline_response_400& o)
{
    j = nlohmann::json();
    if(o.messageIsSet())
        j["message"] = o.m_Message;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
}

void from_json(const nlohmann::json& j, Inline_response_400& o)
{
    if(j.find("message") != j.end())
    {
        j.at("message").get_to(o.m_Message);
        o.m_MessageIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
}

std::string Inline_response_400::getMessage() const
{
    return m_Message;
}
void Inline_response_400::setMessage(std::string const& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool Inline_response_400::messageIsSet() const
{
    return m_MessageIsSet;
}
void Inline_response_400::unsetMessage()
{
    m_MessageIsSet = false;
}
int32_t Inline_response_400::getStatus() const
{
    return m_Status;
}
void Inline_response_400::setStatus(int32_t const value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool Inline_response_400::statusIsSet() const
{
    return m_StatusIsSet;
}
void Inline_response_400::unsetStatus()
{
    m_StatusIsSet = false;
}

}
}
}
}
