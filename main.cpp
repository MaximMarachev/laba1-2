#include <iostream>
#include "romb.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	romb r = romb(0, 0, 3, 4);
	double* c = r.getCoordinates();
	cout << "���������� �����: " << endl;
	for (int i = 0; i < 4; i++)
		cout << "[ " << c[2 * i] << "; " << c[2 * i + 1] << " ] " << endl;
	cout << "�������: " << r.getS() << endl;
	cout << "��������: " << r.getP() << endl;
	cout << "���������� ����� ����� ��������: " << endl;
	c = r.getRotatedCoordinates();
	for (int i = 0; i < 4; i++)
		cout << "[ " << c[2 * i] << "; " << c[2 * i + 1] << " ] " << endl;
	system("pause");
}