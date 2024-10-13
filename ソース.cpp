#include <stdio.h>
#include <float.h>

#include "SurfaceT.h"
#include "Surface24.h"
#include "Point2D.h"
#include "Point3D.h"


struct Space3D
{
	Surface24 S24;
	SurfaceT<double> ZBuffer;
	Point3D<double> Camera;
	Point3D<double> Light;
	//Point3D<double> World;
	Point3D<double> Look;
};

Space3D ConstructSpace3D<Space3D>(size_t Width, size_t Height) {
	Space3D S;
	S.S24= ConstructSurface24( Width, Height);
	S.ZBuffer = ConstructSurfaceT<double>(Width, Height);
	Fill<double>(S.ZBuffer, INFINITY);

	return S;
}


bool SetPixel(Space3D& In, Point3D<double> P, RGB C) {
	if (Index(In.ZBuffer, P.X, P.Y) == NULL) { return false; }
	if (Index(In.ZBuffer, P.X, P.Y) > P.Z) { return false; }
	(*Index(In.S24, P.X, P.Y))=C;

	return true;

}

int main() {

	return 0;
}