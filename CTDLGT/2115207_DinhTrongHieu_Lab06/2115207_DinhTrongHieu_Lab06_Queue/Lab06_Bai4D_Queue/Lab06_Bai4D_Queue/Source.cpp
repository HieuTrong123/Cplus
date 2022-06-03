#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#include"thuvien.h"
int main() {
	QUEUE q;
	CreatQueue(q);
	TapTin_Queue(q);
	cout << "\nnhap so ngay can truc: ";
	int m;
	cin >> m;
	XuatLichTruc(q, m);
	system("pause");
	return 0;
}