#DIRT BIKE 3D
![Logo](https://cloud.githubusercontent.com/assets/5080310/13088108/f4238158-d510-11e5-867e-c2a64675cb52.jpg)

It is a 3 D dirt bike racing game where user have the option to choose difficuly, track, bike, type of controls and other physical parameters. Target is to finish the track as soon as possible collecting points and avoiding obstacles and to get your name registered in Leaderboard. It bikes 10 different tracks and 3 different bikes.

### Features
- No external physics engine is used. It is implemented from scratch using C++ OOP.
- Tracks are constructed from bitmap images. 
- Bikes and other objects are generated from special .obj files.
- There is a practice mode as well where there is no scoreborad and timer.
- Each screen has a GTA like map at the botton left depicting the current position of bike and next checkpoint.
- There are 2 difficulty levels for this each track. i.e. Easy and Difficult.
- We also have a speedometer to show the relative speed of the bike.
- The game finishes only when all the checkpoints are reached.


### Structure

It has a game-build-desktop folder.The game-build-desktop....  folder contains the assets used by the game . All the data of the game used by game engine is stored here.  A folder named game inside game-build-desktop ..... contains the source code of the game. build the makefile without any target and run the exceutable game in game-build-desktop......... folder.

The makefile makes a run executable which can be run through command line.

An elaborate description of code is given in Documentation.


### Precompiled Version

If you do not wish to compile the source code yourself, precompiled binary files for Ubuntu are available from the folder "game-build-desktop-Qt_4_8_1_in_PATH__System__Release".
Just double click on **run** file 


### Requirements
Just need freeglut3, freeglut3-dev along with build-essentials on Ubuntu. 

```
sudo apt-get install freeglut3 freeglut3-dev
```

For start page UI of the game, Install Qt-Creater to run. 


### Building the Game

After downloading a copy of the source code.

```
cd game-build-desktop-Qt_4_8_1_in_PATH__System__Release/Game
make
```
It will build the game and generate ./run file.
Copy this file and paste it in game-build-desktop-Qt_4_8_1_in_PATH__System__Release and run. i.e.
```
cp run ../run
cd ..
./run
```

### Documentation

All documentation for the Code is present file [pdf](https://github.com/shivgarg/DirtBike-Racing/blob/master/Documentation.pdf) which is automatically generated from the source code. HTML documentation is present [here](https://github.com/shivgarg/DirtBike-Racing/tree/master/game-build-desktop-Qt_4_8_1_in_PATH__System__Release/Game/html)

### Screenshots

[![](https://cloud.githubusercontent.com/assets/5080310/13098770/7d9d5b44-d551-11e5-8540-718a31247340.png)](https://cloud.githubusercontent.com/assets/5080310/13098770/7d9d5b44-d551-11e5-8540-718a31247340.png)
[![](https://cloud.githubusercontent.com/assets/5080310/13098771/7d9e260a-d551-11e5-8ad4-c207e5f3af88.png)](https://cloud.githubusercontent.com/assets/5080310/13098771/7d9e260a-d551-11e5-8ad4-c207e5f3af88.png)
[![](https://cloud.githubusercontent.com/assets/5080310/13098774/7dbeed18-d551-11e5-8897-5828a9b85ba0.png)](https://cloud.githubusercontent.com/assets/5080310/13098774/7dbeed18-d551-11e5-8897-5828a9b85ba0.png)
[![](https://cloud.githubusercontent.com/assets/5080310/13098768/7d97d782-d551-11e5-84b2-f32d0072bf1c.png)](https://cloud.githubusercontent.com/assets/5080310/13098768/7d97d782-d551-11e5-84b2-f32d0072bf1c.png)
[![](https://cloud.githubusercontent.com/assets/5080310/13098763/7d736d7a-d551-11e5-8411-f80037915cb9.png)](https://cloud.githubusercontent.com/assets/5080310/13098763/7d736d7a-d551-11e5-8411-f80037915cb9.png)
[![](https://cloud.githubusercontent.com/assets/5080310/13098772/7d9f3a18-d551-11e5-8036-58505408995a.png)](https://cloud.githubusercontent.com/assets/5080310/13098772/7d9f3a18-d551-11e5-8036-58505408995a.png)
