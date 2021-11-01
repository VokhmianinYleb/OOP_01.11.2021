//main.cpp
#include <iostream>
#include "MyClass.h"
using namespace std;

int main() {
	// Доступ до методів та полів класу через покажчик
	MyClass* p; // покажчик на клас
	// виділення пам'яті для покажчика
	p = new MyClass;
	// доступ до методів класу через покажчик
	p->SetXY(5, 6); // виклик методу SetXY() класу
	int x = p->GetX(); // x = 5
	cout << x << " ";
	int y;
	y = p->GetY(); // y = 6
	cout << y << endl;
	system("pause");
	return 0;
}
