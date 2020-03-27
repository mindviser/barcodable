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



#include "Inline_response_200.h"

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

Inline_response_200::Inline_response_200()
{
	m_Message = "";
}

Inline_response_200::~Inline_response_200()
{
}

std::string Inline_response_200::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Inline_response_200::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Inline_response_200::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Upcs
	if (!m_Upcs.empty()) {
		for (const auto &childEntry : m_Upcs) {
			ptree Upcs_node;
			Upcs_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Upcs_node));
		}
		pt.add_child("upcs", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Eans
	if (!m_Eans.empty()) {
		for (const auto &childEntry : m_Eans) {
			ptree Eans_node;
			Eans_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Eans_node));
		}
		pt.add_child("eans", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Asins
	if (!m_Asins.empty()) {
		for (const auto &childEntry : m_Asins) {
			ptree Asins_node;
			Asins_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Asins_node));
		}
		pt.add_child("asins", tmp_node);
		tmp_node.clear();
	}
	pt.put("message", m_Message);
	return pt;
}

void Inline_response_200::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Upcs into member vector
	if (pt.get_child_optional("upcs")) {
		for (const auto &childTree : pt.get_child("upcs")) {
			m_Upcs.emplace_back(childTree.second.data());
		}
	}
	// push all items of Eans into member vector
	if (pt.get_child_optional("eans")) {
		for (const auto &childTree : pt.get_child("eans")) {
			m_Eans.emplace_back(childTree.second.data());
		}
	}
	// push all items of Asins into member vector
	if (pt.get_child_optional("asins")) {
		for (const auto &childTree : pt.get_child("asins")) {
			m_Asins.emplace_back(childTree.second.data());
		}
	}
	m_Message = pt.get("message", "");
}

std::vector<std::string> Inline_response_200::getUpcs() const
{
    return m_Upcs;
}
void Inline_response_200::setUpcs(std::vector<std::string> value)
{
	m_Upcs = value;
}
std::vector<std::string> Inline_response_200::getEans() const
{
    return m_Eans;
}
void Inline_response_200::setEans(std::vector<std::string> value)
{
	m_Eans = value;
}
std::vector<std::string> Inline_response_200::getAsins() const
{
    return m_Asins;
}
void Inline_response_200::setAsins(std::vector<std::string> value)
{
	m_Asins = value;
}
std::string Inline_response_200::getMessage() const
{
    return m_Message;
}
void Inline_response_200::setMessage(std::string value)
{
	m_Message = value;
}

}
}
}
}

