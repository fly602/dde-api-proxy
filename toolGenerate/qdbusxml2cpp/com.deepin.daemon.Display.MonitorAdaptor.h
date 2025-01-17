/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Display.Monitor.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Display.MonitorAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Display.Monitor.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_DISPLAY_MONITORADAPTOR_H
#define COM_DEEPIN_DAEMON_DISPLAY_MONITORADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Display.Monitor.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Display.Monitor
 */
class MonitorAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Display.Monitor")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Display.Monitor\">\n"
"    <method name=\"Enable\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"SetMode\">\n"
"      <arg direction=\"in\" type=\"u\"/>\n"
"    </method>\n"
"    <method name=\"SetModeBySize\">\n"
"      <arg direction=\"in\" type=\"q\"/>\n"
"      <arg direction=\"in\" type=\"q\"/>\n"
"    </method>\n"
"    <method name=\"SetPosition\">\n"
"      <arg direction=\"in\" type=\"n\"/>\n"
"      <arg direction=\"in\" type=\"n\"/>\n"
"    </method>\n"
"    <method name=\"SetReflect\">\n"
"      <arg direction=\"in\" type=\"q\"/>\n"
"    </method>\n"
"    <method name=\"SetRotation\">\n"
"      <arg direction=\"in\" type=\"q\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"s\" name=\"Name\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Model\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Manufacturer\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Enabled\"/>\n"
"    <property access=\"read\" type=\"y\" name=\"CurrentRotateMode\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Connected\"/>\n"
"    <property access=\"read\" type=\"n\" name=\"X\"/>\n"
"    <property access=\"read\" type=\"n\" name=\"Y\"/>\n"
"    <property access=\"read\" type=\"q\" name=\"Width\"/>\n"
"    <property access=\"read\" type=\"q\" name=\"Height\"/>\n"
"    <property access=\"read\" type=\"q\" name=\"Rotation\"/>\n"
"    <property access=\"read\" type=\"q\" name=\"Reflect\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"RefreshRate\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"CurrentFillMode\"/>\n"
"    <property access=\"read\" type=\"u\" name=\"MmHeight\"/>\n"
"    <property access=\"read\" type=\"u\" name=\"MmWidth\"/>\n"
"    <property access=\"read\" type=\"aq\" name=\"Rotations\">\n"
"      <annotation value=\"RotationList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"aq\" name=\"Reflects\">\n"
"      <annotation value=\"ReflectList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"as\" name=\"AvailableFillModes\"/>\n"
"    <property access=\"read\" type=\"(uqqd)\" name=\"BestMode\">\n"
"      <annotation value=\"Resolution\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"(uqqd)\" name=\"CurrentMode\">\n"
"      <annotation value=\"Resolution\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"a(uqqd)\" name=\"Modes\">\n"
"      <annotation value=\"ResolutionList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"  </interface>\n"
        "")
public:
    MonitorAdaptor(QObject *parent);
    virtual ~MonitorAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QStringList AvailableFillModes READ availableFillModes)
    QStringList availableFillModes() const;

    Q_PROPERTY(Resolution BestMode READ bestMode)
    Resolution bestMode() const;

    Q_PROPERTY(bool Connected READ connected)
    bool connected() const;

    Q_PROPERTY(QString CurrentFillMode READ currentFillMode WRITE setCurrentFillMode)
    QString currentFillMode() const;
    void setCurrentFillMode(const QString &value);

    Q_PROPERTY(Resolution CurrentMode READ currentMode)
    Resolution currentMode() const;

    Q_PROPERTY(uchar CurrentRotateMode READ currentRotateMode)
    uchar currentRotateMode() const;

    Q_PROPERTY(bool Enabled READ enabled)
    bool enabled() const;

    Q_PROPERTY(ushort Height READ height)
    ushort height() const;

    Q_PROPERTY(QString Manufacturer READ manufacturer)
    QString manufacturer() const;

    Q_PROPERTY(uint MmHeight READ mmHeight)
    uint mmHeight() const;

    Q_PROPERTY(uint MmWidth READ mmWidth)
    uint mmWidth() const;

    Q_PROPERTY(QString Model READ model)
    QString model() const;

    Q_PROPERTY(ResolutionList Modes READ modes)
    ResolutionList modes() const;

    Q_PROPERTY(QString Name READ name)
    QString name() const;

    Q_PROPERTY(ushort Reflect READ reflect)
    ushort reflect() const;

    Q_PROPERTY(ReflectList Reflects READ reflects)
    ReflectList reflects() const;

    Q_PROPERTY(double RefreshRate READ refreshRate)
    double refreshRate() const;

    Q_PROPERTY(ushort Rotation READ rotation)
    ushort rotation() const;

    Q_PROPERTY(RotationList Rotations READ rotations)
    RotationList rotations() const;

    Q_PROPERTY(ushort Width READ width)
    ushort width() const;

    Q_PROPERTY(short X READ x)
    short x() const;

    Q_PROPERTY(short Y READ y)
    short y() const;

public Q_SLOTS: // METHODS
    void Enable(bool in0);
    void SetMode(uint in0);
    void SetModeBySize(ushort in0, ushort in1);
    void SetPosition(short in0, short in1);
    void SetReflect(ushort in0);
    void SetRotation(ushort in0);
Q_SIGNALS: // SIGNALS
};

#endif