#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
	Rectangle fang(100, 20, 50, 80);
	cout << "���=" << fang.area() << endl;
	return 0;
}