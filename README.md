# PS Vita port of [Commander Genius](https://github.com/gerstrong/Commander-Genius)

## Install

- Download CommanderGenius.vpk from https://github.com/Northfear/Commander-Genius/releases.
- Install it to your Vita.
- Create `ux0:data/CommanderGenius/games/` folder and copy Commander Keen games there (extracted folders with exe files inside).

## Building

### Prerequisites
- DolceSDK
- SDL 2
- SDL_mixer
- SDL_image
- SDL_ttf

### Build
```
export SDLDIR=$DOLCESDK/arm-dolce-eabi/
export SDL2DIR=$DOLCESDK/arm-dolce-eabi/
mkdir build && cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=$DOLCESDK/share/dolce.toolchain.cmake -DPSVITA=1 -DUSE_BOOST=0 -DUSE_OPENGL=1 -DUSE_CRASHHANDLER=0 -DDOWNLOADER=0 -DCMAKE_BUILD_TYPE=None
make
```

Generated VPK file is located in build/src folder.

## Port info

### Input

- D-Pad - Movement
- Cross - Jump
- Circle - Fire
- Square - Pogo
- Triangle - Run
- Select - Status
- Start - Back/Menu

### Other

If you've messed up game options somehow and game refuses to launch, try deleting config file `ux0:data/CommanderGenius/games/cgenius.cfg`

# Commander Genius

[![pipeline status](https://gitlab.com/Dringgstein/Commander-Genius/badges/master/pipeline.svg)](https://gitlab.com/Dringgstein/Commander-Genius/-/commits/master)

Welcome to Commander Genius!

Commander Genius is an open-source clone of Commander Keen (1-6, Dreams) which
allows you to play these episodes and some of the mods made for them. All of the
original data files are required to do so, however, we conveniently provide a
store where you can get some of the games, including Episode 1, 4, and Dreams,
for your enjoyment.  There are also mods that can be downloaded directly.

# Authors

### Main development:
* (c) 2008-2020          Gerstrong

### Testing
* (c) 2020               Gagster

### Porting and Support
* (c) 2010-2020          Pelya (Android-Distro)
* (c) 2020               Elias Oenal (Switch port)

### Resources
* (c) 2018-2020          Zilem


# About

So far, Commander Keen 1-6 are fully supported.
There are some smaller missing features like PaddleWar, but the whole gameplay
is there.

Keen Dreams is starting to work but still might have some issues.
So far, you can play it to the end. Also the menu lacks of a lot of features.
Please configure input and sounds using the other games.

There is an alternative called Reflection Keen which supports Keen Dreams, on
which the code is based.

Commander Genius runs on Linux/X11, Windows, Android, with plans to release on
other platforms in the future. If you think you would like to port it, please
send us a message and we will do our best to help you.


# Features

The main goal of Commander Genius is to copy the original gameplay feeling as
much as possible, and extend it further so you get a native implementation with
even more features like:

- Mod Support with nice extras
- OpenGL Acceleration
- SDL 2.0 Support
- New graphical effects
- Multiplayer Support (Up to four players)
- High Quality Packs which make the game look better, provide better sounds and
  even music you might never have known existed in the original games
- In-game Menu for Vorticons Keen as well as a new HUD
- Named save slots
- Unrestricted Joystick Support
- and much more


# Our Mission

The mission of Commander Genius held by open-source developers is to revive the
gameplay experience of the games we had in the 90s when those Keen games were
popular.

With experience we mean, we try to leave the graphics retro but take advantage
of newer hardware meaning there are some enhancements over the original
games. There is also Chocolate Keen (Keen 1-3) by NY00123 which tries to be as
close to the original as possible including even the frame rates as they were.
Also RefKeen should be mentioned, by the same author. It runs Keen Dreams and
some of the Catacomb game series.

Now modern hardware offers much more than what we had back in the 90s.
Commander Genius tries to take advantage of that modern hardware and bring a bit
of old school experience to the Commander Keen games.

Because Keen was made for DOS, and we thought Linux could have more nice
platform games, here is an alternative for you.
With mod support and more extensions for those, because DOS is not required, a
lot more can be done.

Yes, there also exists DOSBox, but this is a more native port without emulation.
We want to get out of that DOS limit era.

Imagine Commander Genius like a platform base for the Keen games how it would be
on modern hardware. That means there are some differences. The physics are close
to the original, but you might notice some of the details if you are an
elite expert on original Keen games.  I think CG delivers a faster gameplay than
the original ones.  Since the framerate for graphics is higher, it feels a bit
more like that. Some people might not like that, so I recommend them to stick
with DOSBox.

Now, it is a bit hard to define what that experience is obviously, because many
people experienced that gameplay differently in the past. Some people had
Sound Blaster, others didn't.  Some loved the joystick support, others preferred
to use keyboard.

So getting an experience like old school for everybody is difficult.

What does Commander Genius do then? Interpreting those games on modern systems,
that's all basically. It can draw more colors on your screen and fix some issues
the original games had back then. For example Vorticon Keen has two-button
firing as an option.
All buttons can be mapped to any input device in Commander Genius.
Also the mouse can be used to some extent.

Why did Gerstrong do that? Because he was bored some years ago. Similar to how
some other projects get done and maintained by fans.

The original Keen games also have some bugs, and given that the hardware was
very limited back then, it has some weird frameskips too. There are many details
that are different when playing Keen with Commander Genius. So the conclusion is
as follows.

If you really want a vanilla feeling, even feel the lack of hardware support and
eventual slowdowns, we encourage you to play Commander Keen on DOSBox.
Many people are out there that think that to be the right way to play it.
Also for some mods it might be the only way.
Still, though, Commander Genius has a patching system in which some mods run
very well.

Commander Genius wants to be more like a new jump'n'run game that interprets
Commander Keen. Billy Blaze visits all the levels you played before in the
DOS version, taking advantage of your powerful computer or your mobile device.
That's the strength of Commander Genius! If you are one of those people who want
to experience Commander Keen in some new ways, then this software is for you!


# History

The first engine was CloneKeen by a developer named Caitlin Shaw.  Since the
engine was left abandoned for the most part, Gerstrong took it and created the
fork called CloneKeenPlus and fixed some problems CloneKeen had. This fork comes
from the 0.83 Version. A 0.84 version has been released since. That code was
never incorporated here, because it was never required.

After CloneKeenPlus, Commander Genius was born.
It is a complete rewrite of the engine in C++. The transition to Commander
Genius means a transition from C to C++ code mostly using OOP.
After all this coding, we have retained only a small portion of the original
CloneKeen code (about 0.02%).

There exist other similar engines, like Refkeen and Chocolate Keen, from which
CG learned and tried to improve the overall gaming experience.


# License 

The Commander Genius source code may be freely distributed and modified as per
the GPL, just remember to give credit to the original authors. We work very hard
on this project and we deserve at least those credits!

Also give credit to the others who provided us with some code. They really
deserve it.


# Setup 

Download it, install it and launch it. In the Game Launcher click/tap on
"New Stuff" and choose your game.
It will start to download. After it has finished, you can play it. You can
download more titles if you want, enjoy!

If you happen to use Ubuntu, you might want to use our PPA so you always get
updates.
Add it using the command line and typing:

sudo add-apt-repository ppa:gerstrong/cgenius

Mageia and Arch Linux also have some packages by third-party maintainers.

Windows 7 up to 10 are supported. About older versions, I don't know. On some
Windows Systems you might need to install the "Microsoft Visual Studio
Redistributable 2015 (x86)" package in order to get it running.

On MacOS the recent dmg contain a version that is 64-bit only.
You need to install macports first in order to get it running:

https://www.macports.org/install.php

After you have to install some SDL2 dependencies from the terminal using ports:

sudo port install libsdl2 libsdl2_mixer libsdl2_image libsdl2_ttf libsdl2_mixer curl

I plan to automate that in near future, but for the meanwhile that should do.

After having done that just open the DMG file and drag the Commander Keen Head
to where you want the App to be installed on your Mac. Have fun!


CG-Data locations:

a) On Windows you usually find that directory under
   "Documents\Commander Genius".
b) If you use Linux, open the directory "~/.CommanderGenius".
c) Android's datapath usually is
   "/Android/data/net.sourceforge.clonekeenplus/files". For that you need to
   connect the device to your PC, normally through a USB cable, and in your
   options you have to enable file transfer. That way you access that
   directory.
   If you started CG, you already should find it and see some games.

If you have registered version Keen 2, 3, 5, or 6, put them into the directory
where you will find your download games. That subdirectory is called
"games". You can put personalized mods there as well.

Setting up the data for the game:

 * Copy the directory of the games to the "games" subdirectory of CG.
   If you own the registered versions, you can play all episodes,
   otherwise download the shareware version and copy them there.
   You also can use mods. If you have a bundled version, you already should be
   able to play episodes 1 and 4, as they are installed in that directory.
   If you connect your Android Device to the PC, normally you find a directory
   called something like like
   "/Android/data/net.sourceforge.clonekeenplus/files/games".
   Copy the games there where the shareware versions are and you should be fine.

   You should note that the following versions of Keen work best:
   Keen 1 - Version 1.33
   Keen 2 - Version 1.33
   Keen 3 - Version 1.33
   Keen 4 - Version 1.4 (EGA)
   Keen 5 - Version 1.4 (EGA)
   Keen 6 - Version 1.4 (EGA)
   Keen 6 Demo - Version 1.4 (EGA)
   Keen Dreams - Version v1.13 (EGA)

   Other versions might work, but we cannot guarantee it. If you happen to own
   another version, I would recommend patching it first. There are free patches
   for that around the net.
   Also Keen 6 works on CG. Don't use the 1.5 version, which is not supported,
   sorry!
   Get the 1.4 version instead.

 * If you want to use some patched mods just copy them as separate games to that
   path.
   Remember that due to copyrights, mods usually do not come with the games to
   patch.
   Like in DOSBox, you have to copy the original game data with the patches in
   the same directory.

 * If you want improved sounds and music, just download the High Quality Pack
   (HQP) and extract it in the CG-Data location.
   Be aware that CG handles global HQ files and per-game files, depending on
   where the resources get extracted.
   Read the HQP readme for more information on how to use those resources.
   Using HQP, you might have to copy some resources to the specific game
   directory so that CG can detect it. For example, you might want to copy
   ck1tiles.bmp to <CG-Data>/games/keen1/.
   I'm thinking of making HQPs deprecated and providing special versions of the
   games in future.

How to launch Commander Genius (if you didn't compile it):
 * Go to the program's directory.
 * Under Windows you start "CGenius.exe", under Linux "./CGenius".


Getting the most recent source code:
 * The most recent version is hosted at GitLab.
 * From the Linux command line, type:
   git clone https://gitlab.com/Dringgstein/commandergenius.git
   cd Commander-Genius
 * I recommend you using the master branch. I might create a more stable one
   later.


Requirements:

Build Tools. Works best with GNU Compiler and Clang
which supports at least C++14 and C99.

SDL2, SDL2_Image, SDL2_mixer and SDL2_TTF. There is support for SDL1.2
but it is getting deprecated and will be removed in future.

Curl and Zlib, so you can fully use the Game store CG provides.

How to compile it under Ubuntu:
 * Install through Synaptic or "sudo apt install" the following packages:
        - build-essential
        - libgl1-mesa-dev
        - libcurl4-openssl-dev
        - zlib1g-dev        
        - libsdl2-dev
        - libsdl2-image-dev
        - libsdl2-mixer-dev
        - libsdl2-ttf-dev

 * Create an empty build Dir: mkdir -p CGeniusBuild
 * Extract my source code into the "CGeniusSrc" directory.
 * cd CGeniusBuild
 * Run "cmake ../CGeniusSrc".
 * Run "make".
 * If everything went fine, you should be able to see an executable in the build
   directory.
   Copy the game data files to <CG-Data> if you didn't already, and run
   Commander Genius.
   Even without any data copied, CG should run, but report that there are no
   games.

How to compile it under Fedora:
 * Install using the package manager (replace "dnf" with "yum" for Fedora 21 or
   older):

   dnf install -y \
     SDL2-devel cmake cmake-data gcc-c++ \
     mesa-libGL-devel libcurl-devel \
     SDL2_image-devel SDL2_mixer-devel SDL2_ttf-devel

 * Extract my source code into the "CGeniusSrc" directory.
 * mkdir -p CGeniusBuild
 * cd CGeniusBuild
 * Run "cmake ../CGeniusSrc".
 * Run "make".
 * If everything went fine, you should be able to see an executable in the build
   directory.
   Copy the game data files to <CG-Data> if you didn't already, and run
   Commander Genius.
   Even without any data copied, CG should run but report that there are no
   games.

Compiling CG on any Linux/UNIX (other than Ubuntu or Fedora):
 * If you want to compile the game, you need to have all the standard
   development libraries and GNU C Compiler (at least version 4.8) installed
   on your system.
 * You need to install the "SDL_mixer", "SDL_image", "SDL", "curl" and
   "Mesa/OpenGL" development libraries to get it to compile successfully.
 * Extract my source code into the "CGeniusSrc" directory .
 * mkdir -p CGeniusBuild
 * cd CGeniusBuild
 * Run "cmake ../CGeniusSrc".
 * Run "make".
 * Then, you can run "CGenius".

Compiling CG on Windows (using MSYS2):
This is my recommended way, because you have a nice terminal/shell and pacman
for package management. All the required dependencies can be pulled without
too much hassle. You can also install my favorite IDE QtCreator and use all
together if you want to develop CG further

 * Go to https://www.msys2.org/ and get the i686 version for 32-bit or for
   64-bit x86_64. You can have both builds in one system but I highly recommend
   staying always on one.
 * Start its setup and just follow the instructions
 * Like webpage instructions indicate: pacman -Syu and eventually pacman -Su
   If you are entirely through with that setup,
   the installation of dependencies for CG are next.

 -> Prepare Environment for CG
 * Set PACPFIX (32-bit):  export PACPFIX=mingw64/mingw-w64-x64
 * pacman -S base-devel
 * pacman -S ${PACPFIX}-SDL2
 * pacman -S ${PACPFIX}-SDL2_image
 * pacman -S ${PACPFIX}-SDL2_mixer
 * pacman -S ${PACPFIX}-SDL2_ttf
 * pacman -S ${PACPFIX}-cmake
 * pacman -S ${PACPFIX}-curl
 * pacman -S ${PACPFIX}-zlib
 * pacman -S ${PACPFIX}-gcc
 * pacman -S ${PACPFIX}-nsis
 * pacman -S git

 -> Build CG using MSYS2
 * git clone https://gitlab.com/Dringgstein/commandergenius.git
 * mkdir cgenius_build
 * cd cgenius_build
 * cmake -G "Unix Makefiles" ../Commander-Genius
 * make


 -> Build CG using Mac Ports (for MacOS Systems)
 * Install Mac Ports. You can download it here: https://www.macports.org/install.php
 * Open up a terminal
 * Install some dependencies:
   sudo port install libsdl2 libsdl2_mixer libsdl2_image libsdl2_ttf libsdl2_mixer curl git cmake
 * You might get a dialog asking for the installation of Xcode dependencies. Please confirm that dialog.
 * You also will be asked for the installation of more dependencies. You need to confirm all that.
 * cd into a directory where you want to clone the sources:
   git clone https://gitlab.com/Dringgstein/Commander-Genius.git
 * Now you should have a directory called "Commander-Genius". It contains the source code. You can verify that with "ls"
 * Create your build directory and cd into it:
   mkdir CG-Build
   cd CG-Build
 * Prepare your build referencing to the sources you cloned:
   cmake ../Commander-Genius -DUSE_OPENGL=0
 * And build it:
   make
 * If everything went well, go into src and execute it:
   cd src
   ./CGeniusExe

We also provide CMake for Wiz, if you want to compile it for embedded systems.
We had support for Linux and Win32, but since there is a bug when built for a
different Linux build (32-bit or 64-bit) we only use it for embedded systems.
Also check out the CMakeLists.txt for more information.


# STARTING A GAME IN CG

Normally when you start Commander Genius you see the launcher menu in which you
can choose the Keen games that were detected in the subdirectory.
The CGLog.txt also tells you what CG detected on the system and gives feedback
on further events that might occur.
It is good to take a look at that file if something in CG goes wrong.

Optionally, you can pass launch arguments to Commander Genius. These are:

```
dir=<game-directory> This will launch the game from the given directory, if it
                     can be started, otherwise it will go to the game launcher
                     with a warning shown. If you have director name with spaces
                     just use double quotes
                     E.g.: CGenius.exe dir=games/keen4
                     E.g.: CGenius.exe dir="games/Keen 1 Special Edition"

finale=<on/off>      If you want to directly show the finale of a game, pass
                     this parameter.
                     E.g.: "CGenius.exe finale=on"

level=<level>        Supplying this parameter will directly open the given
                     level. This is useful for testing.

exportGfx=<on/off>   Exports graphics of the loaded game and saves them as BMP
                     in the gaming directory
```

Example: If you want to start the game with the path "C:\games\keen5", type:

```
CGenius dir=games/keen5
```

Remember, the path must be known by the game launcher. Absolute paths of games
can be defined in the cgenius.cfg file in the [FileHandling] section.
We might improve that in future.

# Multiplayer Hints (PC/RPi Version only)


One of the special features in Commander Genius is the multi player mode up
to four players. It is meant to be having being cooperative.

You might need space in the levels and a better point of view, so you should
consider switching the Game Resolution to 640x480. This might reveal some
secrets but the internet also reveals those to what...?

Because everything happens in one screen,
the camera moves according to the first player. Pressing the
camlead button ("c" as default when using keyboard), you pass the camera
to the next player. Now the first player have to follow him. He can pass the
camera to the next player at any time. The last player would pass it to first
one, like cycling through it happens. The red line under the helmet icon in the HUD
indicates how has the camera.

Secret Key (Galaxy only):
While multiple players are seen, hold the Shift-key and press 1,2,3 or 4 to assign
the control to another player. He has to have the camera in order to do that.


# VIDEO SETTINGS

Being cross-platform, there are many methods to detect different resolutions on
a system.

Generally it is not necessary, because many resolutions are already supported,
but if you want to support other resolutions that you don't find in the options
list, just modify the "cgenius.cfg" file by hand. CG always reads this file and
checks whether your card and monitor support it and, if possible, uses it. But,
use it at your own risk.

We had to go that way, because there are many systems that through SDL do not
always return the correct list of possible resolutions though CG tries to read
that list, so you might be lucky and everything for your case is supported.

CAUTION: This is recommended for advanced users who know what they are
doing. The team won't bother if you use a wrong configuration, because you just
manually edited it.


# GAME PLAY 

Before you play the game, you should take a look at the controls. Normally LAlt,
Ctrl, Space and Enter are the action keys. You can also assign joystick buttons,
axes and hats to those actions or just change the keys to your liking. The
changes are global to all the Keen games.

For mobile users, I added the "sandwich" button which during the gameplay can be
seen at the top right corner (FONTCOLORS::RED color).
Click or tap on it to open the main menu.

Also Quicksave is possible. Just press F6 to save and press F9 to restore your
quicksave. Since in Keen you have to save a lot this is very convenient.


# CHEAT CODES

There are a full assortment of cheat codes available. Some cheats must first be
enabled with -cheat or through the options->game menu. C+T+SPACE and G+O+D will
always work.


## Vorticon Keen (1-3)
```
KEY        	ACTION         DESCRIPTION
G+O+D	   	godmode		   In god mode you are invincible!
C+T+SPACE  	All Items      Gives all items, similar to the original.
```

## Galaxy Keen (4-6 and Dreams)
```
KEY        	ACTION         DESCRIPTION
F10+G	   	Godmode        In god mode you are invincible!
F10+I	  	All Items      Gives all items, similar to the original.
F10+J	  	Fly	           This will make Keen fly at any time.
F10+N	  	No Clipping    With this cheat, you will go through walls.
                           Be careful, you might also fall through the floor
                           sometimes.
```

Mobile users: For those unlucky enough to not have a keyboard you can open
              "options->cheats" and trigger those wonderful cheats.


# SAVE/LOAD GAME

The game can be saved from the menu at any time.
Keen will be saved at the exact position it was left.
In the Vorticons engine it will save the game within the level as well.
On Galaxy and Dreams games it works like usual.


# FAQ

Q: Where is Commander Keen 2, 3, 5 and 6?

A: Due to legal issues with the Commander Keen games, we are only allowed to
   provide a copy of Keen 1, 4, Dreams and everything mod related to those. This
   is possible because it is shareware. If you happen to have a copy of the
   other Keen games, just copy them to the data directory under "games" and CG
   will detect them.

Q: Commander Genius is slow! Please help!

A: You can decrease the fps under settings->video. OpenGL may also help on some
   systems with ScaleX disabled.
   Try to lower the resolution, use a lower filter, or decrease some stuff in
   the sounds section.
   Stereo sound requires additional calculations compared to mono sound. There
   are many things you can do to speed up the program. Also HQP requires more
   resources.

Q: Commander Genius is too fast! Please help!

A: There have been situations observed where Commander Genius too fast.
   When the VSync option is enabled there is no special latency running, because
   it is assumed that the graphics card does the throttling to the amount of fps
   configured through your hardware and drivers. There are situations where
   such hardware does not do that but instead tries to render as much as possible,
   making CGenius run as fast as the CPU. So in a nutshell, enabling or disabling
   the vsync might help in some ocasions. Also check if OpenGL is enabled or disabled.

Q: Strange DPI Setttings on Windows 10?

A: If you use different DPI Settings and have graphical
   issues using CG, it's recommended to right click on the executable on CGenius,
   click Properties, Compatibility, Change high DPI settings,
   and set High DPI scaling override to Application.
   Not doing that might result in black screen on CGenius on some screens
   in fullscreen mode.

Q: What about the run actions?

A: It is disabled by default. Feel free to assign it. This action when its
   button is held down will make Keen run very fast (Only Keen 1-6).
   It might break some levels though, because these game never were meant
   to have such feature. It is still cool though.


Q: What about Keen Dreams?

A: You can already play it through. Never thought we would support that one
   day, but NY00123 made it possible.
   Not all versions are supported, but the supported version has a few
   enhancements as well.
   If you forget to collect some of the bombs in a level, you can replay that
   level, making the game better to play in my opinion. The support on that game
   is still a WIP but you can finish it already.

Q: Will Commander Genius support more games?

A: I like the ScummVM approach for adventure games. Maybe one day we do that
   in CG for other great DOS platformer titles, maybe one day...


# BUG! 

So you really found one or more bugs? Please report those to use via GitLab
issues and they might get fixed.
Depending on the priority, we are going to fix them as soon as possible.
Sending us the "CGLog.html" or "CGLog.txt" file might help with tracking down
the error.
Also remember to test using the latest version from the testing repo we
sometimes provide. Your error might have been already fixed there.
If there is no testing version after the release, just report it. ;-)

Of course you can send an email, but GitLab is more useful to me:

https://gitlab.com/Dringgstein/Commander-Genius/issues


# ACKNOWLEDGEMENTS

Many thanks to the people who have helped me so far in this project with their
suggestions:
 
 
## Contributors:
* Sanic The Hedgehog
* XRackProject
* Passion4Pins
* Lemm
* Mewingtree
* Mancus
* Zilem
* Vanfanel
* Hagel
* FCTW
* Markus Arnold (ThinkLabs. Thanks for your generous contribution.)
* DSL (Nice legacy icon contribution)
* Motorfingers
* James Le Cuirot
* Tim Wegener
* Qbix and his DOSBox team (for creating DOSBox, which made Dosfusion possible)
* Chrisfischtopher
* Commander Spleen
* Dreams
* Casey Bird
* Raymond Larabie
* Alexander 'z33ky' Hirsch
* Pizza2004
* Pickle
* Sciz CT
* hasufell
* Alexandre Detiste
* Zear
* Oet
* Napalm (More Keen data structure information)
* Malvineous
* Clobber
* Mewingtree (Keen 6 Demo support)
* Hans de Goede (The Redhat/Fedora Guy)
* Levellass (Keen EXE information)
* ZidaneA (For his music tracks!)
* Iv4n (wiivn)
* Ildar Mulyukov
* ianhan79
* Dan Church
* Lee Reilly
* Vincent Beers (davince21)
* Rohit Nirmal
* Rémi Verschelde
* Lucio


## Retired Devs:
* Albert Zeyer
* Tulip
* Pizza2004
* Pickle
* NY00123

## Special Thanks to:
Tom Hall and John Romero for his recommendations
and overall design of the original game.
John Carmack and Adrian Carmack for making it technologically possible
to bring such great graphics and animations to the screen.
Also special thanks to Bobby Prince for his music and everybody I forgot here.
You created all an awesome product that will live forever thanks to the fans.

Also many special thanks to Martin Hauber (Tulip), Hagel and Mancus Nemo who
have been supporting me all the time in testing the Windows version of CG and
giving me access to a lot of information about the games.
Without you it wouldn't be that great!

Special thanks to Chad Ian Anderson (Pizza2004) in helping us so
much in many points of the game.
Every time I had the chance to test his port in Mac it was awesome. I like his
work!
Even in difficult times, he always supported us. I hope to read from him some
time again...

Furthermore, special thanks to Scott (Pickle) and Albert Zeyer for their
changes. They helped out a lot on the quality of the code and performance
incrates.

Also special thanks to NY00123 for helping to test many different versions and
improving them.
Too bad he invests his time on his own projects right now, but still awesome
stuff he creates.
Also the Reflection Keen port helped to integrate Keen Dreams in CG. Thanks for
that hard work!

I'm sure, there were more people who helped us and whom we forgot to mention,
but many thanks to them also.

And many thanks to all of you, the project has become that awesome!


For questions, comments, or updates to the source tree
please contact: gerstrong@gmail.com or go through
SourceForge at http://clonekeenplus.sourceforge.net/


# Legacy Readme file here:

[Commander Genius Readme File](https://github.com/gerstrong/Commander-Genius/blob/master/README.in)
