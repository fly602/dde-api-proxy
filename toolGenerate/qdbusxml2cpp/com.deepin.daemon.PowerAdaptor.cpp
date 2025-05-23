/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Power.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.PowerAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Power.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.PowerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class PowerAdaptor
 */

PowerAdaptor::PowerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

PowerAdaptor::~PowerAdaptor()
{
    // destructor
}

bool PowerAdaptor::ambientLightAdjustBrightness() const
{
    // get the value of property AmbientLightAdjustBrightness
    return qvariant_cast< bool >(parent()->property("AmbientLightAdjustBrightness"));
}

void PowerAdaptor::setAmbientLightAdjustBrightness(bool value)
{
    // set the value of property AmbientLightAdjustBrightness
    parent()->setProperty("AmbientLightAdjustBrightness", QVariant::fromValue(value));
}

BatteryPresentInfo PowerAdaptor::batteryIsPresent() const
{
    // get the value of property BatteryIsPresent
    return qvariant_cast< BatteryPresentInfo >(parent()->property("BatteryIsPresent"));
}

int PowerAdaptor::batteryLidClosedAction() const
{
    // get the value of property BatteryLidClosedAction
    return qvariant_cast< int >(parent()->property("BatteryLidClosedAction"));
}

void PowerAdaptor::setBatteryLidClosedAction(int value)
{
    // set the value of property BatteryLidClosedAction
    parent()->setProperty("BatteryLidClosedAction", QVariant::fromValue(value));
}

int PowerAdaptor::batteryLockDelay() const
{
    // get the value of property BatteryLockDelay
    return qvariant_cast< int >(parent()->property("BatteryLockDelay"));
}

void PowerAdaptor::setBatteryLockDelay(int value)
{
    // set the value of property BatteryLockDelay
    parent()->setProperty("BatteryLockDelay", QVariant::fromValue(value));
}

BatteryPercentageInfo PowerAdaptor::batteryPercentage() const
{
    // get the value of property BatteryPercentage
    return qvariant_cast< BatteryPercentageInfo >(parent()->property("BatteryPercentage"));
}

int PowerAdaptor::batteryPressPowerBtnAction() const
{
    // get the value of property BatteryPressPowerBtnAction
    return qvariant_cast< int >(parent()->property("BatteryPressPowerBtnAction"));
}

void PowerAdaptor::setBatteryPressPowerBtnAction(int value)
{
    // set the value of property BatteryPressPowerBtnAction
    parent()->setProperty("BatteryPressPowerBtnAction", QVariant::fromValue(value));
}

int PowerAdaptor::batteryScreenBlackDelay() const
{
    // get the value of property BatteryScreenBlackDelay
    return qvariant_cast< int >(parent()->property("BatteryScreenBlackDelay"));
}

void PowerAdaptor::setBatteryScreenBlackDelay(int value)
{
    // set the value of property BatteryScreenBlackDelay
    parent()->setProperty("BatteryScreenBlackDelay", QVariant::fromValue(value));
}

int PowerAdaptor::batteryScreensaverDelay() const
{
    // get the value of property BatteryScreensaverDelay
    return qvariant_cast< int >(parent()->property("BatteryScreensaverDelay"));
}

void PowerAdaptor::setBatteryScreensaverDelay(int value)
{
    // set the value of property BatteryScreensaverDelay
    parent()->setProperty("BatteryScreensaverDelay", QVariant::fromValue(value));
}

int PowerAdaptor::batterySleepDelay() const
{
    // get the value of property BatterySleepDelay
    return qvariant_cast< int >(parent()->property("BatterySleepDelay"));
}

void PowerAdaptor::setBatterySleepDelay(int value)
{
    // set the value of property BatterySleepDelay
    parent()->setProperty("BatterySleepDelay", QVariant::fromValue(value));
}

BatteryStateInfo PowerAdaptor::batteryState() const
{
    // get the value of property BatteryState
    return qvariant_cast< BatteryStateInfo >(parent()->property("BatteryState"));
}

bool PowerAdaptor::hasAmbientLightSensor() const
{
    // get the value of property HasAmbientLightSensor
    return qvariant_cast< bool >(parent()->property("HasAmbientLightSensor"));
}

bool PowerAdaptor::isHighPerformanceSupported() const
{
    // get the value of property IsHighPerformanceSupported
    return qvariant_cast< bool >(parent()->property("IsHighPerformanceSupported"));
}

bool PowerAdaptor::lidClosedSleep() const
{
    // get the value of property LidClosedSleep
    return qvariant_cast< bool >(parent()->property("LidClosedSleep"));
}

void PowerAdaptor::setLidClosedSleep(bool value)
{
    // set the value of property LidClosedSleep
    parent()->setProperty("LidClosedSleep", QVariant::fromValue(value));
}

bool PowerAdaptor::lidIsPresent() const
{
    // get the value of property LidIsPresent
    return qvariant_cast< bool >(parent()->property("LidIsPresent"));
}

int PowerAdaptor::linePowerLidClosedAction() const
{
    // get the value of property LinePowerLidClosedAction
    return qvariant_cast< int >(parent()->property("LinePowerLidClosedAction"));
}

void PowerAdaptor::setLinePowerLidClosedAction(int value)
{
    // set the value of property LinePowerLidClosedAction
    parent()->setProperty("LinePowerLidClosedAction", QVariant::fromValue(value));
}

int PowerAdaptor::linePowerLockDelay() const
{
    // get the value of property LinePowerLockDelay
    return qvariant_cast< int >(parent()->property("LinePowerLockDelay"));
}

void PowerAdaptor::setLinePowerLockDelay(int value)
{
    // set the value of property LinePowerLockDelay
    parent()->setProperty("LinePowerLockDelay", QVariant::fromValue(value));
}

int PowerAdaptor::linePowerPressPowerBtnAction() const
{
    // get the value of property LinePowerPressPowerBtnAction
    return qvariant_cast< int >(parent()->property("LinePowerPressPowerBtnAction"));
}

void PowerAdaptor::setLinePowerPressPowerBtnAction(int value)
{
    // set the value of property LinePowerPressPowerBtnAction
    parent()->setProperty("LinePowerPressPowerBtnAction", QVariant::fromValue(value));
}

int PowerAdaptor::linePowerScreenBlackDelay() const
{
    // get the value of property LinePowerScreenBlackDelay
    return qvariant_cast< int >(parent()->property("LinePowerScreenBlackDelay"));
}

void PowerAdaptor::setLinePowerScreenBlackDelay(int value)
{
    // set the value of property LinePowerScreenBlackDelay
    parent()->setProperty("LinePowerScreenBlackDelay", QVariant::fromValue(value));
}

int PowerAdaptor::linePowerScreensaverDelay() const
{
    // get the value of property LinePowerScreensaverDelay
    return qvariant_cast< int >(parent()->property("LinePowerScreensaverDelay"));
}

void PowerAdaptor::setLinePowerScreensaverDelay(int value)
{
    // set the value of property LinePowerScreensaverDelay
    parent()->setProperty("LinePowerScreensaverDelay", QVariant::fromValue(value));
}

int PowerAdaptor::linePowerSleepDelay() const
{
    // get the value of property LinePowerSleepDelay
    return qvariant_cast< int >(parent()->property("LinePowerSleepDelay"));
}

void PowerAdaptor::setLinePowerSleepDelay(int value)
{
    // set the value of property LinePowerSleepDelay
    parent()->setProperty("LinePowerSleepDelay", QVariant::fromValue(value));
}

int PowerAdaptor::lowPowerAutoSleepThreshold() const
{
    // get the value of property LowPowerAutoSleepThreshold
    return qvariant_cast< int >(parent()->property("LowPowerAutoSleepThreshold"));
}

void PowerAdaptor::setLowPowerAutoSleepThreshold(int value)
{
    // set the value of property LowPowerAutoSleepThreshold
    parent()->setProperty("LowPowerAutoSleepThreshold", QVariant::fromValue(value));
}

bool PowerAdaptor::lowPowerNotifyEnable() const
{
    // get the value of property LowPowerNotifyEnable
    return qvariant_cast< bool >(parent()->property("LowPowerNotifyEnable"));
}

void PowerAdaptor::setLowPowerNotifyEnable(bool value)
{
    // set the value of property LowPowerNotifyEnable
    parent()->setProperty("LowPowerNotifyEnable", QVariant::fromValue(value));
}

int PowerAdaptor::lowPowerNotifyThreshold() const
{
    // get the value of property LowPowerNotifyThreshold
    return qvariant_cast< int >(parent()->property("LowPowerNotifyThreshold"));
}

void PowerAdaptor::setLowPowerNotifyThreshold(int value)
{
    // set the value of property LowPowerNotifyThreshold
    parent()->setProperty("LowPowerNotifyThreshold", QVariant::fromValue(value));
}

bool PowerAdaptor::onBattery() const
{
    // get the value of property OnBattery
    return qvariant_cast< bool >(parent()->property("OnBattery"));
}

bool PowerAdaptor::screenBlackLock() const
{
    // get the value of property ScreenBlackLock
    return qvariant_cast< bool >(parent()->property("ScreenBlackLock"));
}

void PowerAdaptor::setScreenBlackLock(bool value)
{
    // set the value of property ScreenBlackLock
    parent()->setProperty("ScreenBlackLock", QVariant::fromValue(value));
}

bool PowerAdaptor::sleepLock() const
{
    // get the value of property SleepLock
    return qvariant_cast< bool >(parent()->property("SleepLock"));
}

void PowerAdaptor::setSleepLock(bool value)
{
    // set the value of property SleepLock
    parent()->setProperty("SleepLock", QVariant::fromValue(value));
}

uint PowerAdaptor::warnLevel() const
{
    // get the value of property WarnLevel
    return qvariant_cast< uint >(parent()->property("WarnLevel"));
}

void PowerAdaptor::Reset()
{
    // handle method call com.deepin.daemon.Power.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

