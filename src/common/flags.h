/*
 * Copyright (C) 2004 Dizzy
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef INCLUDED_FLAGS_H
#define INCLUDED_FLAGS_H

#define FLAG_ZERO(var)	*(var) = 0
#define FLAG_SET(var,flag) *(var) |= flag
#define FLAG_CLEAR(var,flag) *(var) &= ~flag
#define FLAG_ISSET(var,flag) (var & flag)

#endif /* INCLUDED_FLAGS_H */
