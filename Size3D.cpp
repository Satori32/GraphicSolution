#include "Size3D.h"

template<class T>
Size3D<T> ConstructSize3D(T X, T Y, T Z) {
	Size3D<T> S;
	S.X = X;
	S.Y = Y;
	S.Z = Z;

	return S;
}
template<class T>
bool Resize(Size3D<T>& S, T X, T Y, T Z) {
	S.X = X;
	S.Y = Y;
	S.Z = Z;

	return true;
}

template<class T>
bool ResizeX(Size3D<T>& In, T V) {
	In.X = V;
	return true;
}
template<class T>
bool ResizeY(Size3D<T>& In, T V) {
	In.Y = V;
	return true;
}
template<class T>
bool ResizeZ(Size3D<T>& In, T V) {
	In.Z = V;
	return true;
}

template<class T>
T Width(Size3D<T>& In) {
	return In.X;
}
template<class T>
T Height(Size3D<T>& In) {
	return In.Y;

}
template<class T>
//T Depth(Size3D<T>& In){
T Z(Size3D<T>& In) {
	return In.Z;
}
