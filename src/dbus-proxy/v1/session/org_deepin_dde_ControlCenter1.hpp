#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_ControlCenter1.h"

class SessionControlCenter1Proxy : public DBusProxyBase {
    
public:
    SessionControlCenter1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"Show"})); // 另外代理了"ShowModule", "ShowPage"，在handleMessageCustom处理
        ServiceStart();
    }
    virtual	bool handleMessageCustom(const QDBusMessage &message, const QDBusConnection &connection)
    {
        // 对比V20，V23不仅服务名变了，方法也有变动，所以不能统一流程转发，需要自定义处理
        if (message.interface() == m_proxyDbusInterface) {
            if (message.member() == "ShowModule") {
                // V23去掉了ShowModule，改用ShowPage
                QDBusPendingCall call = m_dbusProxy->asyncCallWithArgumentList("ShowPage", message.arguments());
                call.waitForFinished();
                connection.send(message.createReply(call.reply().arguments()));
                return true;
            } else if (message.member() == "ShowPage") {
                // V23的ShowPage参数从两个变成一个
                if (message.arguments().size() != 2) {
                    connection.send(message.createErrorReply("com.deepin.dde.error.ParamError", "param error"));
                } else {
                    QString param = message.arguments().at(0).toString() + "/" + message.arguments().at(1).toString();
                    QList<QVariant> arguments;
                    arguments << param;
                    QDBusPendingCall call = m_dbusProxy->asyncCallWithArgumentList("ShowPage", arguments);
                    call.waitForFinished();
                    connection.send(message.createReply(call.reply().arguments()));
                }
                return true;
            }
        }
        return false;
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::ControlCenter1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::ControlCenter1 *m_dbusProxy;
};

