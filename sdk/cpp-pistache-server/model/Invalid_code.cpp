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


#include "Invalid_code.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Invalid_code::Invalid_code()
{
    m_Message = "";
    m_MessageIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
    
}

Invalid_code::~Invalid_code()
{
}

void Invalid_code::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Invalid_code& o)
{
    j = nlohmann::json();
    if(o.messageIsSet())
        j["message"] = o.m_Message;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
}

void from_json(const nlohmann::json& j, Invalid_code& o)
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

std::string Invalid_code::getMessage() const
{
    return m_Message;
}
void Invalid_code::setMessage(std::string const& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool Invalid_code::messageIsSet() const
{
    return m_MessageIsSet;
}
void Invalid_code::unsetMessage()
{
    m_MessageIsSet = false;
}
int32_t Invalid_code::getStatus() const
{
    return m_Status;
}
void Invalid_code::setStatus(int32_t const value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool Invalid_code::statusIsSet() const
{
    return m_StatusIsSet;
}
void Invalid_code::unsetStatus()
{
    m_StatusIsSet = false;
}

}
}
}
}

