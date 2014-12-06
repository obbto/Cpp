#include "Employee.h"
#include <iostream>
using namespace std;
int main(){
	Employee a("XiaoMing","C509","tj","300000");
	a.display();
	a.change_name("DaMing");
	a.display();
//lab6_6
	Employee emp[5];
	for (int i = 0; i < 5; i++){
		emp[i].display();
	}
	return 0;
}