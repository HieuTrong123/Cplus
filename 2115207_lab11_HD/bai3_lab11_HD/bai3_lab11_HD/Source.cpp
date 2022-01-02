#include<iostream>
#include<fstream>
using namespace std;
int File_Array1(char* filename, int a[], int& n)
{
	ifstream in(filename); //Mo de doc
	if (!in)
		return 0; //Khong thanh cong
	n = 0;
	while (!in.eof())
	{
		in >> a[n];
		n++;
	}
	in.close();
	return 1; //Thanh cong
}
int main() {
	char filename[100];
	int n = 0,
		a[100];
	cout << "\nnhap file de doc : ";
	cin >> filename;
	if (File_Array1(filename, a, n)) {
		cout << "\nthanh cong!!";
		cout << "\nxem cac phan tu vua nhap tu file : ";
		for (int i = 0; i < n; i++) {
			cout << a[i] << '\t';
		}
	}
	else {
		cout << "\nthat bai!!!";
	}
	
	system("pause");
	return 0;
}