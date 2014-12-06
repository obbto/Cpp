#pragma once
#pragma execution_character_set("utf-8")
#include <iostream>
using namespace std;
void zhuan(int* x)
{
	int t[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			t[i][j] = *(x+(3*j+i));
			cout << t[i][j];
		}
		cout << endl;
	}
}

int main(){
	int* a=new int [9];
	for (int i = 0; i < 9; i++){
		*(a+i) = i+1;
		cout << *(a+i);
	}
	cout << endl;
	zhuan(a);
	delete[] a; 
	return 0;
}