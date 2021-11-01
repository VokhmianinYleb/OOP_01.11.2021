#include "MyPixelClass.h"
// Реалізація методів класу MyPixelClass
MyPixelClass::MyPixelClass(void)
{
	x = y = color = 0;
}
int MyPixelClass::GetX(void)
{
	return x;
}

int MyPixelClass::GetY(void)
{
	return y;
}
int MyPixelClass::GetColor(void)
{
	return color;
}
void MyPixelClass::SetXYColor(int nx, int ny, int nc)
{
	x = nx;
	y = ny;
	color = nc;
}
