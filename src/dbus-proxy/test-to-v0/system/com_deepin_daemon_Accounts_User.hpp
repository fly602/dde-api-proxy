#pragma once

#include "dbusproxybase.hpp"
#include "com_deepin_daemon_Accounts_User.h"

class SystemAccountsUserProxy : public DBusProxyBase {
    
public:
    SystemAccountsUserProxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"PasswordLastChange", "AccountType", "IconFile", "UserName", "UUID"}));
        InitFilterMethods(QStringList({"EnableNoPasswdLogin"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface * initConnect() {
        m_dbusProxy = new com::deepin::daemon::accounts::User(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    com::deepin::daemon::accounts::User *m_dbusProxy;
};

