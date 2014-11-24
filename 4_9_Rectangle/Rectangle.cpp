#include "Rectangle.h"
#include <cmath>	//用来调用绝对值函数abs()


Rectangle::Rectangle(int ileftx, int ilefty, int irightx, int irighty)
{
	leftx = ileftx;
	lefty = ilefty;
	rightx = irightx;
	righty = irighty;
}


Rectangle::~Rectangle()
{
}

int Rectangle::area()
{
	return abs((rightx - leftx)*(righty - lefty));	//abs() 取绝对值
}
