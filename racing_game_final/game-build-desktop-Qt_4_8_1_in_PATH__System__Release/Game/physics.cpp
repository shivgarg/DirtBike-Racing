/*
 * physics.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: cs1120224
 */

#include "physics.h"
#include "Vector3D.h"
#include "Object.h"
#include <stdio.h>
#include <fstream>
#include <sstream>
#include "global.h"
#include <string.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <iostream>
#include <utility>
# define gravity Vector3D(0,-183.23,0)
 using namespace std;

float height,newhei,alphaMax; bool InAir,thetaupd;
Vector3D newpos,oldpos,directional;

float Height(float x,float z){
	float hei;
	float i=x/SCALE;
	float j=z/SCALE;
	int inti = floor(i);
	int intj = floor(j);
	float h1,h2;
	h1=a.getHeight(inti,intj)+(a.getHeight(inti+1,intj)-a.getHeight(inti,intj))*(i-(float)inti);
	h2=a.getHeight(inti,intj+1)+(a.getHeight(inti+1,intj+1)-a.getHeight(inti,intj+1))*(i-(float)inti);
	hei=h1+(h2-h1)*(j-(float)intj);
	return hei;
}

void checkgame(float x,float y)
{
	pair<float,float> temp;
	temp=checkpoints.front();
	float tempdis=sqrt((x-temp.first)*(x-temp.first)+(y-temp.second)*(y-temp.second));
	if(tempdis<100)
	{
		if(!isPractice){
		checkpoints.pop();}
		
	}
}

void Manager::UpdateVel(){
	directional=Vector3D(cos(car.ctheta*PI/180)*sin(car.cphi*PI/180),0,sin(car.ctheta*PI/180)*sin(car.cphi*PI/180))*10;
	oldpos=car.position;
	newpos=car.position + car.velocity*(refreshMills/1000.0);
	newhei=Height(newpos.x,newpos.z);
	if(newpos.y-newhei>=0.1)InAir=1;
	else InAir=0;
	height=Height(car.position.x,car.position.z);
	if(car.velocity.mod()>1){
		if(InAir){
			car.velocity+=gravity*(2*refreshMills/1000.0);
		}
		else{
			car.velocity=car.velocity.project(Vector3D(newpos.x-car.position.x,newhei-height,newpos.z-car.position.z));
			car.velocity-=car.velocity.unit()*cos(car.cphi*PI/180)*gravity.mod()*(refreshMills/1000.0);
		}
		float vmag=sqrt(car.velocity.x*car.velocity.x+car.velocity.z*car.velocity.z);
		car.velocity.x=vmag*cos(car.ctheta*PI/180);
		car.velocity.z=vmag*sin(car.ctheta*PI/180);
		if(camType){
			theta=270-car.ctheta;
			
		}
	}else {
		//car.velocity+=directional*10;
		///do your stuff for low velocities.
		//car.velocity=Vector3D(cos(car.ctheta*PI/180)*sin(car.cphi*PI/180),0,sin(car.ctheta*PI/180)*sin(car.cphi*PI/180))*2;
	}

	///tilting and speeding of bike
	thetaupd=0;
	if(newpos.y-height<=3){
		if(my_key_left){
			car.calpha+=0.5;
		}
		if(my_key_right){
			car.calpha-=0.5;
		}
	}

	if(my_key_left){
		
			thetaplus+=0.4;
			thetaupd=1;
		}
		if(my_key_right){
			thetaplus-=0.4;
			thetaupd=1;
		}
	if(my_key_down or !thetaupd){
		thetaplus*=0.8;
		int change=my_key_down? 2:1;
		if(abs(car.calpha)<1)car.calpha=0;
		else car.calpha+=car.calpha>0?-change:change ;
	}
	alphaMax=car.velocity.mod()/60;
	if(abs(car.calpha)>=alphaMax){
		car.calpha=car.calpha>0?alphaMax:-alphaMax;
	}
	if(abs(thetaplus)>=8){
		thetaplus=thetaplus>0?8:-8;
	}
	if(car.velocity.mod()*refreshMills/1000.0>=0.1){
		dist+=car.velocity.mod()*refreshMills/1000.0;}
	
}

void Manager::next(){
	car.position+=car.velocity*(refreshMills/1000.0);
	if(car.position.x>(a.terrainwidth-2)*SCALE){
		car.position.x=car.position.x-30;
		car.velocity*=-1;
		car.ctheta+=180;
	}else if(car.position.x<(2)*SCALE){
		car.position.x=car.position.x+30;
		car.velocity*=-1;
		car.ctheta+=180;
	}
	if(car.position.z>(a.terrainwidth-2)*SCALE){
		car.position.z=car.position.z-30;
		car.velocity*=-1;
		car.ctheta+=180;
	}else if(car.position.z<(2)*SCALE){
		car.position.z=car.position.z+30;
		car.velocity*=-1;
		car.ctheta+=180;
	}
	if(car.position.y<=height+0.1)
	{
		car.position.y=height;
	}
	bool upInAir=car.position.y-Height(car.position.x,car.position.z)>5;
	if(!upInAir){
		if(my_key_up){
			car.velocity=car.velocity+directional;
			car.velocity*=0.98;
		}
		else{
			car.velocity=car.velocity-directional*0.3;
			car.velocity*=.995;
		}
		if( my_key_down){
			car.velocity*=0.8;
		}
	}else{
		newhei=car.position.y-Height(car.position.x,car.position.z);
		if(newhei>25)
		points+=(car.position.y-Height(car.position.x,car.position.z))/(difficulty==0?150:300.0);
	}
	
	Vector3D temp=(car.position-oldpos);
	if(temp.mod()<0.05){
		
		car.cphi=90;
		
	}
	else{
		if(InAir){
			bool ter=(car.velocity.mod()<0.0001);
			car.cphi= acos(car.velocity.y/(ter ? 0.01 : car.velocity.mod()))*180/PI;
		}
		else{
			
			car.cphi= acos(temp.unit().y)*180/PI;
		}
	}
	
}

bool compare(const pair<char[50],int> a,const pair<char[50],int> b)
{
	return a.second>=b.second;
}
void Manager::HandleCollision(){
	
	if(!checkpoints.empty()){
			checkgame(car.position.x,car.position.z);
		}
		else{
			win=1;
			
			ofstream update("update.txt",std::ofstream::out);
			update<<(int)points<< endl;
			update<< (int)(gameTime/1000)<< endl;
			update.close();
			if(timetaken>gameTime/1000)
			{
				timetaken=(int)gameTime/1000;
			}
			std::copy(playername,playername+50,trackhigh[5].first);
			trackhigh[5].second=points;
			scores[5]=points;
			sort(trackhigh,trackhigh+6,compare);

			
			stringstream ss;
	   		ss << trackid;
	   		string opl=ss.str();
	   	stringstream sss;
	   		sss<<difficulty;
   			string y="t"+opl+"/high"+sss.str()+".txt";
			ofstream writehigh(y.c_str(),std::ofstream::out | std::ofstream::trunc);
			cout << "write score  "<< y;
			string jk;
			stringstream timewrite;
			timewrite<<timetaken;
				
			writehigh<<timewrite.str()+"\n";
			for(int i=0;i<5;i++)
			{
				
				jk=trackhigh[i].first ;
				
				stringstream asd;
				asd<<trackhigh[i].second;
				
				jk.append("\n"+asd.str());
				jk+="\n";
				writehigh<<jk;
			}
			writehigh.close();cout << "before sort"<< endl;
			sort(scores,scores+6);
			y="t"+opl+"/"+string(playername)+sss.str()+".txt";
			
			ofstream writeplhigh(y.c_str(),std::ofstream::trunc);
			if(playerbesttime>gameTime/1000)
			{
				playerbesttime=(int)gameTime/1000;
			}
			stringstream bh;
			bh<< playerbesttime;
			writeplhigh<<bh.str()+"\n";
			for(int d=5;d>=1;d--)
			{
				
				stringstream tempscore;
				tempscore<<scores[d];
				jk=tempscore.str();
				jk+="\n";
				writeplhigh<<jk;
			}
			writeplhigh.close();

			paused=true;

			}
			bool collision_is_happening=0;
	for(vector<pair<float,float> >:: iterator it=hurdlelist1.begin();it!=hurdlelist1.end();it++){
		Vector3D temp=Vector3D((*it).first,a.getHeight(int((*it).first/SCALE),int((*it).second/SCALE)),(*it).second);
		if((temp-car.position).mod()<30 and !collision_is_happening){
			collision_is_happening=1;
			glPushMatrix();
					glTranslatef(temp.x,temp.y,temp.z);
					glColor3f(0.0,0.3,0.2);
					
			glPopMatrix();
			
			car.position+=(car.position-temp).unit()*3;
			car.velocity-=car.velocity.project(temp-car.velocity);
			points-=difficulty==1?3:(difficulty==2?0:10);
		}else{
			collision_is_happening=0;
		}
	}


	for(vector<pair<float,float> >:: iterator it=treelist.begin();it!=treelist.end();it++){
		Vector3D temp=Vector3D((*it).first,a.getHeight(int((*it).first/SCALE),int((*it).second/SCALE)),(*it).second);
		
		if((temp-car.position).mod()<20 and !collision_is_happening){
			collision_is_happening=1;
			glPushMatrix();
					glTranslatef(temp.x,temp.y,temp.z);
					glColor3f(0.0,0.3,0.2);
					
			glPopMatrix();
			
			car.position+=(car.position-temp).unit()*3;
			car.velocity-=car.velocity.project(temp-car.velocity);
			points-=difficulty==1?3:(difficulty==2?0:10);
		}else{
			collision_is_happening=0;
		}
	}
	for(int it=0;it<markercount;it++){
		if(!a.markers[it].taken && (car.position-(a.markers[it].position)).mod()<=(car.size)/1.5){
			
			a.markers[it].taken=1;
			points+=50;
		}
	}
}
