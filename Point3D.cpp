#include "Point3D.h"

template<class T>
Point3D<T> ConstructPoint3D(T X, T Y, T Z) {
	Point3D<T> P;

	P.X = X;
	P.Y = Y;
	P.Z = Z;

	return P;
}

template<class T>
Point3D<T> LotYZ(Point3D<T>& In, double Theta) {
	double PI = 3.1415926535;
	double Rad = PI / 180.0;

	double NY = sin(Rad * Theta) * In.Y;
	double NZ = cos(Rad * Theta) * In.Z;

	return ConstructPoint3D<T>(In.X, NY, NZ);
}
template<class T>
Point3D<T> LotXY(Point3D<T>& In, double Theta) {
	double PI = 3.1415926535;
	double Rad = PI / 180.0;

	double NX = sin(Rad * Theta) * In.X;
	double NY = cos(Rad * Theta) * In.Z;

	return ConstructPoint3D<T>(NX, NY, In.Z);
}
template<class T>
Point3D<T> LotZX(Point3D<T>& In, double Theta) {
	double PI = 3.1415926535;
	double Rad = PI / 180.0;

	double NZ = sin(Rad * Theta) * In.Z;
	double NX = cos(Rad * Theta) * In.X;

	return ConstructPoint3D<T>(NX, In.Y, NZ);
}

template<class T>
Point3D<T> Line(Point3D<T>& In, Point3D<T>& to, double Delta) {

	T X = to.X - In.X;
	T Y = to.Y - In.Y;
	T Z = to.Z - In.Z;

	return ConstructPoint3D(In.X + X * Delta, In.Y + Y * Delta, In.Z + Z * Delta);

}
/** /

template <class T>
const T& Max(const T& A, const T& B) {
	return A > B ? A : B;
}
template <class T>
const T& Min(const T& A, const T& B) {
	return A < B ? A : B;
}
template<class T>
bool Line(Point3D<T>& In, Point3D<T>& to) {/
	T X = to.X - In.X;
	T Y = to.Y - In.Y;
	T Z = to.Z - In.Z;

	T A = Max(X, Max(Y, Z));
	T B = 1/A;//delta

	T DX = X / A;
	T DY = Y / A;
	T DZ = Z / A;

	for(size_t i=0;i*B>=1.0;i++){
		T XX = DX*i;
		T YY = DY*i;
		T ZZ = DZ*i;

		T XXX= In,X+XX;
		T YYY= In.Y+YY;
		T ZZZ= In.Z+ZZ;
	}
	return true;
}
/**/