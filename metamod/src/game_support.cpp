#include "precompiled.h"

// Adapted from adminmod h_export.cpp:
//! this structure contains a list of supported mods and their dlls names
//! To add support for another mod add an entry here, and add all the
//! exported entities to link_func.cpp
const game_modinfo_t g_known_games[] = {
	// name/gamedir linux_so        win_dll         desc
	//
	// Previously enumerated in this sourcefile, the list is now kept in a
	// separate file, generated based on game information stored in a
	// convenient db.
	{ "action",     "ahl.so",      "ahl.dll",      "Action Half-Life"}, 
	{ "ag",         "ag.so",       "ag.dll",       "Adrenaline Gamer" },
	{ "ag3",        "hl.so",       "hl.dll",       "Adrenalinegamer 3.x"},
	{ "aghl",       "ag.so",       "ag.dll",       "Adrenalinegamer 4.x"},
	{ "arg",        "arg.so",      "hl.dll",       "Arg!"},
        { "asheep",     "hl.so",       "hl.dll",       "Azure Sheep"},
	{ "bdef",       "../cl_dlls/server.so",       "../cl_dlls/server.dll",       "Base Defense" }, //workaround
	{ "bg",         "bg.so",       "bg.dll", "The Battle Grounds"},
	{ "bhl",        "none", "bhl.dll", "Brutal Half-Life" }, //have no linux binary
	{ "bot",        "bot.so", "bot.dll", "Bot"},
	{ "brainbread", "bb.so", "bb.dll", "Brain Bread"},
	{ "bshift",     "bshift.so",    			"hl.dll",       "Half-Life: Blue Shift" },
	{ "bumpercars", "hl.so",       "hl.dll", "Bumper Cars"},
	{ "bumpercars", "hl.so",       "hl.dll", "none", "Bumper Cars"},
	{ "buzzybots", "bb.so",       "bb.dll", "BuzzyBots"},
	{ "ckf3",       "none",       "mp.dll", "Chicken Fortress 3" },
	{ "cs13",       "cs.so", "mp.dll", "Counter-Strike 1.3"},
	{ "cstrike",       "cs.so",       "mp.dll",       "Counter-Strike" },
	{ "csv15", "cs.so", "mp.dll", "Counter-Strike 1.5 (Steam)"},
	{ "czero",       "cs.so",       "mp.dll",       "Counter-Strike:Condition Zero" },
	{ "czeror",       "cz.so",       "cz.dll",       "Counter-Strike:Condition Zero Deleted Scenes" },
	{ "dcrisis", "dc.so", "dc.dll", "Desert Crisis"},
	{ "decay", "none", "decay.dll", "Half-Life: Decay"},
	{ "dmc",        "dmc.so",       			"dmc.dll",      "Deathmatch Classic" },
	{ "dod",        "dod.so",       			"dod.dll",      "Day of Defeat" },
	{ "dpb", "pb.i386.so", "pb.dll", "Digital Paintball"},
	{ "dragonmodz", "hl.so", "mp.dll", "Dragon Mod Z"},
	{ "esf",	"../linuxdll/hl_i386.so",	"hl.dll",		"Earth's Special Forces (Steam)" },
	{ "esf",		"hl.so",					"hl.dll",		"Earth's Special Forces (Old)" },
	{ "existence", "ex.so", "existence.dll", "Existence"},
	{ "firearms", "fa.so", "firearms.dll", "Firearms"},
	{ "firearms25", "fa.so", "firearms.dll", "Retro Firearms"},
	{ "freeze", "mp.so", "mp.dll", "Freeze"},
	{ "frontline", "front.so", "frontline.dll", "Frontline Force"},
	{ "gangstawars", "gangsta.so", "gwars27.dll", "Gangsta Wars (Steam)"},
	{ "gangwars", "mp.so", "mp.dll", "Gangwars"},
	{ "gearbox",    "opfor.so",     			"opfor.dll",    "Opposing Force" },
	{ "globalwarfare", "gw.so", "mp.dll", "Global Warfare"},
	{ "goldeneye", "golden.so", "mp.dll", "Goldeneye"},
	{ "hcfrenzy", "hcfrenzy.so", "hcfrenzy.dll", "Headcrab Frenzy" },
	{ "hl15we", "hl.so", "hl.dll", "Half-Life 1.5: Weapon Edition"},
	{ "hlrally", "hlr.so", "hlrally.dll", "HL-Rally"},
	{ "holywars", "hl.so", "holywars.dll", "Holy Wars"},
	{ "hostileintent", "hl.so", "hl.dll", "Hostile Intent"},
	{ "ios", "ios.so", "ios.dll", "International Online Soccer"},
	{ "judgedm", "judge.so", "mp.dll", "Judgement"},
	{ "kanonball", "hl.so", "kanonball.dll", "Kanonball"},
	{ "monkeystrike", "ms.so", "monkey.dll", "Monkeystrike"},
	{ "MorbidPR", "morbid.so", "morbid.dll", "Morbid Inclination"},
	{ "movein", "hl.so", "hl.dll", "Move In!"},
	{ "msc", "none", "ms.dll", "Master Sword Continued" },
	{ "ns",         "ns.so",       				"ns.dll",       "Natural Selection" },
	{ "nsp",        "ns.so",       				"ns.dll",       "Natural Selection Beta" },
	{ "oel", "hl.so", "hl.dll", "OeL Half-Life"},
	{ "og", "og.so", "og.dll", "Over Ground"},
	{ "ol", "ol.so", "hl.dll", "Outlawsmod"},
	{ "ops1942", "spirit.so", "spirit.dll", "Operations 1942"},
	{ "osjb", "osjb.so", "jail.dll", "Open-Source Jailbreak"},
	{ "outbreak", "none", "hl.dll", "Out Break"},
	{ "oz", "mp.so", "mp.dll", "Oz Deathmatch"},
	{ "paintball", "pb.so", "mp.dll", "Paintball"},
	{ "penemy", "pe.so", "pe.dll", "Public Enemy"},
	{ "phineas", "phineas.so", "phineas.dll", "Phineas Bot"},
	{ "ponreturn", "ponr.so", "mp.dll", "Point of No Return"},
	{ "pvk", "hl.so", "hl.dll", "Pirates, Vikings and Knights"},
	{ "rc2", "rc2.so", "rc2.dll", "Rocket Crowbar 2"},
	{ "recbb2", "recb.so", "recb.dll", "Resident Evil : Cold Blood" },
	{ "retrocs", "rcs.so", "rcs.dll", "Retro Counter-Strike"},
	{ "rewolf", "hl.so", "gunman.dll", "Gunman Chronicles"},
	{ "ricochet",   "ricochet.so",  			"mp.dll",       "Ricochet" },
	{ "rockcrowbar", "rc.so", "rc.dll", "Rocket Crowbar"},
	{ "rockcrowbar", "rc_i386.so", "rc.dll", "Rocket Crowbar"},
	{ "rspecies", "hl.so", "hl.dll", "Rival Species"},
	{ "scihunt", "shunt.so", "shunt.dll", "Scientist Hunt"},
	{ "sdm", "sdmmod.so", "sdmmod.dll", "Special Death Match"},
	{ "sdmmod", "sdmmod.so", "sdmmod.dll", "Special Death Match"},
	{ "ship", "ship.so", "ship.dll", "The Ship"},
	{ "si", "si.so", "si.dll", "Science & Industry"},
	{ "snow", "snow.so", "snow.dll", "Snow-War"},
	{ "stargatetc", "hl.so", "hl.dll", "StargateTC (Old, 1.x)"},
	{ "stargatetc", "stc_i386.so", "hl.dll", "StargateTC (Updated, 2.x)"},
	{ "stargatetc", "stc_i386_opt.so", "hl.dll", "StargateTC (Updated, 2.x)"},
	{ "svencoop", "hl.so", "hl.dll", "Sven Coop (Old)"},
	{ "svencoop", "server.so", "server.dll", "Sven Coop (Steam)" },
	{ "swarm", "swarm.so", "swarm.dll", "Swarm"},
	{ "tfc",        "tfc.so",       			"tfc.dll",      "Team Fortress Classic" },
	{ "thewastes", "thewastes.so", "thewastes.dll", "The Wastes"},
	{ "timeless", "pt.so", "timeless.dll", "Project Timeless"},
	{ "tod", "hl.so", "hl.dll", "Tour of Duty"},
	{ "trainhunters", "th.so", "th.dll", "Train Hunters"},
	{ "trevenge", "trevenge.so", "trevenge.dll", "The Terrorist Revenge"},
	{ "ts",			"ts_i686.so",				"mp.dll",		"The Specialists" },
	{ "ts",         "ts_i386.so",   			"mp.dll",       "The Specialists" },
	{ "tt", "tt.so", "tt.dll", "The Trenches"},
	{ "underworld", "uw.so", "uw.dll", "Underworld Bloodline"},
	{ "valve",      "hl.so",        			"hl.dll",       "Half-Life" },
	{ "vs", "vs.so", "mp.dll", "VampireSlayer"},
	{ "wantedhl", "hl.so", "wanted.dll", "Wanted!"},
	{ "wasteland", "whl_linux.so", "mp.dll", "Wasteland"},
	{ "weapon_wars", "ww.so", "hl.dll", "Weapon Wars"},
	{ "wizardwars", "wizardwars_i486.so", "wizardwars.dll", "Wizard Wars (Steam)"},
	{ "wizardwars_beta", "wizardwars_i486.so", "wizardwars.dll", "Wizard Wars Beta (Steam)"},
	{ "wizwars", "mp.so", "hl.dll", "Wizard Wars (Old)"},
	{ "wormshl", "wormshl_i586.so", "wormshl.dll", "WormsHL (Old)"},
	{ "wormshl", "wormshl_i686.so", "wormshl.dll", "WormsHL (Steam)"},
	{ "zp", "hl_i386.so", "mp.dll", "Zombie Panic"},

	// End of list terminator:
	{ nullptr, nullptr, nullptr, nullptr }
};

// Find a modinfo corresponding to the given game name.
static const game_modinfo_t *lookup_game(const char *name)
{
	for (auto& known : g_known_games) {
		if (known.name && !Q_stricmp(known.name, name))
			return &known;
	}

	// no match found
	return nullptr;
}

bool lookup_game_postfixes(gamedll_t *gamedll)
{
	char pathname[PATH_MAX];
	static char postfix_path[PATH_MAX] = "";

	strlcpy(pathname, gamedll->pathname);

	// find extensions and skip
	char *pos = strrchr(pathname, '.');
	if (pos) {
		*pos = '\0';
	}

	for (size_t i = 0; i < arraysize(g_platform_postfixes); i++)
	{
		postfix_path[0] = '\0';
		strlcat(postfix_path, pathname);
		strlcat(postfix_path, g_platform_postfixes[i]);

		if (is_file_exists_in_gamedir(postfix_path)) {
			strlcpy(gamedll->pathname, postfix_path);
			strlcpy(gamedll->real_pathname, postfix_path);
			gamedll->file = postfix_path;

			return true;
		}
	}

	return false;
}

// Installs gamedll from Steam cache
bool install_gamedll(char *from, const char *to)
{
	if (!from)
		return false;

	if (!to)
		to = from;

	int length_in;
	byte *cachefile = LOAD_FILE_FOR_ME(from, &length_in);

	// If the file seems to exist in the cache.
	if (cachefile) {
		int fd = open(to, O_WRONLY | O_CREAT | O_EXCL | O_BINARY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
		if (fd < 0) {
			META_DEBUG(3, "Installing gamedll from cache: Failed to create file %s: %s", to, strerror(errno));
			FREE_FILE(cachefile);
			return false;
		}

		int length_out = Q_write(fd, cachefile, length_in);
		FREE_FILE(cachefile);
		close(fd);

		// Writing the file was not successfull
		if (length_out != length_in) {
			META_DEBUG(3, "Installing gamedll from chache: Failed to write all %d bytes to file, only %d written: %s", length_in, length_out, strerror(errno));

			// Let's not leave a mess but clean up nicely.
			if (length_out >= 0)
				_unlink(to);

			return false;
		}

		META_LOG("Installed gamedll %s from cache.", to);
	}
	else {
		META_DEBUG(3, "Failed to install gamedll from cache: file %s not found in cache.", from);
		return false;
	}

	return true;
}

// Set all the fields in the gamedll struct, - based either on an entry in
// known_games matching the current gamedir, or on one specified manually
// by the server admin.
//
// meta_errno values:
//  - ME_NOTFOUND	couldn't recognize game
bool setup_gamedll(gamedll_t *gamedll)
{
	bool override = false;
	const game_modinfo_t *known;
	const char *knownfn = nullptr;

	// First, look for a known game, based on gamedir.
	if ((known = lookup_game(gamedll->name))) {
#ifdef _WIN32
		knownfn = known->win_dll;
#else
		knownfn = known->linux_so;
#endif
	}

	// Neither override nor known-list found a gamedll.
	if (!known && !g_config->m_gamedll)
		return false;

	// Use override-dll if specified.
	if (g_config->m_gamedll) {
		strlcpy(gamedll->pathname, g_config->m_gamedll);

		// If the path is relative, the gamedll file will be missing and
		// it might be found in the cache file.
		if (!is_abs_path(gamedll->pathname)) {
			char szInstallPath[MAX_PATH];
			Q_snprintf(szInstallPath, sizeof(szInstallPath), "%s/%s", gamedll->gamedir, gamedll->pathname);

			// If we could successfully install the gamedll from the cache we
			// rectify the pathname to be a full pathname.
			if (install_gamedll(gamedll->pathname, szInstallPath)) {
				strlcpy(gamedll->pathname, szInstallPath);
			}
		}

		override = true;
	}
	// Else use Known-list dll.
	else if (known) {
		Q_snprintf(gamedll->pathname, sizeof(gamedll->pathname), "%s/dlls/%s", gamedll->gamedir, knownfn);
	}
	else {
		// Neither override nor known-list found a gamedll.
		return false;
	}

	// get filename from pathname
	char *cp = Q_strrchr(gamedll->pathname, '/');
	if (cp)
		cp++;
	else
		cp = gamedll->pathname;

	gamedll->file = cp;

	// If found, store also the supposed "real" dll path based on the
	// gamedir, in case it differs from the "override" dll path.
	if (known && override) {
		Q_snprintf(gamedll->real_pathname, sizeof(gamedll->real_pathname), "%s/dlls/%s", gamedll->gamedir, knownfn);
	}
	else {
		strlcpy(gamedll->real_pathname, gamedll->pathname);
	}

	if (override) {
		// generate a desc
		Q_snprintf(gamedll->desc, sizeof(gamedll->desc), "%s (override)", gamedll->file);

		// log result
		META_LOG("Overriding game '%s' with dllfile '%s'", gamedll->name, gamedll->file);
	}
	else if (known) {
		strlcpy(gamedll->desc, known->desc);

#if !defined(_WIN32)
		if (!is_file_exists_in_gamedir(gamedll->pathname))
		{
			// trying lookup gamedll with postfixes ie _i386.so
			if (lookup_game_postfixes(gamedll)) {
				META_DEBUG(3, "dll: Trying lookup to gamedll with postfixes was a success. Game '%s'", gamedll->pathname);
			}
		}
#endif

		META_LOG("Recognized game '%s'; using dllfile '%s'", gamedll->name, gamedll->file);
	}

	return true;
}
