/*
 * obj1.h
 *
 *  Created on: 11 Aug 2013
 *      Author: shivam
 */

#ifndef OBJ1_H_
#define OBJ1_H_
#include "libtarga.h"
#include "glm.h"
#include "first.h"

class Objectrender{
public:
	char * objpath;
	char * filepath;
	GLMmodel *myModel;
	GLuint s;
	char * data;
	int terrainwidth,terrainheight;
	Texture objtex;
	
public:
	GLuint LoadImage(char*);
	void Render(void);
	Objectrender(char *,char*);
	Objectrender();
	GLuint LoadBMP(char*);
	GLuint LoadTGA(char*);
};


#endif /* OBJ1_H_ */
