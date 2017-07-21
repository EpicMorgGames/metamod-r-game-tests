# wtf :interrobang:

We are ([STAM](https://github.com/stamepicmorg) and [AurZum](https://github.com/Aleks-Z)) collected list of supported games from 
* [metamod Original](https://sourceforge.net/projects/metamod/files/Metamod%20Sourcecode/1.20/) (look at file "games.h"), 
* [metamod-p](https://github.com/jkivilin/metamod-p/blob/master/metamod/games.h) (old repo at [SF](https://sourceforge.net/p/metamod-p/code/ci/master/tree/metamod/games.h)) ([online list](http://metamod.org/supportedmods.html)),
* [metamod-am\metamod-hl1](https://github.com/alliedmodders/metamod-hl1/blob/master/metamod/games.h) by [alliedmodders](https://github.com/alliedmodders/)
* [metamod-p-cmake](https://github.com/SamVanheer/Metamod-P-CMake/blob/master/metamod/games.h) (just opmtimazed c-make fork).  

and we are merged it to one big cleanuped and actualized list. Why not?

Now we are checking mods to compablity with [reHLDS](https://github.com/dreamstalker/rehlds)  and [Metamod-r](https://github.com/theAsmodai/metamod-r):
* we are cleaned list of available games. deleted old won-games. 'cause rehlds works only on steam-version -> metamod-r too, against original metamod.
* we are compilled last version metamod-r with our game-list.
* we are checked all mods with compablity.


Some rare mods are uploaded at: https://github.com/EpicMorgGames/LegacyMods



If all be ok we will pull this list to awesome metamod-r.

# To do

1. test all games\mods on windows
2. test all games\mods on linux (if available)
3. keep some windows-servers. for fun. why not?
4. Check out actual servers list [here](https://github.com/EpicMorgGames/OurGameServerList).

# already preTested games

:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe | Comment
| ------------- |---------------| ------| ------| ------| ------|------|
| [Counter-Strike 1.6](http://store.steampowered.com/app/10/CounterStrike/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | Recommended to use [reGameDll_CS](https://github.com/s1lentq/ReGameDLL_CS)
| [Half-Life](http://store.steampowered.com/app/70/HalfLife/)  + [Bugfixed and improved](http://aghl.ru/forum/viewtopic.php?f=32&t=686) [HL release](http://aghl.ru/files/patches/BugfixedHL/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :interrobang: | :heavy_check_mark: | Added support after 1.3.76 version
| [Adrenaline Gamer](http://www.moddb.com/mods/adrenaline-gamer/downloads/) + [openAG](https://github.com/YaLTeR/OpenAG)| [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  | :heavy_check_mark:
| [Half-Life: Blue Shift](http://store.steampowered.com/app/130/HalfLife_Blue_Shift/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Counter-Strike:Condition Zero](http://store.steampowered.com/app/80/CounterStrike_Condition_Zero/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Counter-Strike:Condition Zero Deleted Scenes](http://store.steampowered.com/app/80/CounterStrike_Condition_Zero/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Deathmatch Classic](http://store.steampowered.com/app/40/Deathmatch_Classic/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Day of Defeat](http://store.steampowered.com/app/30/Day_of_Defeat/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Earth's Special Forces](http://www.moddb.com/mods/earths-special-forces/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark: | Linux-server's binaries placed in not-dll folder
| [Opposing Force](http://store.steampowered.com/app/50/HalfLife_Opposing_Force/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Natural Selection](https://unknownworlds.com/ns/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Natural Selection Beta](https://unknownworlds.com/ns/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Ricochet](http://store.steampowered.com/app/60/Ricochet/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Team Fortress Classic](http://store.steampowered.com/app/20/Team_Fortress_Classic/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [The Specialists](http://www.moddb.com/mods/the-specialists/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:

-----------------------------------

# To be tested

:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe| Comment
| ------------- |---------------| ------| ------| ------| ------| ------|
| [Action Half-Life](http://www.moddb.com/mods/action-half-life/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Azure Sheep](http://www.moddb.com/mods/azure-sheep/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Base Defense](http://www.moddb.com/mods/b-def/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: | Server's binaries placed in not-dll folder
| [Brain Bread](http://www.moddb.com/mods/brainbread/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Brutal Half-Life](http://www.moddb.com/mods/brutal-half-life/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :x: |  :heavy_check_mark: | Have no linux binary. Check it.
| [Bumper Cars](http://www.moddb.com/mods/bumper-cars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [BuzzyBots](http://www.moddb.com/mods/buzzybots/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Chicken Fortress 3](http://www.moddb.com/mods/chicken-fortress-3/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :x:  | :heavy_check_mark: | Have no linux binary. Check it.
| [Counter-Strike 1.5](http://www.moddb.com/mods/counter-strike/downloads/counter-strike-15-for-steam) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  | :heavy_check_mark:
| [Desert Crisis](http://www.moddb.com/mods/desert-crisis/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Digital Paintball](http://www.moddb.com/mods/digital-paintball/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Dragon Mod Z](http://www.moddb.com/mods/dragonmod-z/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Existence](http://www.moddb.com/mods/existence/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Firearms](http://www.moddb.com/mods/firearms/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Frontline Force](http://www.moddb.com/mods/front-line-force/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Gangsta Wars](http://www.moddb.com/mods/gangsta-wars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Gangwars](http://www.moddb.com/mods/gangwars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Global Warfare](http://www.moddb.com/mods/global-warfare/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Goldeneye](http://www.moddb.com/mods/goldeneye-mod/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Gunman Chronicles](http://www.moddb.com/games/gunman-chronicles/downloads/gunman-chronicles-steam-version/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Half-Life 1.5: Weapon Edition](http://www.moddb.com/mods/half-life-weapon-edition/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Half-Life: Decay](http://www.moddb.com/mods/half-life-decay/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: |  :x: |  :heavy_check_mark: | Have no linux binary. 100%.
| [Headcrab Frenzy](http://www.moddb.com/mods/headcrab-frenzy/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: |  
| [HL-Rally](http://www.moddb.com/mods/hl-rally/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Holy Wars | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Hostile Intent | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| International Online Soccer | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Judgement | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Kanonball | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Master Sword Continued | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :x: |  :interrobang: | Have no linux binary. Check it.
| Monkeystrike | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Morbid Inclination | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Move In! | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| OeL Half-Life | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Open-Source Jailbreak | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :x: |  :interrobang: | Have no linux binary. Check it.
| Operations 1942 | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Out Break | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :x: |  :interrobang: | Have no linux binary. Check it.
| Outlawsmod | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Over Ground | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Oz Deathmatch | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Paintball | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Phineas Bot | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Pirates, Vikings and Knights | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Point of No Return | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Project Timeless | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Public Enemy | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Resident Evil : Cold Blood | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Retro Counter-Strike | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Retro Firearms | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Rival Species | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [Rocket Crowbar](http://hldm.org/files/mods/287-rocket-crowbar.html) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Rocket Crowbar 2](http://www.moddb.com/mods/rocket-crowbar-2/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| Science & Industry | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Scientist Hunt | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Snow-War | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| Special Death Match | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :interrobang: 
| [StargateTC](http://www.moddb.com/mods/stargatetc/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| Sven Coop | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: | 
| Swarm | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: |  
| The Battle Grounds | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: |  
| The Ship | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: |  
| The Terrorist Revenge | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| The Trenches | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| The Wastes | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Tour of Duty | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Train Hunters | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Underworld Bloodline | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| VampireSlayer | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Wanted! | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Wasteland | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| Weapon Wars | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :interrobang: 
| [Wizard Wars Beta](http://www.moddb.com/mods/wizard-wars/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Wizard Wars](http://www.moddb.com/mods/wizard-wars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [WormsHL](http://www.moddb.com/mods/wormshl/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Zombie Panic](http://www.moddb.com/mods/zombie-panic/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 

# Outdated mods. WON-versions or versions  wich disappeared from internet
 
:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe| Comment
| ------------- |---------------| ------| ------| ------| ------| ------|
| ~[Adrenalinegamer 3.x](http://planethalflife.gamespy.com/View75d9.html?view=HLFiles.Detail&id=1929)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version
| ~Adrenalinegamer 4.x~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version. Cant find in the internet. lol
| ~[Arg!](https://www.fileplanet.com/50432/download/Arg!-The-Pirates-Strike-Back)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x:  | Old outdated won-version. Cant find in the internet. lol
| ~Bot~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version. Cant find in the internet. lol
| ~[Counter-Strike 1.3](http://www.moddb.com/downloads/counter-strike-13)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  | :x: | Old outdated won-version.
| ~[Counter-Strike 1.4](http://www.moddb.com/mods/counter-strike/downloads/counter-strike-14)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  | :x: | Old outdated won-version.
| ~[Counter-Strike 1.5](http://www.moddb.com/mods/counter-strike/downloads/counter-strike-15)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  | :x: | Old outdated won-version.
| ~Freeze~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version. Cant find in the internet. lol


