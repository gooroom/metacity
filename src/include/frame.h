/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/*
 * Copyright (C) 2008 Iain Holmes
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef META_FRAME_H
#define META_FRAME_H

#include <X11/Xlib.h>
#include <libmetacity/meta-frame-borders.h>

#include "common.h"
#include "types.h"

void   meta_frame_get_mask     (MetaFrame        *frame,
                                cairo_t          *cr);

Window meta_frame_get_xwindow  (MetaFrame        *frame);

void   meta_frame_calc_borders (MetaFrame        *frame,
                                MetaFrameBorders *borders);

#endif