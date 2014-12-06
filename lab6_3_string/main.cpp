#include <iostream>
using namespace std;
int main(){
	char a[20], b[10];
	int m,n;
	cout << "请输入两个字符串，以‘0’结束"<<endl;
	for (int i = 0; i < 10;i++){
		cin >> a[i];
		if (a[i] == '0'){
			m = i;
			break;
		}
	}
	for (int i = 0; i < 10; i++){
		cin >> b[i];
		if (b[i] == '0'){
			n = i;
			break;
		}
	}
	for (int i = 0; i < n; i++){
		a[m + i] = b[i];
	}
	for (int i = 0; i < m + n; i++){
		cout << a[i];
	}
	return 0;
}