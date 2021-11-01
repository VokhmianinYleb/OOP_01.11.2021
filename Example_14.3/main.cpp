//main.cpp
#include <iostream>
#include "CYear.h"
using namespace std;

int main() {
	CYear c1; // c1 - об'єкт
	CYear& c2 = c1; // c1 і c2 вказують на одну й туж ділянку пам'яті
	int d;
	// доступ до об'єкту c1
	c1.Set(2010);
	d = c1.Get(); // d = 2010
	cout << "d1 = " << d << endl;
	// доступ через посилання c2
	d = c2.Get(); // d = 2010
	cout << "d2 = " << d << endl;
	c2.Set(3333);
	d = c1.Get(); // d = 3333; c1 і c2 вказують на ту саму ділянку пам'яті
	cout << "d3 = " << d << endl;
	system("pause");
	return 0;
}
