/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/system/org.deepin.dde.Lastore1.Manager.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Lastore1.ManagerAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Lastore1.Manager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Lastore1.ManagerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ManagerAdaptor
 */

ManagerAdaptor::ManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ManagerAdaptor::~ManagerAdaptor()
{
    // destructor
}

bool ManagerAdaptor::autoClean() const
{
    // get the value of property AutoClean
    return qvariant_cast< bool >(parent()->property("AutoClean"));
}

QList<QDBusObjectPath> ManagerAdaptor::jobList() const
{
    // get the value of property JobList
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("JobList"));
}

QStringList ManagerAdaptor::systemArchitectures() const
{
    // get the value of property SystemArchitectures
    return qvariant_cast< QStringList >(parent()->property("SystemArchitectures"));
}

bool ManagerAdaptor::systemOnChanging() const
{
    // get the value of property SystemOnChanging
    return qvariant_cast< bool >(parent()->property("SystemOnChanging"));
}

QStringList ManagerAdaptor::upgradableApps() const
{
    // get the value of property UpgradableApps
    return qvariant_cast< QStringList >(parent()->property("UpgradableApps"));
}

QDBusObjectPath ManagerAdaptor::CleanArchives()
{
    // handle method call org.deepin.dde.Lastore1.Manager.CleanArchives
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "CleanArchives", Q_RETURN_ARG(QDBusObjectPath, job));
    return job;
}

void ManagerAdaptor::CleanJob(const QString &jobId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.CleanJob
    QMetaObject::invokeMethod(parent(), "CleanJob", Q_ARG(QString, jobId));
}

QDBusObjectPath ManagerAdaptor::DistUpgrade()
{
    // handle method call org.deepin.dde.Lastore1.Manager.DistUpgrade
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "DistUpgrade", Q_RETURN_ARG(QDBusObjectPath, job));
    return job;
}

QDBusObjectPath ManagerAdaptor::FixError(const QString &errType)
{
    // handle method call org.deepin.dde.Lastore1.Manager.FixError
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "FixError", Q_RETURN_ARG(QDBusObjectPath, job), Q_ARG(QString, errType));
    return job;
}

QDBusObjectPath ManagerAdaptor::InstallPackage(const QString &jobName, const QString &packages)
{
    // handle method call org.deepin.dde.Lastore1.Manager.InstallPackage
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "InstallPackage", Q_RETURN_ARG(QDBusObjectPath, job), Q_ARG(QString, jobName), Q_ARG(QString, packages));
    return job;
}

QString ManagerAdaptor::PackageDesktopPath(const QString &pkgId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.PackageDesktopPath
    QString desktopPath;
    QMetaObject::invokeMethod(parent(), "PackageDesktopPath", Q_RETURN_ARG(QString, desktopPath), Q_ARG(QString, pkgId));
    return desktopPath;
}

bool ManagerAdaptor::PackageExists(const QString &pkgId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.PackageExists
    bool exist;
    QMetaObject::invokeMethod(parent(), "PackageExists", Q_RETURN_ARG(bool, exist), Q_ARG(QString, pkgId));
    return exist;
}

bool ManagerAdaptor::PackageInstallable(const QString &pkgId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.PackageInstallable
    bool installable;
    QMetaObject::invokeMethod(parent(), "PackageInstallable", Q_RETURN_ARG(bool, installable), Q_ARG(QString, pkgId));
    return installable;
}

qlonglong ManagerAdaptor::PackagesDownloadSize(const QStringList &packages)
{
    // handle method call org.deepin.dde.Lastore1.Manager.PackagesDownloadSize
    qlonglong size;
    QMetaObject::invokeMethod(parent(), "PackagesDownloadSize", Q_RETURN_ARG(qlonglong, size), Q_ARG(QStringList, packages));
    return size;
}

void ManagerAdaptor::PauseJob(const QString &jobId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.PauseJob
    QMetaObject::invokeMethod(parent(), "PauseJob", Q_ARG(QString, jobId));
}

QDBusObjectPath ManagerAdaptor::PrepareDistUpgrade()
{
    // handle method call org.deepin.dde.Lastore1.Manager.PrepareDistUpgrade
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "PrepareDistUpgrade", Q_RETURN_ARG(QDBusObjectPath, job));
    return job;
}

QDBusObjectPath ManagerAdaptor::RemovePackage(const QString &jobName, const QString &packages)
{
    // handle method call org.deepin.dde.Lastore1.Manager.RemovePackage
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "RemovePackage", Q_RETURN_ARG(QDBusObjectPath, job), Q_ARG(QString, jobName), Q_ARG(QString, packages));
    return job;
}

void ManagerAdaptor::SetAutoClean(bool enable)
{
    // handle method call org.deepin.dde.Lastore1.Manager.SetAutoClean
    QMetaObject::invokeMethod(parent(), "SetAutoClean", Q_ARG(bool, enable));
}

void ManagerAdaptor::SetLogger(const QString &levels, const QString &format, const QString &output)
{
    // handle method call org.deepin.dde.Lastore1.Manager.SetLogger
    QMetaObject::invokeMethod(parent(), "SetLogger", Q_ARG(QString, levels), Q_ARG(QString, format), Q_ARG(QString, output));
}

void ManagerAdaptor::SetRegion(const QString &region)
{
    // handle method call org.deepin.dde.Lastore1.Manager.SetRegion
    QMetaObject::invokeMethod(parent(), "SetRegion", Q_ARG(QString, region));
}

void ManagerAdaptor::StartJob(const QString &jobId)
{
    // handle method call org.deepin.dde.Lastore1.Manager.StartJob
    QMetaObject::invokeMethod(parent(), "StartJob", Q_ARG(QString, jobId));
}

QDBusObjectPath ManagerAdaptor::UpdatePackage(const QString &jobName, const QString &packages)
{
    // handle method call org.deepin.dde.Lastore1.Manager.UpdatePackage
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "UpdatePackage", Q_RETURN_ARG(QDBusObjectPath, job), Q_ARG(QString, jobName), Q_ARG(QString, packages));
    return job;
}

QDBusObjectPath ManagerAdaptor::UpdateSource()
{
    // handle method call org.deepin.dde.Lastore1.Manager.UpdateSource
    QDBusObjectPath job;
    QMetaObject::invokeMethod(parent(), "UpdateSource", Q_RETURN_ARG(QDBusObjectPath, job));
    return job;
}
