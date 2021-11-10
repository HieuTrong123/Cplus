#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << left << setw(15) << "MSSV" << setw(20) << "ho va ten" << setw(10) << "khoa"
		<< setw(10) << "diem"<<endl;
	cout << left << setw(15) << "-----" << setw(20) << "--------------" << setw(10) << "-----"
		<< setw(10) << "----" << endl;

	cout << left << setw(15) << "1211520" << setw(20) << "le duy tung" << setw(10) << "33"
		<< setw(10) << "4.57" << endl;

	cout << left << setw(15) << "1210152" << setw(20) << "tran van tien" << setw(10) << "34"
		<< setw(10) << "VT" << endl;

	cout << left << setw(15) << "1211962" << setw(20) << "phan duc anh" << setw(10) << "33"
		<< setw(10) << "6.48" << endl;

	cout << left << setw(15) << "1211518" << setw(20) << "nguyen hong phuc" << setw(10) << "36"
		<< setw(10) << "VT" << endl;

	cout << left << setw(15) << "1211510" << setw(20) << "phan minhh duc" << setw(10) << "30"
		<< setw(10) << "8.05" << endl;

	cout << left << setw(15) << "1211519" << setw(20) << "nguyen khac vy" << setw(10) << "33"
		<< setw(10) << "VT" << endl;
	cout << left << setw(55) << "=================================================" <<  endl;

	system("Pause");
	return 0;
}