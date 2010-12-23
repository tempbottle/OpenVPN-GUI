/*
 *  OpenVPN-GUI -- A Windows GUI for OpenVPN.
 *
 *  Copyright (C) 2004 Mathias Sundman <mathias@nilings.se>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program (see the file COPYING included with this
 *  distribution); if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#define OPENVPN_REGKEY "SOFTWARE\\OpenVPN"

#define OPENVPNGUI_REGKEY "SOFTWARE\\OpenVPN-GUI"


int GetRegistryKeys();
//int SetRegistryKeys();
int GetRegKey(const char name[], char data[], const char default_data[], DWORD len);
LONG GetRegistryValue(HKEY regkey, const char *name, char *data, DWORD len);
int SetRegistryValue(HKEY regkey, const char *name, char *data);

