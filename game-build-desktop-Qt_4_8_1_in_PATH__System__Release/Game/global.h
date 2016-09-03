#ifndef GLOBAL_H_
#define GLOBAL_H_
#include "obj1.h"
#include<iostream>
#include <utility>
#include <queue>
#include<vector>
using namespace std;
#include "Object.h"
#include <time.h>
#define PI 3.14159265
#define refreshMills 15

extern float HEIGHTSCALE ;
extern bool win;																	//!< Win variable : takes value 'true' when the game has ended.
extern queue<pair<float,float> > checkpoints;										//!< Queue in which checkpoints are stored. 
extern pair<char[50],int> trackhigh[6];												//!< Maintains top 6 name - high score pairs 
extern int scores[6];																//!< This array conatins the six highest scores of the player playing
extern float theta;																	//!< Spherical coordinate theta of camera with respect to bike
extern float phi;																	//!< Spherical coordinate phi of camera with respect to bike (from z axis)
extern float camx;																	//!< X Coordinate of camera with respect to bike
extern float camy;																	//!< Y Coordinate of camera with respect to bike
extern float camz;																	//!< Z Coordinate of camera with respect to bike
extern float rad_sphere;															//!< Distance of camera from bike
extern float thetaplus;																//!< Modifier for bike rotation
extern bool my_key_left;															//!< turns bike left 
extern bool my_key_up;																//!<  accerate the bike
extern bool my_key_right;															//!< turns bike right
extern bool my_key_down;															//!< apply brakes
extern string dirname;																//!< This field contains the directory name in which tracks and other information of the game lies; 
extern char playername[50];															//!< Current player's name
extern bool keyStates[255];															//!< Bool array which keeps track of the simultaneous keys pressed at the same time
extern bool camType;																//!<
extern bool isPractice;																//!< This varibale stores wheher the game is in practice mode or not
extern bool bikerView;																//!< Camera changes to biker view when it takes 'true' value
extern bool fullscreen;																//!< Screen changes to full screen when it takes 'true' value
extern bool GameMode;																//!< easy or difficult
extern terrain a;																	//!< Object of terrain class. It reads the .bmp files (heightmap and texture) and renders the terrain.
extern Object car;																	//!< Object for vehicle on the terrain
extern vector<Object> hurdle;														//!< hurdles
extern vector<Vector3D> markers;													//!< bonus markers
extern int SCALE;																	//!< It scales the terrain to the given scale
extern int gameTime;																//!< counts time in seconds
extern int trackid;																	//!< It takes separate value for different tracks.
extern float frustum[6][4];															//!< frustrum used for culling
extern float points;																//!< Maintains the score of the game throughout the game time and is displayed on the HUD.
extern float dist;																	//!< This field maintains the distance traversed in the game
extern int trackbesttime[6];														//!<
extern bool paused;																	//!< conrol for pause button
extern bool superPaused;															//!< The game pausees to the current state when pause is true.
extern int BikeType;																//!< It takes separate value for different bikes. It can be toggled at runtime.
extern int markercount;																//!< This field stores the maximum number of bonus markers on the track
extern int MaxCalpha ;																//!<
extern int timetaken;																//!< This field keeps record of the running time of the game	
extern int difficulty;
extern int playerbesttime;															//!< Thsi field stores the previous best time of the player
extern vector<pair<float,float> > treelist,hurdlelist1,hurdlelist2;					//!< These lists stores the coordinates of the trees and various objects on where to make them on terrain


#endif /* GLOBAL_H_ */
