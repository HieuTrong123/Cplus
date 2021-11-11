#include<iostream>
#include<fstream>
using namespace std;
bool Kiem_Tra_So_NT(int n) {
	if ( n < 2 ) {
		return false;
	}
	else if (n == 2) {
		return true;
	}
	else {
		if (n % 2 == 0) {
			return false;
		}
		else {
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					return false;
				}
			}
		}
	}
	return true;
}
int main() {
	ifstream filein;
	filein.open("so.txt", ios_base::in);
	int a[100];
	int n;
	filein >> n;
	while (filein.eof() == false) {
		for (int i = 0; i < n; i++) {
			filein >> a[i];
		}
	}
	/*for (int j = 0; j < n; j++) {
		cout << "\na["<<j<<"] : "<<a[j];
	}*/
	ofstream fileout;
	fileout.open("soNT.txt", ios_base::out);
	for (int j = 0; j < n; j++) {
		if (Kiem_Tra_So_NT(a[j])==true) {
			fileout << "\na[" << j << "] : " << a[j];
		}
	}


	fileout.close();
	filein.close();
	system("pause");
	return 0;
}