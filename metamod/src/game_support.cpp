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
	//
	// List contains only steam\steampipe versions of mods. Any won-versions of mods is not included!
	//
	{ "action",             "ahl_i386.so",              "ahl.dll",                   "Action Half-Life"                                 }, // + director's cut [2016], updated linux binary name
	{ "ag",                 "ag.so",                    "ag.dll",                    "Adrenaline Gamer"                                 }, // .so file by OpenAG fork
	{ "asheep",             nullptr,                    "hl.dll",                    "Azure Sheep"                                      }, // have no linux binary found!
	{ "bdef",               "server.so",                "server.dll",                "Base Defense"                                     }, // placed in normal dll folder [2017]
	{ "bg",                 "bg.so",                    "bg.dll",                    "The Battle Grounds"                               },
	{ "bhl",                nullptr,                    "bhl.dll",                   "Brutal Half-Life"                                 }, // have no linux binary found!
	{ "brainbread",         nullptr,                    "bb.dll",                    "Brain Bread"                                      }, // have no linux binary found!
	{ "bshift",             "bshift.so",                "hl.dll",                    "Half-Life: Blue Shift"                            }, // ok
	{ "bumpercars",         nullptr,                    "hl.dll",                    "Bumper Cars"                                      }, // have no linux binary found!
	{ "buzzybots",          nullptr,                    "bb.dll",                    "BuzzyBots"                                        }, // have no linux binary found!
	{ "ckf3",               nullptr,                    "mp.dll",                    "Chicken Fortress 3"                               }, // have no linux binary found!, checked all versions (latest - Alpha 4)
	{ "cs10",               nullptr,                    "mp.dll",                    "Counter-Strike 1.0"                               }, // have no linux binary found!
	{ "csv15",              nullptr,                    "mp.dll",                    "Counter-Strike 1.5"                               }, // have no linux binary found!
	{ "cstrike",            "cs.so",                    "mp.dll",                    "Counter-Strike 1.6"                               }, // ok
	{ "czero",              "cs.so",                    "mp.dll",                    "Counter-Strike:Condition Zero"                    }, // ok
	{ "czeror",             "cz.so",                    "cz.dll",                    "Counter-Strike:Condition Zero Deleted Scenes"     }, // ok
	{ "dcrisis",            "dc_i386.so",               "dc.dll",                    "Desert Crisis"                                    }, // updated linux binary name [2010]
	{ "decay",              nullptr,                    "decay.dll",                 "Half-Life: Decay"                                 }, // have no linux binary!
	{ "dmc",                "dmc.so",                   "dmc.dll",                   "Deathmatch Classic"                               }, // ok
	{ "dod",                "dod.so",                   "dod.dll",                   "Day of Defeat"                                    }, // ok
	{ "dpb",                "pb.i386.so",               "pb.dll",                    "Digital Paintball"                                }, // ok
	{ "esf",                "../linuxdll/hl_i386.so",   "hl.dll",                    "Earth's Special Forces"                           }, // workaround for basic-linux version
	{ "esf",                "hl_i386.so",               "hl.dll",                    "Earth's Special Forces"                           }, // full linux version
	{ "existence",          nullptr,                    "existence.dll",             "Existence"                                        }, // have no linux binary found!
	{ "firearms",           nullptr,                    "firearms.dll",              "Firearms"                                         }, // have no linux binary found!
	{ "frontline",          "front_i386.so",            "frontline.dll",             "Frontline Force"                                  }, // updated linux binary name [2012]
	{ "gangstawars",        nullptr,                    "gwars27.dll",               "Gangsta Wars"                                     }, // have no linux binary found!
	{ "gangwars",           nullptr,                    "mp.dll",                    "Gangwars"                                         }, // have no linux binary found!
	{ "gearbox",            "opfor.so",                 "opfor.dll",                 "Opposing Force"                                   }, //ok
	{ "globalwarfare",      "gw_i386.so",               "mp.dll",                    "Global Warfare"                                   }, //updated linux binary name [2012]
	{ "goldeneye",          nullptr,                    "mp.dll",                    "Goldeneye"                                        }, // have no linux binary found!
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
	{ "outbreak",           nullptr,                    "hl.dll",                    "Out Break"                                        }, // have no linux binary
	{ "oz",                 "mp.so",                    "mp.dll",                    "Oz Deathmatch"                                    },
	{ "paintball",          "pb.so",                    "mp.dll",                    "Paintball"                                        },
	{ "penemy",             "pe.so",                    "pe.dll",                    "Public Enemy"                                     },
	{ "ponreturn",          "ponr.so",                  "mp.dll",                    "Point of No Return"                               },
	{ "pvk",                "hl.so",                    "hl.dll",                    "Pirates, Vikings and Knights"                     },
	{ "rc2",                "rc2.so",                   "rc2.dll",                   "Rocket Crowbar 2"                                 },
	{ "recbb2",             "recb.so",                  "recb.dll",                  "Resident Evil : Cold Blood"                       },
	{ "rewolf",             nullptr,                    "gunman.dll",                "Gunman Chronicles"                                }, // have no linux binary found!
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

