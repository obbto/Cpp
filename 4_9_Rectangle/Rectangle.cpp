#include "Rectangle.h"
#include <cmath>	//�������þ���ֵ����abs()


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
	return abs((rightx - leftx)*(righty - lefty));	//abs() ȡ����ֵ
}
