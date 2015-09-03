/*
 * Object.cpp
 *
 *  Created on: Aug 6, 2013
 *      Author: cs1120224
 */

#include "Object.h"
#include "Vector3D.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <cmath>
#include "global.h"
#include "terrain.h"
#include <vector>
#include "obj1.h"

float scales[]={ 0.5 , 4 , 0.08 };					/*!< Scales the size of the bikes*/
float AlphaScales[]={ 1 , -2 , 1.6 };				/*!< Manages the tilt of the bikes*/
float heights[]={ 13 , 7 , 15 };					/*!< Manages the height of the bikes*/
int bikeangles[]={0,180,0 };						/*!< Manages the right orientation of the bike*/
float checkptsangle=0;								/*!< Manages the rotation of the yellow checkpoints*/
float markangle=0;									/*!< Manages the rotation of the markers*/

   Objectrender dirtbike("Kroserica_simple2.obj","tex2.bmp");							/*!< Dirt bike object*/
   Objectrender quad("Quad.obj","QuadTex.bmp");											/*!< Quad bike object*/
   Objectrender racingBike("Bike_Suzuki_Katana.obj","bike01.bmp");						/*!< Racing bike object*/
   Objectrender Checkpt("cube_texture.obj","checkpoint.bmp");							/*!< Checkpoint object*/
   Objectrender tree("Palm_Tree.obj","Palm_Tree.tga");									/*!< Tree object*/
   Objectrender coin("coin.obj","wrapper.tga");											/*!< Coin object*/
   Objectrender hurdle1("cube_texture.obj","crate.tga");								/*!< Wooden Crate object*/
   GLuint object1,object2,object3,object4,object5,object6,object7;
vector<pair<float,float> > treelist,hurdlelist1,hurdlelist2;

bool PointInFrustum12( float x, float y, float z )
{
   int p;

   for( p = 0; p < 6; p++ )
      if( frustum[p][0] * x + frustum[p][1] * y + frustum[p][2] * z + frustum[p][3] <= -60 )
         return false;
   return true;
}

void Object::Draw(){

	int ValOfPhi[]={-cphi+90,-90+cphi,-cphi+90};
	glPushMatrix();
		glTranslatef(position.x,position.y+heights[BikeType],position.z);
		glRotatef(-ctheta-90 + bikeangles[BikeType]+thetaplus,0.0f,1.0f,0.0f);
		glRotatef(ValOfPhi[BikeType],1.0,0,0.0);
		glRotatef(calpha*AlphaScales[BikeType],0.0,0,1.0);
		glColor3f(0.8,0.2,0.2);
		glScalef(scales[BikeType],scales[BikeType],scales[BikeType]);
				switch(BikeType){
		case 0:   glCallList(object1);
					break;
		case 1:   glCallList(object2);
					break;
		case 2:
				  //cout<<"racingbike";
				  glCallList(object3);
		default:
				glCallList(object3);
		}
		   
	glPopMatrix();
	pair<float,float> temp;
	temp=checkpoints.front();
	if(!isPractice){
	if(PointInFrustum12(temp.first,a.getHeight((int)(temp.first/SCALE),(int)(temp.second/SCALE)),temp.second)){
	glPushMatrix();
	glTranslatef(temp.first,a.getHeight(temp.first/SCALE,temp.second/SCALE)+50,temp.second);
	glRotatef(checkptsangle,0,1,0);
	
		glCallList(object4);
		glPopMatrix();
	checkptsangle+=1;}}
for(vector<pair<float,float> >::iterator it=hurdlelist1.begin();it!=hurdlelist1.end();it++){
	if(PointInFrustum12((*it).first,a.getHeight((int)((*it).first)/SCALE,(int)((*it).second)/SCALE),(*it).second))
	{
         glPushMatrix();
         glTranslatef((*it).first,20+a.getHeight((int)((*it).first)/SCALE,(int)((*it).second)/SCALE),(*it).second);
         glCallList(object7);
        glPopMatrix();}}

for(vector<pair<float,float> >::iterator it=treelist.begin();it!=treelist.end();it++){
	if(PointInFrustum12((*it).first,a.getHeight((int)((*it).first)/SCALE,(int)((*it).second)/SCALE),(*it).second))
{
         glPushMatrix();
         glTranslatef((*it).first,a.getHeight((int)((*it).first)/SCALE,(int)((*it).second)/SCALE),(*it).second);
        glScalef(0.05,0.05,0.05);
        glRotatef(-90,1,0,0);
         glCallList(object5);
         glPopMatrix();

     }}
     for(int it=0;it<markercount;it++){
           if(!a.markers[it].taken){
             glPushMatrix();
                 glTranslatef(a.markers[it].position.x,a.markers[it].position.y+20,a.markers[it].position.z);
                 glRotatef(90,0,0,1);
                
	                 glRotatef(markangle,1,0,0);
	                 glRotatef(markangle,0,1,0);
	                 glCallList(object6);

                
             glPopMatrix();
           }
         }
         markangle+=0.6;
         if(markangle>=360)
         {
         	markangle-=360;
         }








}


void Object::addObj(){
	glPushMatrix();
			glTranslatef(position.x, position.y,position.z);
			
			glutSolidCube(3*size);
	glPopMatrix();
}

void Object :: init(){
	object1 = glGenLists(1);
		 		glNewList(object1, GL_COMPILE);
		 		   dirtbike.Render();
		 		   glEndList();

		 		  object2 = glGenLists(1);
		 		  		 		glNewList(object2, GL_COMPILE);
		 		  		 		   quad.Render();
		 		  		 		   glEndList();
object3 = glGenLists(1);
		 		  		 		glNewList(object3, GL_COMPILE);
		 		  		 		   racingBike.Render();
		 		  		 		   glEndList();
object4 = glGenLists(1);
		 		  		 		glNewList(object4, GL_COMPILE);
		 		  		 		glScalef(50,25,50);
		 		  		 		   Checkpt.Render();
		 		  		 		   glEndList();
object5=glGenLists(1);
glNewList(object5, GL_COMPILE);
		 		  		 		glScalef(50,25,50);
		 		  		 		   tree.Render();
		 		  		 		   glEndList();
		 		  		 		   
		 		  		 		   object6=glGenLists(1);
glNewList(object6, GL_COMPILE);
		 		  		 		glScalef(6,6,6);
		 		  		 		   coin.Render();
		 		  		 		   glEndList();
		 		  		 		   object7=glGenLists(1);
		 		  		 		   glNewList(object7, GL_COMPILE);
		 		  		 		glScalef(30,18,30);
		 		  		 		   hurdle1.Render();
		 		  		 		   glEndList();



}
