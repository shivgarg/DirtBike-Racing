/*
 * terrain.h
 *
 *  Created on: 7 Aug 2013
 *      Author: shivam
 */

#ifndef TERRAIN_H_
#define TERRAIN_H_

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <string>
#include "first.h"
#include <vector>

#include "Vector3D.h"


using namespace std;

struct normal{
	float x;
	float y;
	float z;
};
struct bonus{
	Vector3D position;
	bool taken;
};
//! Terrain class
/*!
	This class takes input as heightmap and textures images which are to be mapped on it and on the HUD. 
	It also takes a pathmap to define the track and place objects accordingly.
*/
class terrain
{
public:
	const char * heightmap;															/*!< The filename of the heightmap is stored in this field */
	GLubyte * data;																	/*!< This byte array stores the data of the image file in byte format and is used to determine the height of the terrain and in physics engine*/ 
	int terrainwidth;																/*!< This field stores the width of the terrain*/
	int terrainheight;																/*!< This field stores height of the terrain*/
	string textures[4];																/*!< This array stores the name of the texture files which are to be mapped on the terrain and certain parts of HUD */
	GLuint ids[3];																	/*!< This array stores the ids of the textures which have been genrated by the texture class.*/
	Texture  ad[4];																	/*!<  This array contains the processed texture data returned by the method in texture class and it is used to apply textures on different objects.*/
	normal** normals;																/*!< This is a poinetr to an array of normals pointers storing normals at each point*/ 
	char * pathname;																/*!< this character array stores the name of the file containing description of the path*/
	bonus markers[300];																/*!/ This array stores the location of the markers on the track */
public:
	//! Renderer on Terrain with texture 
	/*!
		This function calls Render1 funciton which actually renders the terrain using frustum culling. 
		Actually firstly this function used to call displaylist of terrain rendering but afterwards frustum culling was used.
		\param it taks no arguement 
	*/
		void Render(void);
	//! renders the terrain
	/*!
		this function executes the commands of 	rendering the terrain. it uses frustum culling to selectively render triangles of the terrain.
		\param Texture *  -A pointer to array of textures 
	*/
	void Render1(Texture *);
	//! Reads the texture images and heightmap
	/*!
		This function is called in init and it makes textures objects and reads the heightmap and pathmap
		It takes parameters from the object it is called and various parameters associated with a track are assigned in the init function.


		*/
	void Read(void);
	//! this function loads the texture image and returns the texture object
	Texture * loader();
	//! This is the constructor of the terrain class 
	/*!
		This function is an constructor of the terrain class and takes an arguement the name of the heightmap
		\param pic a char array pointer conating heightmap 
		*/ 
	terrain(char * pic);
	//! Null constructor of terrain class
	terrain(void);
	
	//! Computes height at any point in the terrain
	/*!
		This function computes height at any point in the heightmap using data field of the terrain
	*/
	GLfloat getHeight(int,int);
	
};


#endif /* TERRAIN_H_ */
