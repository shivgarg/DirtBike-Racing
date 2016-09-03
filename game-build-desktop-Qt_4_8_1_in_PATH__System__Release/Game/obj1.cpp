/*
 * obj1.cpp
 *
 *  Created on: 11 Aug 2013
 *      Author: shivam
 */

#include "obj1.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>

#include "libtarga.h"
#include <iostream>
#include "first.h"
using namespace std;

//! this function loads the image to be mapped on the object
/*!
	this function load image according to format either tga or bmp and calls the corresponding function
	/param char* pic The path of th eimage to be mapped
*/
GLuint  Objectrender:: LoadImage( char* pic)
{
	for(int i=0;;i++)
	{
		while(pic[i]!='.')
		{i++;
		}
		if(pic[i]=='.')
		{
			if(pic[i+1]=='b')
			{
				return LoadBMP(pic);

			}
			else
			{
				return LoadTGA(pic);
			}
		}
	}
}
//! this function loads the image to be mapped on the object
/*!
	this function load image according bmp format and calls the corresponding function
	/param char* pic The path of th eimage to be mapped
*/
GLuint Objectrender :: LoadBMP(char* pic)
{

    GLuint g;
        FILE * picfile;
        picfile = fopen(pic, "rb");
        if (picfile == NULL)
        {	printf("NOT FOUND\n");
            return 0;}
       
        GLubyte * exp=(GLubyte*)malloc(54);
        fread(exp,1,54,picfile);
        terrainwidth=exp[18]+exp[19]*256.0+exp[20]*65536.0;
        terrainheight=exp[22]+exp[23]*256.0+exp[24]*65536.0;
        free(exp);
        data = (char*)malloc(terrainwidth * terrainheight * 3);
        fread(data,1, terrainwidth * terrainheight*3, picfile);
     
        fclose(picfile);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glGenTextures(1, &g);
        glBindTexture(GL_TEXTURE_2D, g);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
       for(int i=0;i+2<terrainwidth*terrainheight*3;i+=3)
        {	GLubyte temp;
            temp=data[i+2];
            data[i+2]=data[i];
            data[i]=temp;

        }
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, terrainwidth, terrainheight, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);//cout << "g "<< g << endl;
        free(data);
        return g;
}
//! this function loads the image to be mapped on the object
/*!
	this function load image according tga format and calls the corresponding function
	/param char* pic The path of th eimage to be mapped
	they retrun the id of the texture
*/
GLuint Objectrender :: LoadTGA(char * pic)
{
	GLuint g;
	int width;int height;
	
	data = (char * )tga_load(pic, &width,&height, TGA_TRUECOLOR_24);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	 glGenTextures(1, &g);
	        glBindTexture(GL_TEXTURE_2D, g);
	        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	        glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	      
	        return g;
}
//! This function renders the model 
/*!
		this function invokes the glmdraw function to render the object
*/
void Objectrender::Render(void)
{

s=LoadImage(filepath);
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, s);
glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
glmDraw(myModel,GLM_MATERIAL | GLM_SMOOTH | GLM_TEXTURE);
glDisable(GL_TEXTURE_2D);



}
//! Constructor
/*!
	This function makes on object of Objectrender class
	/param char*g This field specifies the obj file
	/param char*j This field specifies the texture file
*/
Objectrender :: Objectrender (char * g,char * j)
{
	objpath=g;
	filepath=j;
	myModel = glmReadOBJ(objpath);
	glmFacetNormals(myModel);
	glmVertexNormals(myModel, 90.0);
}
