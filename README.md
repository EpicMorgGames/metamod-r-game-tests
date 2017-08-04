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

0. [AurZum](https://github.com/Aleks-Z)! **download an check all actual modes. than update cpp-file with fixed filenames! than recompile custom metamod-dll. and start checking other points below.**
1. test all games\mods on windows
2. test all games\mods on linux (if available)
3. keep some windows-servers. for fun. why not?
4. Check out actual servers list [here](https://github.com/EpicMorgGames/OurGameServerList).

# already preTested games

:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing :anger: - not shure

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe | Comment
| ------------- |---------------| ------| ------| ------| ------|------|
| [Counter-Strike 1.6](http://store.steampowered.com/app/10/CounterStrike/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | Recommended to use [reGameDll_CS](https://github.com/s1lentq/ReGameDLL_CS)
| [Half-Life](http://store.steampowered.com/app/70/HalfLife/)  + [Bugfixed and improved HL release](https://github.com/LevShisterov/BugfixedHL) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :interrobang: | :heavy_check_mark: | Added support after 1.3.76 version
| [Adrenaline Gamer](https://github.com/martinwebrant/agmod) + [openAG](https://github.com/YaLTeR/OpenAG)| [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  | :heavy_check_mark:
| [Half-Life: Blue Shift](http://store.steampowered.com/app/130/HalfLife_Blue_Shift/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | SinglePlayer mod with MP-base
| [Counter-Strike:Condition Zero](http://store.steampowered.com/app/80/CounterStrike_Condition_Zero/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Counter-Strike:Condition Zero Deleted Scenes](http://store.steampowered.com/app/80/CounterStrike_Condition_Zero/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | SinglePlayer mod with MP-base
| [Deathmatch Classic](http://store.steampowered.com/app/40/Deathmatch_Classic/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Day of Defeat](http://store.steampowered.com/app/30/Day_of_Defeat/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Earth's Special Forces](http://www.moddb.com/mods/earths-special-forces/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :anger: | :heavy_check_mark: | Linux-server's binaries placed in not-dll folder
| [Opposing Force](http://store.steampowered.com/app/50/HalfLife_Opposing_Force/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Natural Selection](https://unknownworlds.com/ns/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Natural Selection Beta](https://unknownworlds.com/ns/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :interrobang: | :heavy_check_mark:
| [Ricochet](http://store.steampowered.com/app/60/Ricochet/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [Team Fortress Classic](http://store.steampowered.com/app/20/Team_Fortress_Classic/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: | :interrobang: | :heavy_check_mark:
| [The Specialists](http://www.moddb.com/mods/the-specialists/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: | :interrobang: | :heavy_check_mark:

-----------------------------------

# To be tested (officially supported mods by original versions of metamods)

:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing :anger: - not shure

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe| Comment
| ------------- |---------------| ------| ------| ------| ------| ------|
| [Action Half-Life](http://www.moddb.com/mods/action-half-life/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Azure Sheep](http://www.moddb.com/mods/azure-sheep/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Base Defense](http://www.moddb.com/mods/b-def/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :anger: |  :anger: |  :heavy_check_mark: | Server's binaries placed in not-dll folder
| [Brain Bread](http://www.moddb.com/mods/brainbread/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Brutal Half-Life](http://www.moddb.com/mods/brutal-half-life/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :anger: |  :heavy_check_mark: | Have no linux binary. Check it.
| [Bumper Cars](http://www.moddb.com/mods/bumper-cars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [BuzzyBots](http://www.moddb.com/mods/buzzybots/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Chicken Fortress 3](http://www.moddb.com/mods/chicken-fortress-3/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :anger:  | :heavy_check_mark: | Have no linux binary. Check it.
| [Counter-Strike 1.5](http://www.moddb.com/mods/counter-strike/downloads/counter-strike-15-for-steam) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  | :heavy_check_mark:
| [Desert Crisis](http://www.moddb.com/mods/desert-crisis/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Digital Paintball](http://www.moddb.com/mods/digital-paintball/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Dragon Mod Z](http://www.moddb.com/mods/dragonmod-z/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Existence](http://www.moddb.com/mods/existence/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Firearms](http://www.moddb.com/mods/firearms/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Frontline Force](http://www.moddb.com/mods/front-line-force/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Gangsta Wars](http://www.moddb.com/mods/gangsta-wars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Gangwars](http://www.moddb.com/mods/gangwars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Global Warfare](http://www.moddb.com/mods/global-warfare/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Goldeneye](http://www.moddb.com/mods/goldeneye-mod/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Gunman Chronicles](http://www.moddb.com/games/gunman-chronicles/downloads/gunman-chronicles-steam-version/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Half-Life 1.5: Weapon Edition](http://www.moddb.com/mods/half-life-weapon-edition/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Half-Life: Decay](http://www.moddb.com/mods/half-life-decay/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :heavy_check_mark: |  :x: |  :heavy_check_mark: | Have no linux binary. 100%.
| [Headcrab Frenzy](http://www.moddb.com/mods/headcrab-frenzy/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: |  
| [HL-Rally](http://www.moddb.com/mods/hl-rally/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Holy Wars](http://www.moddb.com/mods/holy-wars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Hostile Intent](http://www.moddb.com/mods/hostile-intent/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [International Online Soccer](http://www.moddb.com/mods/international-online-soccer/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Judgement](http://www.moddb.com/mods/judgement/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Kanonball](http://www.moddb.com/mods/kanonball/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Master Sword](http://www.moddb.com/mods/master-sword/downloads/) [Continued](http://www.moddb.com/mods/master-sword-continued-111/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :anger: |  :heavy_check_mark: | Have no linux binary. Check it.
| [Monkeystrike](http://www.moddb.com/mods/monkeystrike/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Morbid Inclination](http://www.moddb.com/mods/morbid-inclination/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Move In!](http://www.moddb.com/mods/move-in/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Open-Source Jailbreak](http://www.moddb.com/mods/open-source-jailbreak/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :anger: |  :heavy_check_mark: | Have no linux binary. Check it.
| [Operations 1942](http://www.moddb.com/mods/operations-1942/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Out Break](http://www.moddb.com/mods/outbreak-half-life/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :anger: |  :heavy_check_mark: | Have no linux binary. Check it.
| [Outlawsmod](http://www.moddb.com/mods/outlaws/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Over Ground](http://www.moddb.com/mods/over-ground/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Oz Deathmatch](http://ozdeathmatch.com/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Paintball](http://www.bloodvayne.com/hlpb/downloads.htm) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Pirates, Vikings and Knights](http://www.moddb.com/mods/pirates-vikings-and-knights/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Point of No Return](http://www.moddb.com/mods/point-of-no-return/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Project Timeless](http://www.moddb.com/mods/project-timeless/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Public Enemy](http://www.moddb.com/mods/public-enemy/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Resident Evil : Cold Blood](http://www.moddb.com/mods/resident-evil-cold-blood/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Rival Species](http://www.rivalspecies.com/files.php) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Rocket Crowbar](http://hldm.org/files/mods/287-rocket-crowbar.html) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Rocket Crowbar 2](http://www.moddb.com/mods/rocket-crowbar-2/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Science & Industry](http://www.moddb.com/mods/science-and-industry/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Scientist Hunt](http://www.moddb.com/mods/scientist-hunt/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Snow-War](http://www.moddb.com/mods/snow-war/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [StargateTC](http://www.moddb.com/mods/stargatetc/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Sven Coop](http://store.steampowered.com/app/225840/Sven_Coop/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: | 
| [Swarm](http://www.moddb.com/mods/swarm/downloads) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: |  
| [The Battle Grounds](http://www.moddb.com/mods/battle-grounds/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: |  
| [The Ship](http://www.moddb.com/mods/the-ship) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: |  
| [The Trenches](http://www.moddb.com/mods/the-trenches-half-life/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [The Wastes](http://www.moddb.com/mods/the-wastes/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Tour of Duty](http://www.moddb.com/mods/tour-of-duty/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Train Hunters](http://www.moddb.com/games/half-life/addons?filter=t&kw=Train+Hunters&category=&licence=&timeframe=) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Underworld Bloodline](http://www.moddb.com/mods/underworld-bloodline/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [VampireSlayer](http://www.moddb.com/mods/vampire-slayer/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Wanted!](http://www.moddb.com/mods/wanted-the-western-mod-steam/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang:  |  :heavy_check_mark: 
| [Wizard Wars Beta](http://www.moddb.com/mods/wizard-wars/downloads/) |  [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Wizard Wars](http://www.moddb.com/mods/wizard-wars/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [WormsHL](http://www.moddb.com/mods/wormshl/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 
| [Zombie Panic](http://www.moddb.com/mods/zombie-panic/downloads/) | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :interrobang: |  :interrobang: |  :heavy_check_mark: 

# To be tested (other 3rd party mods)

:x: - unsuccess :heavy_check_mark: - success :interrobang: - need testing :anger: - not shure

| Game | Engine | Metamod  | Windows  | Linux  | SteamPipe| Comment
| ------------- |---------------| ------| ------| ------| ------| ------|
| - | - | - | - | - | - | - |

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
| ~OeL Half-Life~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version.
| ~Phineas Bot~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Old outdated won-version.
| ~Retro Counter-Strike~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Cant find in the internet. lol
| ~Retro Firearms~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Cant find in the internet. lol
| ~Special Death Match~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x: |  :x: | Cant find in the internet. lol
| ~[The Terrorist Revenge](http://www.moddb.com/mods/terrorist-revenge/downloads/)~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  |  :x: | Old outdated won-version.
| ~Wasteland~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  |  :x: | Cant find in the internet. lol
| ~Weapon Wars~ | [reHLDS](https://github.com/dreamstalker/rehlds) | [Metamod-r](https://github.com/theAsmodai/metamod-r) | :x: |  :x:  |  :x: | Cant find in the internet. lol

