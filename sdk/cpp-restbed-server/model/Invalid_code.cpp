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



#include "Invalid_code.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Invalid_code::Invalid_code()
{
	m_Message = "";
	m_Status = 0;
}

Invalid_code::~Invalid_code()
{
}

std::string Invalid_code::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Invalid_code::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Invalid_code::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("message", m_Message);
	pt.put("status", m_Status);
	return pt;
}

void Invalid_code::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Message = pt.get("message", "");
	m_Status = pt.get("status", 0);
}

std::string Invalid_code::getMessage() const
{
    return m_Message;
}
void Invalid_code::setMessage(std::string value)
{
	m_Message = value;
}
int32_t Invalid_code::getStatus() const
{
    return m_Status;
}
void Invalid_code::setStatus(int32_t value)
{
	m_Status = value;
}

}
}
}
}
