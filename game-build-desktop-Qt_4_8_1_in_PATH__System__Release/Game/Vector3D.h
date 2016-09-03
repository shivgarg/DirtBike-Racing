/*
 * Vector3D.h
 *
 *  Created on: Aug 5, 2013
 *      Author: cs1120224
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_
#include<iostream>
using namespace std;
/*
 * Vector3D.h
 *
 *  Created on: Aug 5, 2013
 *      Author: cs1120224
 */
//! Vector Class
 /*!
    This class implements Vectors in 3D and all the function associated with vectors in 3D
  */ 

class Vector3D {
 public:

/*Variables:
 I didn't make x, y, and z private, as the programmer should already know the inner workings of a vector,
and would figure that there would be an x, y, and z variables. Plus, I hate the look of setX(int x) and getX() :D .
*/
  float x, y, z;                  /*!< x,y,z store the x,y,z components of the vector 

/*Constructors:
 Vector3D v: x, y, and z are all set to 0.
 Vector3D v2(1, 2, 3): x, y, and z are set to 1, 2, and 3, respectivly.
 Vector3D v3(Vector3D v4): v3.x, v3.y, and v3.z are all set to v4.x, v4.y, and v4.z, respectivly.
*/
  //! Constructor
 /*!
      Null constructor creates a zero vector
  */

  Vector3D();

  //! Constructor
  /*!
      This constructor returns a vector whose x ,y ,z components are specified
      /param float x This is x component of vector
      /param float y This is y component of vector
      /param float z This is z component of vector
  */

  Vector3D(float a, float b, float c);

  //! Constructor
  /*!
      This constructor creates a copy of the vector
      /param const Vector3d &v  It is a vector of VEctor#D type
  */

  Vector3D(const Vector3D &v);

/*Operator overloadings:
 Vector3D operator+(Vector v): x, y, and z are added to v.x, v.y, and v.z, respectivly.
 Vector3D operator-(Vector3D v): x, y, and z are subtracted from v.x, v.y, and v.z, respectivly.
 Vector3D operator*(double w): x, y, and z are all multiplied by w.
 Vector3D operator/(double w): x, y, and z are all divided by w.
 Vector3D operator=(Vector3D v): this vector is set to v.
*/

 //! Adding two vectors
 /*!
      This vector defines + for the Vector 3D objects and adds the vector specifed
      /param Vector3D v  this is a vector 3D object which is to be added to a given object
 */
  Vector3D operator+(Vector3D v);
 //! Subtracting two vectors
  /*!
      This function overloads the - oprator for Vector3D class.
      /param Vector3D v  this is a vector 3D object which is to be subtracted from a given object
  */
  Vector3D operator-(Vector3D v);
//! Multiplying two vectors
  /*!
      This function overloads the * oprator for Vector3D class.
      /param float w  this is a float which is to be multiplied to given Vector3D object
  */

  Vector3D operator*(float w);
  
//! Multiplying two vectors
  /*!
      This function overloads the *= oprator for Vector3D class.
      /param float w  this is a float which is to be multiplied to given Vector3D object
  */

  Vector3D operator*=(float w);
  
//! Assigning value to a vector
  /*!
      This function overloads the = operator for Vector3D class.
      /param Vector3D v  this is a Vector3D object which is to be assigned 
  */

  Vector3D operator=(Vector3D v);

//! Adding value to a vector
  /*!
      This function overloads the += operator for Vector3D class.
      /param Vector3D v  this is a Vector3D object which is to be added to the given vector3D Object 
  */


  Vector3D operator+=(Vector3D v);

  //! Subtracting value to a vector
  /*!
      This function overloads the -= operator for Vector3D class.
      /param Vector3D v  this is a Vector3D object which is to be added to the given vector3D Object 
  */
  Vector3D operator-=(Vector3D v);

/*Other functions:
 void negate(): negate the vector - x, y, and z are set to -x, -y, and -z, respectivly
 double length(): returns the length of the vector.
 void normalize(): normalize the vector, vector / length of vector
*/

 //!  Negating a vector3D
 /*!
      this function negates the values of the given vector3D  object
      /param void it negates the vector3D through which the function is called
    */
  void _negate();
  //! Dot product of two vectors
  /*!
      this function takes the dot product of two vectors and return the value as a float
      /param v,w  Vector3D Objects whose dot products is to be taken
  */
  float dot(Vector3D v,Vector3D w);
  //! Dot product of two vectors
  /*!
      this function takes the dot product of two vectors and return the value as a float
      /param v Vector3D Objects whose dot products is to be taken
  */
  
  float dot(Vector3D v);
  //!Modulus of a vector
  /*!
      this function gives the dot product vectors and return the value as a float
      /param void  Modulus of vector through which it is called is returned
  */
  
  float mod();

  //! Unitise a vector
  /*!
      this function changes the vector into unit vector along its direction
      /param void  Unit vector of vector through which it is called is returned
  */
  Vector3D _normalize();
  //! Unitise a vector
  /*!
      this function returns unit vector in the direction of given vector
      /param v   Unit vector of v is returned
  */
  

  Vector3D unit(Vector3D v);
  //! Unitise a vector
  /*!
      this function returns unit vector in the direction of given vector
      /param void   Unit vector is returned through which it is called
   */
  Vector3D unit();
//! Cross Product of Vectors
  /*!
      This function returns the vector which is cross product of two given vectors
      /param v,w  cross product of v and w is returned
  */

  Vector3D cross(Vector3D v,Vector3D w);
  //! Cross Product of Vectors
  /*!
      This function returns the vector which is cross product of two given vectors
      /param v  cross product of v and vector3D object through which it is called is returned
  */
  Vector3D _cross(Vector3D w);
  //! Projection of Vector
  /*!
      This function returns the projection of a vector in the direction given
      /param w Vector3D object in the direction of which projection is to be taken
  */
  Vector3D project(Vector3D w);
  //! Projection of Vector
  /*!
      This function returns the projection of a vector in the direction given
      /param v,w Vector3D object in the direction of which projection of v is to be taken
  */
  Vector3D project(Vector3D v,Vector3D w);

  //! Printing the vector
  /*!
      This function was used to print the x,y and z parameters of the vector
  */
  void toString();
};


#endif /* VECTOR3D_H_ */
