#include <iostream>
#include "Dog.h"
using namespace std;
int main(){
	Dog gou(2,10);
	cout << "??=" << gou.readAge()<<endl;
	cout << "??=" << gou.readWeight() << endl;
	return 0;
}