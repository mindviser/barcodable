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

#ifndef OAI_OAIProductLookupApiRequest_H
#define OAI_OAIProductLookupApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIInvalid_code.h"
#include "OAIItem.h"
#include "OAINot_found.h"
#include <QString>
#include "OAIProductLookupApiHandler.h"

namespace OpenAPI {

class OAIProductLookupApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIProductLookupApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIProductLookupApiHandler> handler);
    virtual ~OAIProductLookupApiRequest();

    void getItemByASINRequest(const QString& asin);
    void getItemByEANRequest(const QString& ean);
    void getItemByUPCRequest(const QString& upc);
    

    void getItemByASINResponse(const OAIItem& res);
    void getItemByEANResponse(const OAIItem& res);
    void getItemByUPCResponse(const OAIItem& res);
    

    void getItemByASINError(const OAIItem& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void getItemByEANError(const OAIItem& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void getItemByUPCError(const OAIItem& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void getItemByASIN(QString asin);
    void getItemByEAN(QString ean);
    void getItemByUPC(QString upc);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIProductLookupApiHandler> handler;

    inline void writeResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
        socket->writeHeaders();
    }
};

}

#endif // OAI_OAIProductLookupApiRequest_H
