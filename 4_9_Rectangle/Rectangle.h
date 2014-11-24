#pragma once
class Rectangle
{
private:
	int leftx, lefty, rightx, righty;
public:
	Rectangle(int ileftx,int ilefty,int irightx,int irighty); 
	~Rectangle();
	int area();
};

