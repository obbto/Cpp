#include <iostream>
#include "Dog.h"
using namespace std;
int main(){
	Dog gou(2,10);
	cout << "¹·Áä=" << gou.readAge()<<endl;
	cout << "¹·ÖØ=" << gou.readWeight() << endl;
	return 0;
}