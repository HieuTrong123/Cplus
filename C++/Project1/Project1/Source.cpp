#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void DoanSo(int n);

void main() {
	DoanSo(5);
	system("pause");
}

void DoanSo(int n) {
	int soDoan;
	int randNum = rand() % 100 + 1;
	srand((unsigned int)time(NULL));
	//cout << randNum;
	int dem = 6;
	for (int i = 1; i <=n; i++) {
		cout << "Nhap so doan lan thu " << i << "\n";
		cin >> soDoan;
		dem--;
		if(dem==0) {
			cout << "Ban thua";
			break;
		}
		else {
			if (soDoan < 1 || soDoan >100) {
				cout << "So nhap vao khong hop le" << "\n";
			}
			else if (soDoan == randNum) {
				cout << "Chien thang" << "\n";
				break;
			}
			else if (soDoan > randNum) {
				cout << "Qua cao" << "\n";
			}
			else if (soDoan < randNum) {
				cout << "Quan thap \n";
			}
		}

	}
}