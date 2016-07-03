/*  NETMAJ-XUI -- X User Interface --  Copyright Notice
 *
 *      Copyright (c) 1995,1996 Todo Software All rights reserved.
 *
 *   You can redistribute it and/or modify this software under the terms
 *  of the GNU General Public License version 2 as published by
 *  the Free Software Foundation.
 *
 *   This software is provided 'as-is', without any express or implied
 *  warranty.  In no event will the author be held liable for any damages
 *  arising from the use of this software.
 *  See the gpl.text for more details.
 *
 *   If you would like to do something with NETMAJ that this copyright
 *  prohibits (such as distributing it with a commercial product,
 *  using portions of the source in some other program, etc.), please
 *  contact the author (preferably via email).  Arrangements can
 *  probably be worked out.
 *
 *   Todo Software : NBC02365@niftyserve.or.jp
 */
/*  -*- Mode: C -*- 
 * This file is part of xui
 * 
 * radio.h -- 
 * 
 * $Id: radio.h,v 1.2 1996/07/31 22:47:54 suz Exp $
 * Author          : NBC02365@niftyserve.or.jp
 * Created On      : Thu Jan 25 22:58:42 1996
 * Last Modified By: NBC02365@niftyserve.or.jp
 * Last Modified On: Thu Jan 25 22:58:51 1996
 * 
 * Copyright (C) 1995,1996 Todo Software All rights reserved.
 */

struct widget_radio
  {
    _base_widget_body;
    gc_t gc;
    integer_t value;
    integer_t radiobuttonstyle;
    integer_t radiobutton_width;
    integer_t radiobutton_height;
    integer_t radiobutton_border_width;
  };
extern struct item_type item_type_radio;
