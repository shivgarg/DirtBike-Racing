/*
 * Vector3D.h
 *
 *  Created on: Aug 5, 2013
 *      Author: cs1120224
 */
#include "Vector3D.h"
#include<cmath>
#include<math.h>


Vector3D:: Vector3D() {
   x=y=z = 0;
  }

Vector3D:: Vector3D(float a, float b, float c) {
    x = a;
    y = b;
    z = c;
  }

Vector3D::  Vector3D(const Vector3D &v) {
   x = v.x;
   y = v.y;
   z = v.z;
}



Vector3D Vector3D::operator+(Vector3D v) {
 return Vector3D((x + v. x), (y + v.y), (z + v.z));
}

Vector3D Vector3D::operator-(Vector3D v) {
 return Vector3D((x - v.x), (y - v.y), (z - v.z));
}

Vector3D Vector3D::operator*(float w) {
 return Vector3D((x * w), (y * w), (z * w));
}

Vector3D Vector3D::operator*=(float w) {
	this->x*=w;
	this->y*=w;
	this->z*=w;
 return *this;
}

Vector3D Vector3D::operator=(Vector3D v) {
 x = v.x;
 y = v.y;
 z = v.z;
 return *this;
}

Vector3D Vector3D::operator+=(Vector3D v){
	 x += v.x;
	 y += v.y;
	 z += v.z;
	 return *this;
	}

Vector3D Vector3D::operator-=(Vector3D v){
	 x -= v.x;
	 y -= v.y;
	 z -= v.z;
	 return *this;
	}

void Vector3D:: _negate() {
 x = -x;
 y = -y;
 z = -z;
}

float Vector3D::mod() {
 return sqrt((x * x) + (y * y) + (z * z));
}

Vector3D Vector3D:: _normalize() {
 float te=mod();
 x /= te;
 y /= te;
 z /= te;
 return *this;
}

Vector3D Vector3D:: unit(Vector3D w) {
 float te=w.mod();
 return Vector3D(w.x/te,w.y/te,w.z/te);
}

Vector3D Vector3D:: unit() {
 float te=mod();
 return Vector3D(x/te,y/te,z/te);
}

float Vector3D:: dot(Vector3D v,Vector3D w) {
	return w.x*v.x + w.y*v.y + w.z*v.z;
}

float Vector3D:: dot(Vector3D v) {
	return x*v.x + y*v.y + z*v.z;
}

Vector3D Vector3D:: cross(Vector3D v,Vector3D w){
	return Vector3D( v.y*w.z - w.y*v.z ,w.x*v.z - v.x*w.z ,v.x*w.y - w.x*v.y );
}

Vector3D Vector3D:: _cross(Vector3D w){
	return Vector3D( y*w.z - w.y*z ,w.x*z - x*w.z ,x*w.y - w.x*y );
}

Vector3D Vector3D:: project(Vector3D w){
	w._normalize();
	float pro=this->dot(w);
	return w*pro;
}

Vector3D Vector3D:: project(Vector3D v,Vector3D w){
	w._normalize();
	float pro=v.dot(w);
	return w*pro;
}

void Vector3D:: toString(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}



