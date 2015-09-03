/*
 * Object.h
 *
 *  Created on: Aug 6, 2013
 *      Author: cs1120224
 */
#ifndef OBJECT_H_
#define OBJECT_H_

#include "Vector3D.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include "terrain.h"
#include <cmath>


class Object
{
	public:

		Vector3D position;							/*< Position vector of the bike*/
		Vector3D velocity;							/*< Velocity vector of the bike*/
		float size;									/*< Size of the bike*/
		float vmag;									/*< Velocity component in the horizontal plane*/
		float height;								/*< Height of the bike*/
		float ctheta;								/*< Angle of the bike with the x axis*/
		float cphi;									/*< Angle of the bike with the horizontal plane*/
		float calpha;								/*< Tilt Angle of the bike with the horizontal plane*/
//! Draws bike(s), obstacles  (trees and crates)
		void Draw();
//! Draws solid cube
		void addObj();
		void addMarker();
//! Makes the Display list of all the objects
		void init(void);
};


#endif /* OBJECT_H_ */
