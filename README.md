pifba
=====
Based on Squid pifba

Look first a readme.txt or https://code.google.com/p/pifba/ for an introduction.

I added few fixes : 

- You can now configure d-pad buttons per button (allows ps3 d-pad control on all games)
- You can now choose a HOTKEY and Exit Buton (I hate accidentallyd quit with start+select :))
- You can now pass the configuration file as an argument when you start the program in command line like 
```shell
./fba2x --configfile configfile.cfg
```
- And the last but not least : You can now play in 4 players mode !

Dungeons and Dragons runs great with 3 buddies !


Make with :
```shell
sudo apt-get install libasound2-dev
make
```

Run with :
```shell
./fba2x /path/to/rom
```

