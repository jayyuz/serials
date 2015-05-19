/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c serialsAdaptor -a serialsAdaptor.h:serialsAdaptor.cpp serials.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "serialsAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class serialsAdaptor
 */

serialsAdaptor::serialsAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

serialsAdaptor::~serialsAdaptor()
{
    // destructor
}

void serialsAdaptor::Dbus_serial_clear()
{
    // handle method call org.freedesktop.serials.Dbus_serial_clear
    QMetaObject::invokeMethod(parent(), "Dbus_serial_clear");
}

void serialsAdaptor::Dbus_serial_close()
{
    // handle method call org.freedesktop.serials.Dbus_serial_close
    QMetaObject::invokeMethod(parent(), "Dbus_serial_close");
}

bool serialsAdaptor::Dbus_serial_open()
{
    // handle method call org.freedesktop.serials.Dbus_serial_open
    bool response;
    QMetaObject::invokeMethod(parent(), "Dbus_serial_open", Q_RETURN_ARG(bool, response));
    return response;
}

QByteArray serialsAdaptor::Dbus_serial_readAll()
{
    // handle method call org.freedesktop.serials.Dbus_serial_readAll
    QByteArray response;
    QMetaObject::invokeMethod(parent(), "Dbus_serial_readAll", Q_RETURN_ARG(QByteArray, response));
    return response;
}

void serialsAdaptor::Dbus_serial_setBaudRate(int baudrate)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setBaudRate
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setBaudRate", Q_ARG(int, baudrate));
}

void serialsAdaptor::Dbus_serial_setDataBits(int databit)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setDataBits
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setDataBits", Q_ARG(int, databit));
}

void serialsAdaptor::Dbus_serial_setFlowControl(int flowcontrol)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setFlowControl
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setFlowControl", Q_ARG(int, flowcontrol));
}

void serialsAdaptor::Dbus_serial_setParity(int parity)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setParity
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setParity", Q_ARG(int, parity));
}

void serialsAdaptor::Dbus_serial_setPortName(const QString &portname)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setPortName
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setPortName", Q_ARG(QString, portname));
}

void serialsAdaptor::Dbus_serial_setStopBits(int stopbits)
{
    // handle method call org.freedesktop.serials.Dbus_serial_setStopBits
    QMetaObject::invokeMethod(parent(), "Dbus_serial_setStopBits", Q_ARG(int, stopbits));
}

void serialsAdaptor::Dbus_serial_write(const QByteArray &data)
{
    // handle method call org.freedesktop.serials.Dbus_serial_write
    QMetaObject::invokeMethod(parent(), "Dbus_serial_write", Q_ARG(QByteArray, data));
}

void serialsAdaptor::Dbus_serial_write(int data, int len)
{
    // handle method call org.freedesktop.serials.Dbus_serial_write
    QMetaObject::invokeMethod(parent(), "Dbus_serial_write", Q_ARG(int, data), Q_ARG(int, len));
}

void serialsAdaptor::Dbus_readSerial()
{
    emit Dbus_serial();
}

