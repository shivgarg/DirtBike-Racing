/*
 * physics.h
 *
 *  Created on: Aug 8, 2013
 *      Author: cs1120224
 */

#ifndef PHYSICS_H_
#define PHYSICS_H_

/*! Physics Class implementing all functions to update velocity, distance etc. */
class Manager{
public:
	//! Funtion for updating the position of the bike
	void next();
	//! Function for updating the velocity
	/*! This function updates the velocity of the bike based upon whether the bike is in air or not, and the terrain around it on which it stands.
	*/
	void UpdateVel();
	//! Function for handling collisions.
	/*! This function handles the collisions between the bike and other obstacles placed on the ground.
	*/
	void HandleCollision();
};



#endif /* PHYSICS_H_ */
