#include<iostream>
#include<fstream>
using namespace std;
#include"thuvien.h"
int main() {
	int n, b;
	cout << "\nnhap co so: ";
	cin >> n;
	cout << "nhap he co so: ";
	cin >> b;
	
	DoiCoSo(n, b);

	system("pause");
	return 0;
}