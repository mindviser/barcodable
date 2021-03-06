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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIProductLookupApiHandler.h"
#include "OAIProductLookupApiRequest.h"

namespace OpenAPI {

OAIProductLookupApiHandler::OAIProductLookupApiHandler(){

}

OAIProductLookupApiHandler::~OAIProductLookupApiHandler(){

}

void OAIProductLookupApiHandler::getItemByASIN(QString asin) {
    Q_UNUSED(asin);
    auto reqObj = qobject_cast<OAIProductLookupApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIItem res;
        reqObj->getItemByASINResponse(res);
    }    
}
void OAIProductLookupApiHandler::getItemByEAN(QString ean) {
    Q_UNUSED(ean);
    auto reqObj = qobject_cast<OAIProductLookupApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIItem res;
        reqObj->getItemByEANResponse(res);
    }    
}
void OAIProductLookupApiHandler::getItemByUPC(QString upc) {
    Q_UNUSED(upc);
    auto reqObj = qobject_cast<OAIProductLookupApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIItem res;
        reqObj->getItemByUPCResponse(res);
    }    
}


}
