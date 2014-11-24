#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
	Rectangle fang(100, 20, 50, 80);
	cout << "面积=" << fang.area() << endl;
	return 0;
}