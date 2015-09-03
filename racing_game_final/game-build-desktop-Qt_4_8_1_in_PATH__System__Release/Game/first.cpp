
#include "first.h"
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
typedef float f;
#define SCALE 10
using namespace std;


Texture :: Texture(const char * a){
	pic=a;
}

Texture :: Texture()
{

}

GLuint Texture ::  LoadImage()
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
		data = (GLubyte*)malloc(terrainwidth * terrainheight * 3);
		fread(data,1, terrainwidth * terrainheight*3, picfile);
		fclose(picfile);
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	    glGenTextures(1, &g);
		glBindTexture(GL_TEXTURE_2D, g);
		for(int i=0;i<terrainwidth*terrainheight*3;i+=3){
			GLubyte temp;
			temp=data[i+2];
			data[i+2]=data[i];
			data[i]=temp;
		}
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, terrainwidth, terrainheight, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		return g;
}

float Texture ::getHeight(int x,int y)
{
		return (float)data[x*(int)terrainwidth*3+y*3+1];
}
void Texture:: Render(Texture b)
{


Terrainid=LoadImage();
b.Terrainid=b.LoadImage();

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, b.Terrainid);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);

	
		for(int j=0,m=0;j<terrainwidth-1;j++,m++){
		int i=0,n=0;
			while(i<terrainheight-1){

				glBegin(GL_TRIANGLE_STRIP);
		
				glTexCoord2f(f(n)/b.terrainheight, f(m)/b.terrainwidth);
				glVertex3f(i*SCALE,data[(j)*terrainwidth*3+i*3+1]*SCALE*0.1,j*SCALE);
				glTexCoord2f(f(n+1.0)/b.terrainheight, f(m)/b.terrainwidth);
				glVertex3f((i+1)*SCALE,data[(j)*terrainwidth*3+(i+1)*3+1]*SCALE*0.1,j*SCALE);
				glTexCoord2f(f(n)/b.terrainheight,f(m+1)/b.terrainwidth);
				glVertex3f(i*SCALE,data[(j+1)*terrainwidth*3+i*3+1]*SCALE*0.1,(j+1)*SCALE);
				glTexCoord2f(f(n+1)/b.terrainheight,f(m+1)/b.terrainwidth );
				glVertex3f((i+1)*SCALE,data[(j+1)*terrainwidth*3+(i+1)*3+1]*SCALE*0.1,(j+1)*SCALE);

				
				glEnd();

	i+=1;n++;
	if(n+1>=b.terrainheight){
		n=0;}


	}if(m+1>b.terrainwidth){
		m=0;}
	}
		glFlush();
		}

	

