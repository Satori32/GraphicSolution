#pragma once

#include <stdio.h>

template<class T>
struct Size3D {
	T X = 0;
	T Y = 0;
	T Z = 0;
};

template<class T> Size3D<T> ConstructSize3D(T X, T Y, T Z);
template<class T> bool Resize(Size3D<T>& S, T X, T Y, T Z);
template<class T> bool ResizeX(Size3D<T>& In, T V);
template<class T> bool ResizeY(Size3D<T>& In, T V);
template<class T> bool ResizeZ(Size3D<T>& In, T V);
template<class T> T Width(Size3D<T>& In);
template<class T> T Height(Size3D<T>& In);
template<class T> T Z(Size3D<T>& In);