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
	{ "action",             "ahl_i386.so",              "ahl.dll",                   "Action Half-Life"                                 }, // + director's cut [2016]
	{ "ag",                 "ag.so",                    "ag.dll",                    "Adrenaline Gamer"                                 }, // .so file by OpenAG fork
	{ "asheep",             nullptr,                    "hl.dll",                    "Azure Sheep"                                      }, //have no linux binary found!
	{ "bdef",               "../cl_dlls/server.so",     "../cl_dlls/server.dll",     "Base Defense"                                     }, //workaround
	{ "bg",                 "bg.so",                    "bg.dll",                    "The Battle Grounds"                               },
	{ "bhl",                nullptr,                    "bhl.dll",                   "Brutal Half-Life"                                 }, //have no linux binary!
	{ "brainbread",         "bb.so",                    "bb.dll",                    "Brain Bread"                                      },
	{ "bshift",             "bshift.so",                "hl.dll",                    "Half-Life: Blue Shift"                            },
	{ "bumpercars",         "hl.so",                    "hl.dll",                    "Bumper Cars"                                      },
	{ "buzzybots",          "bb.so",                    "bb.dll",                    "BuzzyBots"                                        },
	{ "ckf3",               nullptr,                    "mp.dll",                    "Chicken Fortress 3"                               }, //have no linux binary!
	{ "cs13",               "cs.so",                    "mp.dll",                    "Counter-Strike 1.3"                               },
	{ "cstrike",            "cs.so",                    "mp.dll",                    "Counter-Strike"                                   },
	{ "csv15",              "cs.so",                    "mp.dll",                    "Counter-Strike 1.5 (Steam)"                       },
	{ "czero",              "cs.so",                    "mp.dll",                    "Counter-Strike:Condition Zero"                    },
	{ "czeror",             "cz.so",                    "cz.dll",                    "Counter-Strike:Condition Zero Deleted Scenes"     },
	{ "dcrisis",            "dc.so",                    "dc.dll",                    "Desert Crisis"                                    },
	{ "decay",              nullptr,                    "decay.dll",                 "Half-Life: Decay"                                 },
	{ "dmc",                "dmc.so",                   "dmc.dll",                   "Deathmatch Classic"                               },
	{ "dod",                "dod.so",                   "dod.dll",                   "Day of Defeat"                                    },
	{ "dpb",                "pb.i386.so",               "pb.dll",                    "Digital Paintball"                                },
	{ "dragonmodz",         "hl.so",                    "mp.dll",                    "Dragon Mod Z"                                     },
	{ "esf",                "../linuxdll/hl_i386.so",   "hl.dll",                    "Earth's Special Forces (Steam)"                   }, //workaround
	{ "esf",                "hl.so",                    "hl.dll",                    "Earth's Special Forces (Old)"                     },
	{ "existence",          "ex.so",                    "existence.dll",             "Existence"                                        },
	{ "firearms",           "fa.so",                    "firearms.dll",              "Firearms"                                         },
	{ "frontline",          "front.so",                 "frontline.dll",             "Frontline Force"                                  },
	{ "gangstawars",        "gangsta.so",               "gwars27.dll",               "Gangsta Wars (Steam)"                             },
	{ "gangwars",           "mp.so",                    "mp.dll",                    "Gangwars"                                         },
	{ "gearbox",            "opfor.so",                 "opfor.dll",                 "Opposing Force"                                   },
	{ "globalwarfare",      "gw.so",                    "mp.dll",                    "Global Warfare"                                   },
	{ "goldeneye",          "golden.so",                "mp.dll",                    "Goldeneye"                                        },
	{ "hcfrenzy",           "hcfrenzy.so",              "hcfrenzy.dll",              "Headcrab Frenzy"                                  },
	{ "hl15we",             "hl.so",                    "hl.dll",                    "Half-Life 1.5: Weapon Edition"                    },
	{ "hlrally",            "hlr.so",                   "hlrally.dll",               "HL-Rally"                                         },
	{ "holywars",           "hl.so",                    "holywars.dll",              "Holy Wars"                                        },
	{ "hostileintent",      "hl.so",                    "hl.dll",                    "Hostile Intent"                                   },
	{ "ios",                "ios.so",                   "ios.dll",                   "International Online Soccer"                      },
	{ "judgedm",            "judge.so",                 "mp.dll",                    "Judgement"                                        },
	{ "kanonball",          "hl.so",                    "kanonball.dll",             "Kanonball"                                        },
	{ "monkeystrike",       "ms.so",                    "monkey.dll",                "Monkeystrike"                                     },
	{ "MorbidPR",           "morbid.so",                "morbid.dll",                "Morbid Inclination"                               },
	{ "movein",             "hl.so",                    "hl.dll",                    "Move In!"                                         },
	{ "msc",                nullptr,                    "ms.dll",                    "Master Sword Continued"                           },
	{ "ns",                 "ns.so",                    "ns.dll",                    "Natural Selection"                                },
	{ "nsp",                "ns.so",                    "ns.dll",                    "Natural Selection Beta"                           },
	{ "og",                 "og.so",                    "og.dll",                    "Over Ground"                                      },
	{ "ol",                 "ol.so",                    "hl.dll",                    "Outlawsmod"                                       },
	{ "ops1942",            "spirit.so",                "spirit.dll",                "Operations 1942"                                  },
	{ "osjb",               "osjb.so",                  "jail.dll",                  "Open-Source Jailbreak"                            },
	{ "outbreak",           nullptr,                    "hl.dll",                    "Out Break"                                        }, //have no linux binary
	{ "oz",                 "mp.so",                    "mp.dll",                    "Oz Deathmatch"                                    },
	{ "paintball",          "pb.so",                    "mp.dll",                    "Paintball"                                        },
	{ "penemy",             "pe.so",                    "pe.dll",                    "Public Enemy"                                     },
	{ "ponreturn",          "ponr.so",                  "mp.dll",                    "Point of No Return"                               },
	{ "pvk",                "hl.so",                    "hl.dll",                    "Pirates, Vikings and Knights"                     },
	{ "rc2",                "rc2.so",                   "rc2.dll",                   "Rocket Crowbar 2"                                 },
	{ "recbb2",             "recb.so",                  "recb.dll",                  "Resident Evil : Cold Blood"                       },
	{ "rewolf",             "hl.so",                    "gunman.dll",                "Gunman Chronicles"                                },
	{ "ricochet",           "ricochet.so",              "mp.dll",                    "Ricochet"                                         },
	{ "rockcrowbar",        "rc.so",                    "rc.dll",                    "Rocket Crowbar"                                   },
	{ "rockcrowbar",        "rc_i386.so",               "rc.dll",                    "Rocket Crowbar"                                   },
	{ "rspecies",           "hl.so",                    "hl.dll",                    "Rival Species"                                    },
	{ "scihunt",            "shunt.so",                 "shunt.dll",                 "Scientist Hunt"                                   },
	{ "ship",               "ship.so",                  "ship.dll",                  "The Ship"                                         },
	{ "si",                 "si.so",                    "si.dll",                    "Science & Industry"                               },
	{ "snow",               "snow.so",                  "snow.dll",                  "Snow-War"                                         },
	{ "stargatetc",         "hl.so",                    "hl.dll",                    "StargateTC (Old, 1.x)"                            },
	{ "stargatetc",         "stc_i386.so",              "hl.dll",                    "StargateTC (Updated, 2.x)"                        },
	{ "stargatetc",         "stc_i386_opt.so",          "hl.dll",                    "StargateTC (Updated, 2.x)"                        },
	{ "svencoop",           "hl.so",                    "hl.dll",                    "Sven Coop (Old)"                                  },
	{ "svencoop",           "server.so",                "server.dll",                "Sven Coop (Steam)"                                },
	{ "swarm",              "swarm.so",                 "swarm.dll",                 "Swarm"                                            },
	{ "tfc",                "tfc.so",                   "tfc.dll",                   "Team Fortress Classic"                            },
	{ "thewastes",          "thewastes.so",             "thewastes.dll",             "The Wastes"                                       },
	{ "timeless",           "pt.so",                    "timeless.dll",              "Project Timeless"                                 },
	{ "tod",                "hl.so",                    "hl.dll",                    "Tour of Duty"                                     },
	{ "trainhunters",       "th.so",                    "th.dll",                    "Train Hunters"                                    },
	{ "ts",	                "ts_i686.so",               "mp.dll",		         "The Specialists"                                  },
	{ "ts",                 "ts_i386.so",               "mp.dll",                    "The Specialists"                                  },
	{ "tt",                 "tt.so",                    "tt.dll",                    "The Trenches"                                     },
	{ "underworld",         "uw.so",                    "uw.dll",                    "Underworld Bloodline"                             },
	{ "valve",              "hl.so",                    "hl.dll",                    "Half-Life"                                        },
	{ "vs",                 "vs.so",                    "mp.dll",                    "VampireSlayer"                                    },
	{ "wantedhl",           "hl.so",                    "wanted.dll",                "Wanted!"                                          },
	{ "wizardwars",         "wizardwars_i486.so",       "wizardwars.dll",            "Wizard Wars (Steam)"                              },
	{ "wizardwars_beta",    "wizardwars_i486.so",       "wizardwars.dll",            "Wizard Wars Beta (Steam)"                         },
	{ "wizwars",            "mp.so",                    "hl.dll",                    "Wizard Wars (Old)"                                },
	{ "wormshl",            "wormshl_i586.so",          "wormshl.dll",               "WormsHL (Old)"                                    },
	{ "wormshl",            "wormshl_i686.so",          "wormshl.dll",               "WormsHL (Steam)"                                  },
	{ "zp",                 "hl_i386.so",               "mp.dll",                    "Zombie Panic"                                     },

	// End of list terminator:
	{ nullptr, nullptr, nullptr, nullptr }
};

