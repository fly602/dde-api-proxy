/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.StartManager1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_STARTMANAGER1ADAPTOR_H
#define ORG_DEEPIN_DDE_STARTMANAGER1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.StartManager1
 */
class StartManager1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.StartManager1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.StartManager1\">\n"
"    <method name=\"AddAutostart\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"AutostartList\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"GetApps\">\n"
"      <arg direction=\"out\" type=\"a{us}\"/>\n"
"      <annotation value=\"AppsCGroupInfo\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"IsAutostart\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"IsMemSufficient\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"Launch\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"LaunchApp\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"in\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"LaunchAppAction\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"    </method>\n"
"    <method name=\"LaunchWithTimestamp\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"RemoveAutostart\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"RunCommand\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"TryAgain\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <signal name=\"AutostartChanged\">\n"
"      <arg type=\"s\"/>\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <property access=\"read\" type=\"t\" name=\"NeededMemory\"/>\n"
"  </interface>\n"
        "")
public:
    StartManager1Adaptor(QObject *parent);
    virtual ~StartManager1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(qulonglong NeededMemory READ neededMemory)
    qulonglong neededMemory() const;

public Q_SLOTS: // METHODS
    bool AddAutostart(const QString &in0);
    QStringList AutostartList();
    AppsCGroupInfo GetApps();
    bool IsAutostart(const QString &in0);
    bool IsMemSufficient();
    bool Launch(const QString &in0);
    void LaunchApp(const QString &in0, uint in1, const QStringList &in2);
    void LaunchAppAction(const QString &in0, const QString &in1, uint in2);
    bool LaunchWithTimestamp(const QString &in0, uint in1);
    bool RemoveAutostart(const QString &in0);
    void RunCommand(const QString &in0, const QStringList &in1);
    void TryAgain(bool in0);
Q_SIGNALS: // SIGNALS
    void AutostartChanged(const QString &in0, const QString &in1);
};

#endif