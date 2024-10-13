#include <stdio.h>

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

	return S;
}

int main() {

	return 0;
}