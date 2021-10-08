#include <math.h>
class romb
{
	double X;
	double Y;
	double A;
	double B;

public:

	romb(double _x, double _y, double _a, double _b)
	{
		X = _x;
		Y = _y;
		A = _a;
		B = _b;
	}

	double getX()
	{
		return X;
	}

	double getY()
	{
		return Y;
	}

	double getA()
	{
		return A;
	}

	double getB()
	{
		return B;
	}

	double* getCoordinates()
	{
		double* res = new double[8];
		res[0] = X; res[1] = Y + B;
		res[2] = X + A; res[3] = Y;
		res[4] = X; res[5] = Y - B;
		res[6] = X - A; res[7] = Y;
		return res;
	}

	double getS()
	{
		return 2.0*A*B;
	}

	double getP()
	{
		return 4.0*sqrt(A*A + B*B);
	}

	double* getRotatedCoordinates()
	{
		double* res = new double[8];
		res[0] = X; res[1] = Y + A;
		res[2] = X + B; res[3] = Y;
		res[4] = X; res[5] = Y - A;
		res[6] = X - B; res[7] = Y;
		return res;
	}
};