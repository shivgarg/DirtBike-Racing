/*
 * first.h
 *
 *  Created on: 5 Aug 2013
 *      Author: shivam
 */


#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#ifndef FIRST_H_
#define FIRST_H_

//! Texture Class
 /*!
 	This class takes texture map as input and gives loaded texture map as output
 */
class Texture
{
	public:
		const char * pic;						/*!< This field has the filename of the image to be mapped*/
		GLubyte * data;							/*!< This field has the file loaded in the format RGB in a byte array */
		int terrainwidth;						/*<! this field has the texturewidth in pixels*/
		int terrainheight;						/*<! This fiels has the textureheight in pixels */
		GLuint Terrainid;						/*<! this field has the id of the loaded texture which is returned by LoadImage function*/

public:
//! Loads the Texture
	/*!
		This function loads the given image file into texture format into byte array RGB format.

	*/
	GLuint LoadImage();
	//! Maps texture on a surface
	/*!
		This function maps the texture on a the smae image treating it as a heightmap
		/param Texture b a texture object which is to be mapped 
	*/
	void Render(Texture b);
	//! Constructor
	/*!
		This constructs an object of texture class and assigns the image in pic field.
		/param const char* d It contains the filename of theimage to be mapped

	*/
	Texture(const char * d);
	//! Constructor
	/*!
		This constructs an object of texture class having null values of all fields
	*/
	Texture();

	//! Returns height at a point on the texture
	/*!
		This function was made fore some testing purposes no significance;
	*/
	GLfloat getHeight(int , int);

};



#endif /* FIRST_H_ */
