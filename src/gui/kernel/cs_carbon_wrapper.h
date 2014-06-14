/***********************************************************************
*
* Copyright (c) 2012-2014 Barbara Geller
* Copyright (c) 2012-2014 Ansel Sermersheim
* Copyright (c) 2012-2014 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
*
* This file is part of CopperSpice.
*
* CopperSpice is free software: you can redistribute it and/or 
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with CopperSpice.  If not, see 
* <http://www.gnu.org/licenses/>.
*
***********************************************************************/

#ifndef CS_CARBON_WRAPPER_H
#define CS_CARBON_WRAPPER_H

// OS X framework 
#include <ApplicationServices/ApplicationServices.h>

#ifdef check
#undef check
#endif

using SInt32    = int32_t;
using OSStatus  = SInt32;

struct __HIShape;

struct CGContext;
struct CGImage;
struct OpaqueEventRef;
struct OpaqueEventHandlerCallRef;
struct OpaqueEventHandlerRef;
struct OpaqueIconRef;
struct OpaqueMenuRef;
struct OpaqueRgnHandle;

using CGContextRef                 = CGContext *;
using CGImageRef                   = CGImage *;
using HIShapeRef                   = const __HIShape *;
using HIMutableShapeRef            = __HIShape *;
using EventRef                     = OpaqueEventRef *;
using EventHandlerCallRef          = OpaqueEventHandlerCallRef *;
using EventHandlerRef              = OpaqueEventHandlerRef *;
using IconRef                      = OpaqueIconRef *;
using MenuRef                      = OpaqueMenuRef *;
using RgnHandle                    = OpaqueRgnHandle *;

using AEDescList                   = AEDesc;
using AERecord                     = AEDescList;
using AppleEvent                   = AERecord;

#endif
