/* -*- indent-tabs-mode: nil; tab-width: 4; c-basic-offset: 4; -*-

   loco.c for the Openbox window manager
   Copyright (c) 2008        Derek Foreman
   Copyright (c) 2008        Dana Jansens

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   See the COPYING file for a copy of the GNU General Public License.
*/

#ifndef loco__loco_h
#define loco__loco_h

#include <glib.h>

struct _ObtMainLoop;

void loco_startup(struct _ObtMainLoop *loop);
void loco_shutdown();

void loco_start_screen(gint number);
void loco_stop_screen(gint number);

void loco_reconfigure_screen(gint number);

gboolean loco_on_screen(gint number);


#endif
