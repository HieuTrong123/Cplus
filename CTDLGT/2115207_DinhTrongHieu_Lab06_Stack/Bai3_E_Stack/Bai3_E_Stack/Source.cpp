#include<iostream>
#include<fstream>	
using namespace std;
#include"thuvien.h"
int main() {
	char TrungTo[100];
	cout << "\nnhap bieu thuc trung to: ";
	//2*3+(6-4)
	cin >> TrungTo;
	cout << "\nbieu thuc : ";
	Printf(TrungTo);
	cout << "\nco Hau To la: ";
	//Printf(TrungTo_HauTo(TrungTo));
	for (int i = 0; TrungTo_HauTo(TrungTo)[i] != NULL; i++) {
		cout << TrungTo_HauTo(TrungTo)[i];
	}
	cout << "\nco gia tri la: " << Tinh_BT_HauTo(TrungTo_HauTo(TrungTo));
	system("pause");
	return 0;
}