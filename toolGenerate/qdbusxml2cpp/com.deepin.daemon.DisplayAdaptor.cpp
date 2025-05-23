/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Display.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.DisplayAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Display.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.DisplayAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DisplayAdaptor
 */

DisplayAdaptor::DisplayAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DisplayAdaptor::~DisplayAdaptor()
{
    // destructor
}

BrightnessMap DisplayAdaptor::brightness() const
{
    // get the value of property Brightness
    return qvariant_cast< BrightnessMap >(parent()->property("Brightness"));
}

int DisplayAdaptor::colorTemperatureManual() const
{
    // get the value of property ColorTemperatureManual
    return qvariant_cast< int >(parent()->property("ColorTemperatureManual"));
}

int DisplayAdaptor::colorTemperatureMode() const
{
    // get the value of property ColorTemperatureMode
    return qvariant_cast< int >(parent()->property("ColorTemperatureMode"));
}

QString DisplayAdaptor::currentCustomId() const
{
    // get the value of property CurrentCustomId
    return qvariant_cast< QString >(parent()->property("CurrentCustomId"));
}

QStringList DisplayAdaptor::customIdList() const
{
    // get the value of property CustomIdList
    return qvariant_cast< QStringList >(parent()->property("CustomIdList"));
}

uchar DisplayAdaptor::displayMode() const
{
    // get the value of property DisplayMode
    return qvariant_cast< uchar >(parent()->property("DisplayMode"));
}

bool DisplayAdaptor::hasChanged() const
{
    // get the value of property HasChanged
    return qvariant_cast< bool >(parent()->property("HasChanged"));
}

uint DisplayAdaptor::maxBacklightBrightness() const
{
    // get the value of property MaxBacklightBrightness
    return qvariant_cast< uint >(parent()->property("MaxBacklightBrightness"));
}

QList<QDBusObjectPath> DisplayAdaptor::monitors() const
{
    // get the value of property Monitors
    return qvariant_cast< QList<QDBusObjectPath> >(parent()->property("Monitors"));
}

QString DisplayAdaptor::primary() const
{
    // get the value of property Primary
    return qvariant_cast< QString >(parent()->property("Primary"));
}

ScreenRect DisplayAdaptor::primaryRect() const
{
    // get the value of property PrimaryRect
    return qvariant_cast< ScreenRect >(parent()->property("PrimaryRect"));
}

ushort DisplayAdaptor::screenHeight() const
{
    // get the value of property ScreenHeight
    return qvariant_cast< ushort >(parent()->property("ScreenHeight"));
}

ushort DisplayAdaptor::screenWidth() const
{
    // get the value of property ScreenWidth
    return qvariant_cast< ushort >(parent()->property("ScreenWidth"));
}

bool DisplayAdaptor::supportColorTemperature() const
{
    // get the value of property SupportColorTemperature
    return qvariant_cast< bool >(parent()->property("SupportColorTemperature"));
}

TouchscreenMap DisplayAdaptor::touchMap() const
{
    // get the value of property TouchMap
    return qvariant_cast< TouchscreenMap >(parent()->property("TouchMap"));
}

TouchscreenInfoList DisplayAdaptor::touchscreens() const
{
    // get the value of property Touchscreens
    return qvariant_cast< TouchscreenInfoList >(parent()->property("Touchscreens"));
}

TouchscreenInfoList_V2 DisplayAdaptor::touchscreensV2() const
{
    // get the value of property TouchscreensV2
    return qvariant_cast< TouchscreenInfoList_V2 >(parent()->property("TouchscreensV2"));
}

void DisplayAdaptor::ApplyChanges()
{
    // handle method call com.deepin.daemon.Display.ApplyChanges
    QMetaObject::invokeMethod(parent(), "ApplyChanges");
}

void DisplayAdaptor::AssociateTouch(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Display.AssociateTouch
    QMetaObject::invokeMethod(parent(), "AssociateTouch", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void DisplayAdaptor::AssociateTouchByUUID(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Display.AssociateTouchByUUID
    QMetaObject::invokeMethod(parent(), "AssociateTouchByUUID", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void DisplayAdaptor::ChangeBrightness(bool in0)
{
    // handle method call com.deepin.daemon.Display.ChangeBrightness
    QMetaObject::invokeMethod(parent(), "ChangeBrightness", Q_ARG(bool, in0));
}

void DisplayAdaptor::DeleteCustomMode(const QString &in0)
{
    // handle method call com.deepin.daemon.Display.DeleteCustomMode
    QMetaObject::invokeMethod(parent(), "DeleteCustomMode", Q_ARG(QString, in0));
}

uchar DisplayAdaptor::GetRealDisplayMode()
{
    // handle method call com.deepin.daemon.Display.GetRealDisplayMode
    uchar out0;
    QMetaObject::invokeMethod(parent(), "GetRealDisplayMode", Q_RETURN_ARG(uchar, out0));
    return out0;
}

QStringList DisplayAdaptor::ListOutputNames()
{
    // handle method call com.deepin.daemon.Display.ListOutputNames
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "ListOutputNames", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

ResolutionList DisplayAdaptor::ListOutputsCommonModes()
{
    // handle method call com.deepin.daemon.Display.ListOutputsCommonModes
    ResolutionList out0;
    QMetaObject::invokeMethod(parent(), "ListOutputsCommonModes", Q_RETURN_ARG(ResolutionList, out0));
    return out0;
}

void DisplayAdaptor::ModifyConfigName(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Display.ModifyConfigName
    QMetaObject::invokeMethod(parent(), "ModifyConfigName", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void DisplayAdaptor::RefreshBrightness()
{
    // handle method call com.deepin.daemon.Display.RefreshBrightness
    QMetaObject::invokeMethod(parent(), "RefreshBrightness");
}

void DisplayAdaptor::Reset()
{
    // handle method call com.deepin.daemon.Display.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

void DisplayAdaptor::ResetChanges()
{
    // handle method call com.deepin.daemon.Display.ResetChanges
    QMetaObject::invokeMethod(parent(), "ResetChanges");
}

void DisplayAdaptor::Save()
{
    // handle method call com.deepin.daemon.Display.Save
    QMetaObject::invokeMethod(parent(), "Save");
}

void DisplayAdaptor::SetAndSaveBrightness(const QString &in0, double in1)
{
    // handle method call com.deepin.daemon.Display.SetAndSaveBrightness
    QMetaObject::invokeMethod(parent(), "SetAndSaveBrightness", Q_ARG(QString, in0), Q_ARG(double, in1));
}

void DisplayAdaptor::SetBrightness(const QString &in0, double in1)
{
    // handle method call com.deepin.daemon.Display.SetBrightness
    QMetaObject::invokeMethod(parent(), "SetBrightness", Q_ARG(QString, in0), Q_ARG(double, in1));
}

void DisplayAdaptor::SetColorTemperature(int in0)
{
    // handle method call com.deepin.daemon.Display.SetColorTemperature
    QMetaObject::invokeMethod(parent(), "SetColorTemperature", Q_ARG(int, in0));
}

void DisplayAdaptor::SetMethodAdjustCCT(int in0)
{
    // handle method call com.deepin.daemon.Display.SetMethodAdjustCCT
    QMetaObject::invokeMethod(parent(), "SetMethodAdjustCCT", Q_ARG(int, in0));
}

void DisplayAdaptor::SetPrimary(const QString &in0)
{
    // handle method call com.deepin.daemon.Display.SetPrimary
    QMetaObject::invokeMethod(parent(), "SetPrimary", Q_ARG(QString, in0));
}

void DisplayAdaptor::SwitchMode(uchar in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Display.SwitchMode
    QMetaObject::invokeMethod(parent(), "SwitchMode", Q_ARG(uchar, in0), Q_ARG(QString, in1));
}

