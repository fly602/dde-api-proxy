/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.daemon.Launcher1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Launcher1Adaptor
 */

Launcher1Adaptor::Launcher1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Launcher1Adaptor::~Launcher1Adaptor()
{
    // destructor
}

int Launcher1Adaptor::displayMode() const
{
    // get the value of property DisplayMode
    return qvariant_cast< int >(parent()->property("DisplayMode"));
}

void Launcher1Adaptor::setDisplayMode(int value)
{
    // set the value of property DisplayMode
    parent()->setProperty("DisplayMode", QVariant::fromValue(value));
}

bool Launcher1Adaptor::fullscreen() const
{
    // get the value of property Fullscreen
    return qvariant_cast< bool >(parent()->property("Fullscreen"));
}

void Launcher1Adaptor::setFullscreen(bool value)
{
    // set the value of property Fullscreen
    parent()->setProperty("Fullscreen", QVariant::fromValue(value));
}

LauncherItemInfoList Launcher1Adaptor::GetAllItemInfos()
{
    // handle method call org.deepin.dde.daemon.Launcher1.GetAllItemInfos
    LauncherItemInfoList itemInfoList;
    QMetaObject::invokeMethod(parent(), "GetAllItemInfos", Q_RETURN_ARG(LauncherItemInfoList, itemInfoList));
    return itemInfoList;
}

QStringList Launcher1Adaptor::GetAllNewInstalledApps()
{
    // handle method call org.deepin.dde.daemon.Launcher1.GetAllNewInstalledApps
    QStringList apps;
    QMetaObject::invokeMethod(parent(), "GetAllNewInstalledApps", Q_RETURN_ARG(QStringList, apps));
    return apps;
}

bool Launcher1Adaptor::GetDisableScaling(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.GetDisableScaling
    bool value;
    QMetaObject::invokeMethod(parent(), "GetDisableScaling", Q_RETURN_ARG(bool, value), Q_ARG(QString, id));
    return value;
}

LauncherItemInfo Launcher1Adaptor::GetItemInfo(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.GetItemInfo
    LauncherItemInfo itemInfo;
    QMetaObject::invokeMethod(parent(), "GetItemInfo", Q_RETURN_ARG(LauncherItemInfo, itemInfo), Q_ARG(QString, id));
    return itemInfo;
}

bool Launcher1Adaptor::GetUseProxy(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.GetUseProxy
    bool value;
    QMetaObject::invokeMethod(parent(), "GetUseProxy", Q_RETURN_ARG(bool, value), Q_ARG(QString, id));
    return value;
}

bool Launcher1Adaptor::IsItemOnDesktop(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.IsItemOnDesktop
    bool result;
    QMetaObject::invokeMethod(parent(), "IsItemOnDesktop", Q_RETURN_ARG(bool, result), Q_ARG(QString, id));
    return result;
}

void Launcher1Adaptor::MarkLaunched(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.MarkLaunched
    QMetaObject::invokeMethod(parent(), "MarkLaunched", Q_ARG(QString, id));
}

bool Launcher1Adaptor::RequestRemoveFromDesktop(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.RequestRemoveFromDesktop
    bool ok;
    QMetaObject::invokeMethod(parent(), "RequestRemoveFromDesktop", Q_RETURN_ARG(bool, ok), Q_ARG(QString, id));
    return ok;
}

bool Launcher1Adaptor::RequestSendToDesktop(const QString &id)
{
    // handle method call org.deepin.dde.daemon.Launcher1.RequestSendToDesktop
    bool ok;
    QMetaObject::invokeMethod(parent(), "RequestSendToDesktop", Q_RETURN_ARG(bool, ok), Q_ARG(QString, id));
    return ok;
}

void Launcher1Adaptor::RequestUninstall(const QString &id, bool purge)
{
    // handle method call org.deepin.dde.daemon.Launcher1.RequestUninstall
    QMetaObject::invokeMethod(parent(), "RequestUninstall", Q_ARG(QString, id), Q_ARG(bool, purge));
}

void Launcher1Adaptor::Search(const QString &key)
{
    // handle method call org.deepin.dde.daemon.Launcher1.Search
    QMetaObject::invokeMethod(parent(), "Search", Q_ARG(QString, key));
}

void Launcher1Adaptor::SetDisableScaling(const QString &id, bool value)
{
    // handle method call org.deepin.dde.daemon.Launcher1.SetDisableScaling
    QMetaObject::invokeMethod(parent(), "SetDisableScaling", Q_ARG(QString, id), Q_ARG(bool, value));
}

void Launcher1Adaptor::SetUseProxy(const QString &id, bool value)
{
    // handle method call org.deepin.dde.daemon.Launcher1.SetUseProxy
    QMetaObject::invokeMethod(parent(), "SetUseProxy", Q_ARG(QString, id), Q_ARG(bool, value));
}

