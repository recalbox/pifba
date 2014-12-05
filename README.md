pifba
=====
Based on Squid pifba

Look first a readme.txt or https://code.google.com/p/pifba/ for an introduction.

*Version 0.3 :*
- You can now force joystick index for a player with the configuration line SDLID_[PLAYER]=-1
  For example, if you have 3 joysticks on the system (0,1 and 2), the default config will take the 0 for player1, 1 fro player 2 etc. Change the line SDLID\_1=-1 to SDLID\_1=1 and your first first player will be controlled by the second joystick on the system.

*Version 0.2 :*
- You can now specify a RotateScreen value in config files. If setted to 1, the screen rotate 90° clockwise.

*Version 0.1 :*

I added few fixes : 

- You can now configure d-pad per button (in case sdl does not detect the hat on the controller) so it adds the ps3 d-pad control on all games
- You can now choose a HOTKEY and QUIT Button (I hate accidentally quit with start+select :))
- You can now pass the configuration file as an argument when you start the program in command line like 
```shell
./fba2x --configfile configfile.cfg
```
- And the last but not least : You can now play in 4 players mode !

Dungeons and Dragons runs great with 3 buddies !

## Binary Install
```shell
sudo apt-get install libasound2-dev
mkdir pifba
cd pifba
wget https://github.com/digitalLumberjack/pifba/releases/download/0.1/pifba-0.1.zip
unzip pifba-0.1.zip
```
Then go to [Execution](#execution)

## Compilation

Make with :
```shell
sudo apt-get install libasound2-dev
git clone https://github.com/digitalLumberjack/pifba
cd pifba
mkdir .obj
make
```
It will create the fba2x executable.

## Execution
Run with :
```shell
./fba2x /path/to/rom
```

