#include<iostream>
#include<fstream>
using namespace std;
#include"thuvien.h"
int main() {
	int n = 3,
		a[MAX][MAX] = { {9,8,7},{6,5,4},{3,2,1} };
	Mat_File("text.txt", a, n);
	cout << "\nxem thong tin vua nhap vao file : \n";
	File_Display2("text.txt");


	system("pause");
	return 0;
}