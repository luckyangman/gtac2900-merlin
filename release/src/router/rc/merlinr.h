/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 * Copyright 2019, paldier <paldier@hotmail.com>.
 * All Rights Reserved.
 * 
 *
 */


#ifdef RTCONFIG_UUPLUGIN
extern void exec_uu(void);
#endif
#ifdef RTCONFIG_FRS_LIVE_UPDATE
#if defined(RTCONFIG_BCMARM) || defined(RTCONFIG_LANTIQ) || defined(RTCONFIG_QCA) || defined(RTCONFIG_HND_ROUTER) || defined(RTCONFIG_RALINK)
extern int merlinr_firmware_check_update_main(int argc, char *argv[]);
#endif
#endif

