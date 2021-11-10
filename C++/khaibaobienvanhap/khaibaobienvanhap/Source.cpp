#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int x = 10;
	cout << "x= " << x;

	int y = 2, z = 6;
	cout << endl << x <<" + " << y << " + "<< z <<" = " << x + y + z<<endl;

	int dai, rong;
	cout << endl << "nhap chieu dai cua hinh chu nhat : ";
	cin >> dai;
	cout << endl << "nhap chieu rong cua hinh chu nhat : ";
	cin >> rong;
	cout << endl << "chieu dai HCN la : " << dai << "," << "chieu rong HCN la : "
		<< rong;
	int chuvi, dientich;
	chuvi = (dai + rong) * 2;
	dientich = dai * rong;
	cout <<endl<< "chu vi HCN la : " << chuvi;
	cout << endl << "  dien tich HCN la : " << dientich;



	_getch();
	return 0;
}