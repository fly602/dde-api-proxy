#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_SessionManager1.h"

class SessionSessionManager1Proxy : public DBusProxyBase {
    
public:
    SessionSessionManager1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"Locked"}));
        InitFilterMethods(QStringList({"RequestReboot"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::SessionManager1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::SessionManager1 *m_dbusProxy;
};

