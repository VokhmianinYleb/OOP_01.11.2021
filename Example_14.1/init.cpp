// реалізація методів класу в модулі "MyClass.cpp"
#include "MyClass.h"
MyClass::MyClass(void)
{
	x = 0;
	y = 0;
}
void MyClass::SetXY(int nx, int ny)
{
	x = nx;
	y = ny;
}
int MyClass::GetX(void)
{
	return x;
}
int MyClass::GetY(void)
{
	return y;
}
