//main.cpp
#include <iostream>
#include "MyPixelClass.h"
using namespace std;

int main() {
	// масив покажчиків на клас
	MyPixelClass* mp[5];
	// виділення пам'яті для об'єктів класу,
	// на які будуть вказувати покажчики
	for (int i = 0; i < 5; i++)
		mp[i] = new MyPixelClass;
	// заповнення об'єктів класу довільними значеннями
	// демонстрація виклику методу SetXYColor()
	for (int i = 0; i < 5; i++)
		mp[i]->SetXYColor(i + 5, 2 * i + 8, i);
	// демонстрація інших методів класу
	int d;
	d = mp[1]->GetX(); // d = 6
	cout << "x = " << d << endl;
	d = mp[2]->GetColor(); // d = 2
	cout << "Color = " << d << endl;
	d = mp[3]->GetY(); // d = 2*3+8 = 14
	cout << "y = " << d << endl;
	system("pause");
	return 0;
}
