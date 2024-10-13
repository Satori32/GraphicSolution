#pragma once

#include <stdio.h>
#include <math.h>

template<class T>
struct Point3D
{
	T X = 0;
	T Y = 0;
	T Z = 0;
};

template <class T> Point3D<T> ConstructPoint3D(T X, T Y, T Z);
template <class T> Point3D<T> LotYZ(Point3D<T>& In, double Theta);
template <class T> Point3D<T> LotXY(Point3D<T>& In, double Theta);
template <class T> Point3D<T> LotZX(Point3D<T>& In, double Theta);
template <class T> Point3D<T> Line(Point3D<T>& In, Point3D<T>& to, double Delta);