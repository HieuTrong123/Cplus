#include<iostream>
#include<fstream>	
using namespace std;
#include"thuvien.h"
int main() {
	char sin[MAX],sout[MAX];
	cout << "\nNhap sin: ";
	cin >> sin;
	cout << "\nsout la: ";
	TrungTo_HauTo(sin);
	/*for (int i = 0; TrungTo_HauTo(sin)[i] != NULL; i++) {
		cout << TrungTo_HauTo(sin)[i];
	}*/
	system("pause");
	return 0;
}