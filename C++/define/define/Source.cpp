#include<iostream>
#include<conio.h>
using namespace std;

#define MAX 100
#define KHOA "cong nghe thong tin"
#define PI 3.1215926
#define TAB '\t'

int main() {

	cout << endl << "gia tri hang so MAX la : " << MAX;
	cout << endl << "gia tri hang so khoa la : " << KHOA;
	cout << endl << "gia tri hang so pi : " << PI;
	cout << endl << TAB << "dong nay duoc thut le 1 dau tab";
	float r;
	cout << endl << "nhap ba knh cua hinh tron : ";
	cin >> r;
	float chuvi, dientich;
	chuvi = 2 * PI * r;
	dientich = PI * r * r;
	cout << endl << " ban kinh : R = " << r << ",chu vi :C = " << chuvi
		<< ",dien tich : S = " << dientich;



	_getch();
	return 0;
}