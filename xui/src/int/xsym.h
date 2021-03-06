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
 * This file is part of my project
 * 
 * xsym.h -- 
 * 
 * $Id: xsym.h,v 1.2 1996/07/31 22:48:54 suz Exp $
 * Author          : NBC02365@niftyserve.or.jp
 * Created On      : Tue May  9 00:48:38 1995
 * Last Modified By: NBC02365@niftyserve.or.jp
 * Last Modified On: Tue May  9 00:48:39 1995
 * 
 *  Copyright (C) 1995,1996 Todo Software All rights reserved
 */

typedef struct xsym {
  struct xsym *hashnext;
  cardinal_t namelength;
  cardinal_t nameindex;
  cardinal_t ofs;
  cardinal_t n_type;
} *xsym_t ;
