/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.InputDevice.Mouse.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.MouseAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.Mouse.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_INPUTDEVICE_MOUSEADAPTOR_H
#define COM_DEEPIN_DAEMON_INPUTDEVICE_MOUSEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.InputDevice.Mouse.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.InputDevice.Mouse
 */
class MouseAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.InputDevice.Mouse")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.InputDevice.Mouse\">\n"
"    <method name=\"Reset\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"LeftHanded\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"DisableTpad\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"NaturalScroll\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"MiddleButtonEmulation\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"AdaptiveAccelProfile\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"MotionAcceleration\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"MotionThreshold\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"MotionScaling\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"DoubleClick\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"DragThreshold\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DeviceList\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Exist\"/>\n"
"  </interface>\n"
        "")
public:
    MouseAdaptor(QObject *parent);
    virtual ~MouseAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool AdaptiveAccelProfile READ adaptiveAccelProfile WRITE setAdaptiveAccelProfile)
    bool adaptiveAccelProfile() const;
    void setAdaptiveAccelProfile(bool value);

    Q_PROPERTY(QString DeviceList READ deviceList)
    QString deviceList() const;

    Q_PROPERTY(bool DisableTpad READ disableTpad WRITE setDisableTpad)
    bool disableTpad() const;
    void setDisableTpad(bool value);

    Q_PROPERTY(int DoubleClick READ doubleClick WRITE setDoubleClick)
    int doubleClick() const;
    void setDoubleClick(int value);

    Q_PROPERTY(int DragThreshold READ dragThreshold WRITE setDragThreshold)
    int dragThreshold() const;
    void setDragThreshold(int value);

    Q_PROPERTY(bool Exist READ exist)
    bool exist() const;

    Q_PROPERTY(bool LeftHanded READ leftHanded WRITE setLeftHanded)
    bool leftHanded() const;
    void setLeftHanded(bool value);

    Q_PROPERTY(bool MiddleButtonEmulation READ middleButtonEmulation WRITE setMiddleButtonEmulation)
    bool middleButtonEmulation() const;
    void setMiddleButtonEmulation(bool value);

    Q_PROPERTY(double MotionAcceleration READ motionAcceleration WRITE setMotionAcceleration)
    double motionAcceleration() const;
    void setMotionAcceleration(double value);

    Q_PROPERTY(double MotionScaling READ motionScaling WRITE setMotionScaling)
    double motionScaling() const;
    void setMotionScaling(double value);

    Q_PROPERTY(double MotionThreshold READ motionThreshold WRITE setMotionThreshold)
    double motionThreshold() const;
    void setMotionThreshold(double value);

    Q_PROPERTY(bool NaturalScroll READ naturalScroll WRITE setNaturalScroll)
    bool naturalScroll() const;
    void setNaturalScroll(bool value);

public Q_SLOTS: // METHODS
    void Reset();
Q_SIGNALS: // SIGNALS
};

#endif