#include <iostream>
#include "Dog.h"
using namespace std;
int main(){
	Dog gou(2,10);
	cout << "狗龄=" << gou.readAge()<<endl;
	cout << "狗重=" << gou.readWeight() << endl;
	return 0;
}