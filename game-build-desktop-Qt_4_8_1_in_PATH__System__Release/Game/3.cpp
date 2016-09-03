#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <cstring>
#include <iostream>
#include "Object.h"
#include "global.h"
#include "physics.h"
#include <time.h>
#include "terrain.h"
#include <stdio.h>
#include <fstream>
#include <vector>
#include <utility>
#include <sstream>
#include "obj1.h"
#include <ctime>
#include <string.h>
#include <iomanip>
using namespace std;
bool isPractice=false;
int difficulty=0;
int trackid;
FILE * track;
Manager control;
terrain a;
char playername[50];
pair<char[50],int> trackhigh[6];
int scores[6];
int timetaken=0;
int playerbesttime=0;
bool win =false;
bool keyStates[255];
queue<pair<float,float> > checkpoints;
int angle=0;
Object car;

GLfloat mat__specular[] = { 0.1, 0.1, 0.1, 0.0 };
GLfloat lmodel_ambient[] = { 2, 2, 0, 1.0 };
GLfloat mat_shininess[] = { 10.0 };
GLfloat light_position[] = { 2.0, 2.0, 2.0, 0.0 };
int penality=0,BikeType=2,markercount=0,gameTime=0,SCALE=20;
bool paused=0,camType=1,bikerView=0,fullscreen=0,gameMode=1,superPaused=0;
float thetaplus=0,points=0,HEIGHTSCALE=0.20;
float y=20.0,x=0,z=0;
float rad_sphere=170,theta=120.0, phi=65.0,dangle=2,camx,camy,camz,lookx=5.0,looky=20.0,lookz=5.0,campos=80;
bool my_key_left,my_key_right,my_key_down,my_key_up;

float dist=0;
void keyAct();

struct coordxy{
	float x,y;
};

ofstream kkdd("trackinfo.txt");

inline void update()
{
	if(phi>180){
		phi=phi-dangle+1;
	}
	else if(phi<1){
		phi=1;
	}
	camx=rad_sphere*sin(phi*PI/180)*sin(theta*PI/180),camy=rad_sphere*cos(phi*PI/180),camz=rad_sphere*sin(phi*PI/180)*cos(theta*PI/180);
}

int spx,spy;

void HUD(const int x, const int y,const int z)
{
  glColor3f(222.0/255.0,255.0/255.0,204.0/255.0);
  glBegin(GL_POLYGON);
    glVertex3f(x-1,y+1,z);
    glVertex3f(x+4,y+1,z);
    glVertex3f(x+4,y-0.9,z);
    glVertex3f(x-1,y-0.9,z);
  glEnd();
	glColor3f(0.4,0.8,0.0);
  glRasterPos3f(x,y,z);
	string Result="POINTS: ";          // string which will contain the result
	ostringstream convert;   // stream used for the conversion
	convert << (int)points;      // insert the textual representation of 'Number' in the characters in the stream
	Result.append(convert.str());
	string text = "DIRTBIKE RACING";
  for(int i=0;i<text.length();i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,text[i]);
	
  glColor3f(222.0/255.0,255.0/255.0,204.0/255.0);
  glBegin(GL_POLYGON);
    glVertex3f(x+14,y+1,z);
    glVertex3f(x+19,y+1,z);
    glVertex3f(x+19,y-0.9,z);
    glVertex3f(x+14,y-0.9,z);
  glEnd();
  glColor3f(0.4,0.8,0.0);
  glRasterPos3f(15.5+x,y,z);
	for(int i=0;i<Result.length();i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,Result[i]);
	
string dis="DISTANCE : ";
ostringstream displaydis;
displaydis.setf(ios::fixed,ios::floatfield);
displaydis.precision(1);
displaydis << dist/5000;
dis.append(displaydis.str());
displaydis.flush();
glRasterPos3f(0,0,0);
for(int p=0;p<dis.length();p++)
{
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dis[p]);
}


  glColor3f(222.0/255.0,255.0/255.0,204.0/255.0);
  glBegin(GL_POLYGON);
    glVertex3f(x+14,y-17,z);
    glVertex3f(x+19,y-17,z);
    glVertex3f(x+19,y-19,z);
    glVertex3f(x+14,y-19,z);
  glEnd();
  glColor3f(0.4,0.8,0.0);

  glRasterPos3f(15.5+x,y-18,z);
	ostringstream convert1;
	string h=" Speed: ";
	convert.flush();
  convert1.setf(ios::fixed,ios::floatfield); 
  convert1.precision(2);
	convert1 << car.velocity.mod()/10;
	h.append(convert1.str());
	convert1.flush();
	for(int i=0;i<h.length();i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,h[i]);

	glRasterPos3f(0,-18,0);
	glColor3f(1,0,0);
		glBegin(GL_LINES);
			for(float alpha=0.0;alpha<180;alpha+=0.05)
			{
				glVertex2f(-2.5*cos(alpha*PI/180),-9+2.5*sin(alpha*PI/180));
				glVertex2f(-2.5*cos((alpha+0.05)*PI/180),-9+2.5*sin((alpha+0.05)*PI/180));

			}

			glEnd();
      ostringstream convert2;   // stream used for the conversion
  convert2 << checkpoints.size();  
  string op=convert2.str();
        glRasterPos3f(0,10,0);
        for(int i=0;i<op.length();i++)
                 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,op[i]);

			float f=0.5;
			for(float alpha=10;alpha<=180.0;alpha+=10)
			{
				glBegin(GL_LINES);
					glColor3f(1,1,0);
					glVertex2f(-2.5*cos(alpha*PI/180),-9+2.5*sin(alpha*PI/180));
					glVertex2f(-(2.5-f)*cos(alpha*PI/180),-9+(2.5-f)*sin(alpha*PI/180));
					if(alpha/10==0){
					f=0.5;}
					else
					{
						f=0.75;}

				glEnd();

			}
			float speedangle=car.velocity.mod()/1000;
      if(speedangle>=180)
      {
        speedangle=180;
      }
			glBegin(GL_LINES);
				glColor3f(0,0,0);
				glVertex2f(0,-9);
				glVertex2f(-2.3*cos(speedangle*PI),-9+2.3*sin(speedangle*PI));
			glEnd();
// SPEEDOMETER ENDS
// PATH TRACER
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, a.ad[1].Terrainid);
			glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
			glColor3f(1,1,1);

				glBegin(GL_POLYGON);
					glTexCoord2f(1,0);
					glVertex3f(-10,-10,0);
					glTexCoord2f(1,1);
					glVertex3f(-10,-5,0);
					glTexCoord2f(0,1);
					glVertex3f(-5,-5,0);
					glTexCoord2f(0,0);
					glVertex3f(-5,-10,0);
				glEnd();
				glFlush();
				glDisable(GL_TEXTURE_2D);
				int scaling=a.terrainwidth/5;
        glPushMatrix();
      			glTranslatef(-5+-car.position.x/(SCALE*scaling),-10+car.position.z/(SCALE*scaling),0);
            glRotatef(-car.ctheta,0,0,1);
            glBegin(GL_POLYGON); //glBegin(GL_TRIANGLE_STRIP);
      				glColor3f(1,0,0);
      				glVertex3f(0,0,0);
      				glVertex3f(-0.1,0,0);
      				glVertex3f(-0.1,-0.1,0);
              glVertex3f(0.1,0,0);

      			glEnd();
        glPopMatrix();
        if(!isPractice){
        pair<float,float> tempcheckpt=checkpoints.front();
        glBegin(GL_POLYGON);
          glColor3f(0,1,0);
          glVertex3f(-5-tempcheckpt.first/(SCALE*scaling),-10+tempcheckpt.second/(SCALE*scaling),0);
          glVertex3f(-5.1-tempcheckpt.first/(SCALE*scaling),-10+tempcheckpt.second/(SCALE*scaling),0);
          glVertex3f(-5.1-tempcheckpt.first/(SCALE*scaling),tempcheckpt.second/(SCALE*scaling)-9.9,0);
          glVertex3f(-5-tempcheckpt.first/(SCALE*scaling),tempcheckpt.second/(SCALE*scaling)-9.9,0);
        glEnd();}
        glColor3f(0.3,1,0.3);
        
        
				int min=gameTime/60000;
        int sec=(gameTime%60000)/1000;
        ostringstream convert3;   // stream used for the conversion
  convert3 << min;
  convert3<<" min ";
  convert3<<sec;
  convert3<<" sec";  
  string op3="TIME :"+convert3.str();
        glRasterPos3f(0,8,0);
        for(int i=0;i<op3.length();i++)
                 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,op3[i]);

        if(win)
        {
          glEnable(GL_TEXTURE_2D);
          glBindTexture(GL_TEXTURE_2D, a.ad[2].Terrainid);
          glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
          glColor3f(1,1,1);

          glBegin(GL_POLYGON);
            glTexCoord2f(1,0);
            glVertex3f(5,-5,0);
            glTexCoord2f(1,1);
            glVertex3f(5,5,0);
            glTexCoord2f(0,1);
            glVertex3f(-5,5,0);
            glTexCoord2f(0,0);
            glVertex3f(-5,-5,0);
          glEnd();
        //glDisable(GL_TEXTURE_2D);
        }
glFlush();


}

//Objectrender cmarkers("cube_texture.obj","cube_face.tga");

void display(void)
{
   //glEnable(GL_LIGHTING);
  // glEnable(GL_LIGHT0);
  if(gameTime%60==0 or win){
      if(keyStates[27])                          // Escape key
          exit (0);
      if (fullscreen ){
            glutFullScreen();                /* Go to full screen */
      }
      else
      {
            glutReshapeWindow(1366, 768);
            glutInitWindowPosition (50, 50);
      }
         glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
         glMatrixMode (GL_PROJECTION);
         glLoadIdentity();
         glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 2000.0);
         glMatrixMode(GL_MODELVIEW);
         glLoadIdentity();
         if(bikerView){
           Vector3D direct=Vector3D(cos(car.ctheta*PI/180)*sin(car.cphi*PI/180),0,sin(car.ctheta*PI/180)*sin(car.cphi*PI/180))*30;
           //gluLookAt(car.position.x,car.position.y+1.6*car.size,car.position.z,car.position.x+direct.x,car.position.y+direct.y,car.position.z+direct.z,0.0,1.0,0.0);
           gluLookAt(car.position.x,car.position.y+1.6*car.size,car.position.z,car.position.x+car.velocity.x,0,car.position.z+car.velocity.z,0.0,1.0,0.0);
         }else{
          //100+a.getHeight((car.position.x+camx)/SCALE,(car.position.z+camz)/SCALE)
           float lk=a.getHeight((car.position.x+camx)/SCALE,(car.position.z+camz)/SCALE);
           gluLookAt(car.position.x+camx,max(camy+car.position.y,lk+20),camz+car.position.z,car.position.x,car.position.y,car.position.z,0.0,1.0,0.0);
         }
         glColor3f(0.5,0.5,0.5);
         
         glBegin(GL_LINES);
             glColor3f(0.5,0.3,0.1);
             glVertex3f(0.0,0.0,0.0);
             glVertex3f(0.0,1000.0,0.0);
             glVertex3f(0.0,0.0,0.0);
             glVertex3f(100.0,0.0,0.0);
             glVertex3f(0.0,0.0,0.0);
             glVertex3f(0.0,0.0,1000.0);
         glEnd();
         glColor3f(0.0,1.0,0.0);
         a.Render();
         
         
         car.Draw();
         glMatrixMode(GL_PROJECTION);
         glLoadIdentity();
         glOrtho(-10,10,-10,10,-10,10);
         glMatrixMode(GL_MODELVIEW);
         glLoadIdentity();
         HUD(-9.5,9,0);
         glFlush ();
         glutSwapBuffers();
      }
      if(!paused and !win){
             keyAct();
             update();
             control.UpdateVel();
             control.next();
             control.HandleCollision();
             points-=(refreshMills/1000.0)*gameTime/60000.0;
             gameTime+=refreshMills;
         }
  
  if(keyStates[56]){
     kkdd<<car.position.x<<" "<<car.position.z<<endl;
  }
}




void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity();
   glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 2000.0);
   glMatrixMode(GL_MODELVIEW);
   glutPostRedisplay();
   
}

void init(void){
   glDepthFunc(GL_LEQUAL);
   glClearColor (0.4, 0.4, 1.0, 0.0);
   glShadeModel (GL_SMOOTH);
   glEnable(GL_DEPTH_TEST);
   FILE * trackinfo;
   stringstream ss;
   ss << trackid;
   string tid=ss.str();
   string y="t"+ss.str();
    stringstream sss;
    if(difficulty==2){difficulty=1;}
   sss << difficulty;
   y+="/trackinfo"+sss.str()+".txt";
   trackinfo =fopen(y.c_str(),"rb");

  switch(trackid)
  {
      case 1:   a.heightmap="t1/hm.bmp";
                a.textures[0]="t1/tex.bmp";
                a.textures[1]="t1/path.bmp";
                SCALE =15;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 2: a.heightmap="t2/hm.bmp";
                a.textures[0]="t2/tex.bmp";
                a.textures[1]="t2/path.bmp";
                SCALE =10;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 3: a.heightmap="t3/hm.bmp";
                a.textures[0]="t3/tex.bmp";
                a.textures[1]="t3/path.bmp";
                SCALE =23;
                HEIGHTSCALE=0.2*(1.1*(1+gameMode));
                break;
      case 4: a.heightmap="t4/hm.bmp";
                a.textures[0]="t4/tex.bmp";
                a.textures[1]="t4/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 5: a.heightmap="t5/hm.bmp";
                a.textures[0]="t5/tex.bmp";
                a.textures[1]="t5/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 6: a.heightmap="t6/hm.bmp";
                a.textures[0]="t6/tex.bmp";
                a.textures[1]="t6/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 7: a.heightmap="t7/hm.bmp";
                a.textures[0]="t7/tex.bmp";
                a.textures[1]="t7/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 8: a.heightmap="t8/hm.bmp";
                a.textures[0]="t8/tex.bmp";
                a.textures[1]="t8/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      case 9: a.heightmap="t9/hm.bmp";
                a.textures[0]="t9/tex.bmp";
                a.textures[1]="t9/path.bmp";
                SCALE=20;
                HEIGHTSCALE=0.14*(1.5*(1+gameMode));
                break;
      case 10: a.heightmap="t10/hm.bmp";
                a.textures[0]="t10/tex.bmp";
                a.textures[1]="t10/path.bmp";
                SCALE=30;
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
      default:
                a.heightmap="t3/hm.bmp";
                a.textures[0]="t3/tex.bmp";
                a.textures[1]="t3/path.bmp";
                HEIGHTSCALE=0.2*(1.5*(1+gameMode));
                break;
  }
  a.textures[2]="exitscreen.bmp";
pair<float,float> checkpts;
  
while(!feof(trackinfo))
   {
	   	   fscanf(trackinfo,"%f",&checkpts.first);
	   	   fscanf(trackinfo,"%f",&checkpts.second);
	   	   checkpoints.push(checkpts);
   }
   fclose(trackinfo);

   y="t"+tid+"/high"+sss.str()+".txt";
  
   FILE * highscores;
   highscores=fopen(y.c_str(),"rb");
   pair<char[50],int> temphigh;
  
    fscanf(highscores,"%d",&timetaken);
   for(int h=0;h<5;h++)
   {	
    
		fscanf(highscores,"%s",temphigh.first);
		fscanf(highscores,"%d",&temphigh.second);
    trackhigh[h]=temphigh;
    }

   fclose(highscores);
   
   FILE * player;
	player=fopen("player.txt","rb");
	fscanf(player,"%s",playername);
 
   
	fclose(player);
	FILE * highplayer;
	//char * tempdirname;
  
	y="t"+tid+"/"+string(playername)+sss.str()+".txt";
  
   
	highplayer=fopen(y.c_str(),"rb");
	if(highplayer==NULL){

    
		ofstream playerfile;
		playerfile.open(y.c_str());
    playerfile<<"1000\n0\n0\n0\n0\n0";
    playerfile.close();
    
   freopen(y.c_str(),"rb",highplayer);
	}


  
   fscanf(highplayer,"%d",&playerbesttime);
   
	for(int g=0;g<6;g++)
	{
		fscanf(highplayer,"%d",&scores[g]);
	}
  
  FILE * treefile;
  y="t"+tid+"/"+"tree"+sss.str()+".txt";
  cerr << y << endl;
  treefile=fopen(y.c_str(),"rb");
  pair<float,float> temptree;
  while(!feof(treefile))
  {
      pair<float,float> temptree;
      fscanf(treefile,"%f",&temptree.first);
      fscanf(treefile,"%f",&temptree.second);
      cout << "tree x "<< temptree.first<<" tree y "<< temptree.second << endl;
      treelist.push_back(temptree);
      
  }
  fclose(treefile);
  
  FILE * hurdle1file;
  y="t"+tid+"/"+"hurdle"+sss.str()+"0.txt";
 
  hurdle1file=fopen(y.c_str(),"rb");
  while(!feof(hurdle1file))
  {
      pair<float,float> temptree;
      fscanf(hurdle1file,"%f",&temptree.first);
      fscanf(hurdle1file,"%f",&temptree.second);
      
      hurdlelist1.push_back(temptree);
      
  }
  fclose(hurdle1file);
  FILE * hurdle2file;
  y="t"+tid+"/"+"hurdle"+sss.str()+"1.txt";
  hurdle2file=fopen(y.c_str(),"rb");
 /* while(!feof(hurdle2file))
  {
      pair<float,float> temptree;
      fscanf(hurdle2file,"%f",&temptree.first);
      fscanf(hurdle2file,"%f",&temptree.second);
      
      hurdlelist2.push_back(temptree);
      
  }*/
  fclose(hurdle2file);

  
  	a.Read();car.init();
   	Texture *u=&(a.ad[1]);cout << "qwerty\n";
   for(int j=0;j+1<a.terrainwidth-1;j++)
{	int i=0;

	while(i+1<a.terrainheight-1)
	{
	float temp=(*u).data[(j)*a.terrainwidth*3+i*3+1];

	if(temp==0)
	{
		if(rand()%2000==0)
		{
			a.markers[markercount].position=Vector3D(i*SCALE,a.getHeight(i,j)+5,j*SCALE);
			a.markers[markercount].taken=0;
			markercount++;
		}

	}


	i+=1;}
	}

  
  pair<float,float> tempo=checkpoints.front();

   car.position.x=tempo.first;
   
   car.position.z=tempo.second;
   car.position.y=20+a.getHeight(car.position.x/SCALE,car.position.z/SCALE);
   car.velocity.x=5.0;
   car.velocity.y=0.0;
   car.velocity.z=-5.0;
   car.ctheta=20;
   car.cphi=0;
   car.calpha=20;
   car.height=13.0;
   car.size=20;
   update();

}

void keySpecial(int key, int x, int y) {
  switch (key) {
    case GLUT_KEY_LEFT: my_key_left=1; break;
    case GLUT_KEY_F2: camType=!camType; break;
    case GLUT_KEY_RIGHT: my_key_right=1; break;
    case GLUT_KEY_UP: my_key_up=1; break;
    case GLUT_KEY_DOWN: my_key_down=1; break;
    case GLUT_KEY_F12: BikeType+=1; BikeType=BikeType%3; break;
    case GLUT_KEY_F3: bikerView=!bikerView;  break;
    case GLUT_KEY_F4: fullscreen=!fullscreen; reshape(1366, 768); break;
  }
}

void keySpecialUp(int key, int x, int y) {
  switch (key) {
    case GLUT_KEY_LEFT: my_key_left=0; break;
    case GLUT_KEY_RIGHT: my_key_right=0; break;
    case GLUT_KEY_UP: my_key_up=0; break;
    case GLUT_KEY_DOWN: my_key_down=0; break;
  }
}

void keyAct()
{
    	if(keyStates[int('u')]){
    	 car.position.y++;
    	}
    	if(keyStates[int('j')]){
    	 car.position.y--;
    	}
        if(keyStates[int('d')]){
    	 theta+=1;
    	 
    	 }
        if(keyStates[int('a')]){
    	 theta-=1;
    	 
         }
        if(keyStates[int('w')]){
    	 phi-=0.5;
    	 
    	 }
        if(keyStates[int('s')]){
    	 phi+=0.5;
    	 
    	 }
       if(keyStates[int('.')]){
		  rad_sphere+=2;
		  
	     }
	     if(keyStates[int(',')]){
		    rad_sphere-=2;
		  
       }
	   if(my_key_right){
		   car.ctheta+=0.5;
	   }
	   if(my_key_left){
		   car.ctheta-=0.5;
	   }
    if(keyStates[27])                          // Escape key
      exit (0);
	  glutPostRedisplay();
}

void timer(int value) {
   glutPostRedisplay();      // Post re-paint request to activate display()
   glutTimerFunc(refreshMills, timer, 0); // next timer call milliseconds later
}

void GetKey(unsigned char key_p, int x, int y)
{
	keyStates[key_p]=1;
}

void keyPressed (unsigned char key, int x, int y) {
	keyStates[key]=1;//keyStates[key] = true; // Set the state of the current key to pressed
	if(key==int(' '))paused=!paused;
}

void keyUp (unsigned char key, int x, int y) {
	keyStates[key]=0;//keyStates[key] = false; // Set the state of the current key to not pressed
}


int main(int argc, char** argv)
{
	track=fopen("track.txt","rb");

string d="DIRT BIKE RACING -";
fscanf(track,"%d",&trackid);
fscanf(track,"%d",&difficulty);
if(difficulty==2)
{
  isPractice=true;
}

fclose(track);

   memset(keyStates,0,sizeof(keyStates));
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (1366, 768);
   glutInitWindowPosition (50, 50);

   glutCreateWindow ("");
   glutFullScreen();
   win=false;
   init ();cout << "here\n";

   srand(time(NULL));
  
   glutKeyboardFunc(keyPressed); // Tell GLUT to use the method "keyPressed" for key presses
   glutKeyboardUpFunc(keyUp); // Tell GLUT to use the method "keyUp" for key up events
   glutSpecialFunc(keySpecial); // Tell GLUT to use the method "keySpecial" for special key presses
   glutSpecialUpFunc(keySpecialUp); // Tell GLUT to use the method "keySpecialUp" for special up key events

   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutTimerFunc(refreshMills,timer,0);
   glutPostRedisplay();
   glutMainLoop();
   return 0;
}

