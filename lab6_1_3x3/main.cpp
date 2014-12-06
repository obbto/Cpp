#include <iostream>
using namespace std;
void zhuan(int x[][3])
{
	int t[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			t[i][j] = x[j][i];
			cout << t[i][j];
		}
		cout << endl;
	}
}

int main(){
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	zhuan(a);
	return 0;
}