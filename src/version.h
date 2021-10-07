/* XMRig
 * Copyright 2021      Walker Industries>
 */


#ifndef XMRIG_VERSION_H
#define XMRIG_VERSION_H

#define APP_ID        "monerominerwalker"
#define APP_NAME      "XMRWalker"
#define APP_DESC      "XMR Miner by Walker Industries"
#define APP_VERSION   "6.15.2"
#define APP_DOMAIN    "safahifamily.com"
#define APP_SITE      "www.safahifamily.com"
#define APP_COPYRIGHT "Copyright (C) 2020-2021 walkerindustries.com"
#define APP_KIND      "miner"

#define APP_VER_MAJOR  6
#define APP_VER_MINOR  15
#define APP_VER_PATCH  2

#ifdef _MSC_VER
#   if (_MSC_VER >= 1920)
#       define MSVC_VERSION 2019
#   elif (_MSC_VER >= 1910 && _MSC_VER < 1920)
#       define MSVC_VERSION 2017
#   elif _MSC_VER == 1900
#       define MSVC_VERSION 2015
#   elif _MSC_VER == 1800
#       define MSVC_VERSION 2013
#   elif _MSC_VER == 1700
#       define MSVC_VERSION 2012
#   elif _MSC_VER == 1600
#       define MSVC_VERSION 2010
#   else
#       define MSVC_VERSION 0
#   endif
#endif

#endif /* XMRIG_VERSION_H */
