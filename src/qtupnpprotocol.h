/****************************************************************************************
*   Copyright (C) 2010 Gao Rui
*   E-mail: gaorui.2009@gmail.com
*
*   Filename: qtupnpprotocol.h
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

#ifndef QTSSDPPROTOCOL_H
#define QTSSDPPROTOCOL_H

#define VERSION "1.1"

#define SSDP_ADDR "239.255.255.250"
#define SSDP_PORT 1900
#define SSDP_PORT_STR "1900"
#define HTTP_OK "HTTP/1.1 200 OK"

#define SSDP_DISCOVERY_REQUEST                      \
    "M-SEARCH * HTTP/1.1\r\n"                   \
    "Host: " SSDP_ADDR ":" SSDP_PORT_STR "\r\n" \
    "Man: \"ssdp:discover\"\r\n"                \
    "ST: %s\r\n"                                \
    "MX: %d\r\n"                                \
    "User-Agent: %s GSSDP/" VERSION "\r\n\r\n"  \
     
#define SSDP_DISCOVERY_RESPONSE                     \
    "HTTP/1.1 200 OK\r\n"                       \
    "Location: %s\r\n"                          \
    "%s"                                        \
    "Ext:\r\n"                                  \
    "USN: %s\r\n"                               \
    "Server: %s\r\n"                            \
    "Cache-Control: max-age=%d\r\n"             \
    "ST: %s\r\n"                                \
    "Date: %s\r\n"                              \
    "Content-Length: 0\r\n\r\n"

#define SSDP_ALIVE_MESSAGE                          \
    "NOTIFY * HTTP/1.1\r\n"                     \
    "Host: " SSDP_ADDR ":" SSDP_PORT_STR "\r\n" \
    "Cache-Control: max-age=%d\r\n"             \
    "Location: %s\r\n"                          \
    "%s"                                        \
    "Server: %s\r\n"                            \
    "NTS: ssdp:alive\r\n"                       \
    "NT: %s\r\n"                                \
    "USN: %s\r\n\r\n"

#define SSDP_BYEBYE_MESSAGE                         \
    "NOTIFY * HTTP/1.1\r\n"                     \
    "Host: " SSDP_ADDR ":" SSDP_PORT_STR "\r\n" \
    "NTS: ssdp:byebye\r\n"                     \
    "NT: %s\r\n"                                \
    "USN: %s\r\n\r\n"

#define SSDP_SEARCH_METHOD "M-SEARCH"
#define SSDP_NOTIFY_METHOD "NOTIFY"

#define SSDP_ALIVE_NTS  "ssdp:alive"
#define SSDP_BYEBYE_NTS "ssdp:byebye"

#define SSDP_DEFAULT_MAX_AGE 1800
#define SSDP_DEFAULT_MX      3

#endif // QSSDPPROTOCOL_H
