/*
 * shavit's Timer - mapchooser.inc file
 * by: shavit
 *
 * This file is part of shavit's Timer.
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Called when a player RTV's.
 * Requires shavit-mapchooser.
 *
 * @param client                    Client index.
 * @noreturn
 */
forward void SMC_OnRTV(int client);

/**
 * Called when a player UNRTV's.
 * Requires shavit-mapchooser.
 *
 * @param client                    Client index.
 * @noreturn
 */
forward void SMC_OnUnRTV(int client);

/**
 * Called when the map changes from an RTV.
 * Requires shavit-mapchooser.
 *
 * @noreturn
 */
forward void SMC_OnSuccesfulRTV();

public SharedPlugin __pl_shavit_mapchooser =
{
	name = "shavit-mapchooser",
	file = "shavit-mapchooser.smx",
#if defined REQUIRE_PLUGIN
	required = 1
#else
	required = 0
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_shavit_mapchooser_SetNTVOptional()
{
}
#endif