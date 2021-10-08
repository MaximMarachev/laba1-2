#include <iostream>
#include "romb.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	romb r = romb(0, 0, 3, 4);
	double* c = r.getCoordinates();
	cout << "Координаты ромба: " << endl;
	for (int i = 0; i < 4; i++)
		cout << "[ " << c[2 * i] << "; " << c[2 * i + 1] << " ] " << endl;
	cout << "Площадь: " << r.getS() << endl;
	cout << "Периметр: " << r.getP() << endl;
	cout << "Координаты ромба после поворота: " << endl;
	c = r.getRotatedCoordinates();
	for (int i = 0; i < 4; i++)
		cout << "[ " << c[2 * i] << "; " << c[2 * i + 1] << " ] " << endl;
	system("pause");
}