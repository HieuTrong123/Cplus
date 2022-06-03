#include<iostream>
#include<fstream>
using namespace std;
#include"thuvien.h"
int main() {
	QUEUE q;
	CreatQueue(q);
	TapTin_Queue(q);
	cout << "\nQUEUE ban dau : ";
	XuatQueue(q);
	Radix(q);
	cout << "\nQUEUE sau khi sap xep : ";
	XuatQueue(q);
	system("pause");
	return 0;
}