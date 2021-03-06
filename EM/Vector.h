#pragma once
#include "Defines.h"
#include "Matrix.h" 
class Matrix;

class Vector {
public:
	int dim_;
	valarray<NumType> data_;
	Vector();
	Vector(Matrix);
	Vector(int);
	Vector(initializer_list<NumType>);
	Vector(valarray<NumType>);
	Vector operator=(initializer_list<NumType>);
	Vector operator=(const Vector&);
	Vector operator+(const Vector&);
	Vector operator-(const Vector&);
	NumType Dot(const Vector&);
	Vector Scalar(NumType);
	NumType Norm() const;
	Vector Normalization();
	Vector Cross(const Vector&);
	NumType Component(const Vector&);
	Vector Projection(const Vector& v);//project onto v
	NumType TriangleArea(const Vector&);
	NumType Dist(const Vector&);
	bool Parallel(Vector&);
	bool Orthogonal(const Vector&);
	NumType Getangle(const Vector&);
	Vector PlaneNormal(const Vector&);
	bool LinearIndependent(const valarray<Vector>&);
	static valarray<Vector> Gram_Schmidt_Orthogonal(valarray<Vector>&);
	string ToString();
	string getSizeInfo();
};
