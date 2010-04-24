/****************************************************************************************
*   Copyright (C) 2010 Gao Rui
*   E-mail: gaorui.2009@gmail.com
*
*   Filename: qtupnpcontrolpoint.h
*   This file is part of QUPnP.
*
*   This library is free software; you can redistribute it and/or
*   modify it under the terms of the GNU Lesser General Public
*   License as published by the Free Software Foundation; either
*   version 2.1 of the License, or (at your option) any later version.
*
*   This library is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
*   Lesser General Public License for more details.
*
*   You should have received a copy of the GNU Lesser General Public
*   License along with this library; if not, write to the Free Software
*   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
****************************************************************************************/

#ifndef QTUPNPCONTROLPOINT_H
#define QTUPNPCONTROLPOINT_H

#include <QObject>

namespace QUPnP
{
class QtUpnpDeviceProxy;
class QtUpnpServiceProxy;
class QtSsdpResourceBrowser;

class QtUpnpControlPoint : public QObject
{
    Q_OBJECT

public:
    QtUpnpControlPoint(QObject * parent = 0);
    ~QtUpnpControlPoint();

private:
    QtSsdpResourceBrowser *m_resourceBrowser;
    QList<QtUpnpDeviceProxy *> m_devices;
    QList<QtUpnpServiceProxy *> m_services;

Q_SIGNALS:
    void deviceProxyAvailable(QtUpnpDeviceProxy *device);
    void deviceProxyUnavailable(QtUpnpDeviceProxy *device);
    void deviceProxyUpdate(QtUpnpDeviceProxy *device);

    void serviceProxyAvailable(QtUpnpServiceProxy *service);
    void serviceProxyUnavailable(QtUpnpServiceProxy *service);
    void vProxyUpdate(QtUpnpServiceProxy *service);
};
}
#endif
