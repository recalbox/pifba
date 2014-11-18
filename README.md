pifba
=====
Based on Squid pifba

Look first a readme.txt or https://code.google.com/p/pifba/ for an introduction.

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
wget https://github.com/digitalLumberjack/pifba/releases/download/0.1/pifba-0.1.zip
unzip pifba-0.1.zip
```

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

