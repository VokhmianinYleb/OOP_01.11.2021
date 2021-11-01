//main.cpp
#include <iostream>
#include "CPoint.h"
using namespace std;

int main() {
	// посилання на об'єкти як члени-даних класу
	CLine cl1; // викликається конструктор, який ініціалізує змінні-посилання p1, p2
	// додаткові змінні
	CPoint point1, point2;
	int x, y;
	// перевірка, як конструктор заповнив коодинати точок відрізка
	cl1.GetPoints(&point1, &point2);
	point1.GetXY(&x, &y); // x = 0; y = 0
	point2.GetXY(&x, &y); // x = 1; y = 1
	// встановити нові значення
	point1.SetXY(3, 8); // записати точку (3; 8)
	point2.SetXY(5, 9); // записати точку (5; 9)
	cl1.SetPoints(&point1, &point2);
	// перевірка
	CPoint pp1, pp2;
	cl1.GetPoints(&pp1, &pp2);
	pp1.GetXY(&x, &y); // x = 3; y = 8
	pp2.GetXY(&x, &y); // x = 5; y = 9
	system("pause");
	return 0;
}
