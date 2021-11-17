#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void Xuly(int secretNum, int guess);
int main() {

	srand(time(NULL));
	int secretNum = rand() % (10-1+1) + 1;
	cout << endl << secretNum;
	int guess=secretNum-1;
	Xuly(secretNum,guess);

	_getch();
	return 0;
}
void Xuly(int secretNum ,int guess) {
	int guesscount = 0;
	int k = 3;
	bool KiemTra = true;
	while (secretNum != guess && KiemTra) {
		if (guesscount < k) {
			cout << "\nNhap So Doan : ";
			cin >> guess;
			if (guess < secretNum) {
				cout << "\nSo Doan Lon hon" << endl;
			}
			else if (guess > secretNum) {
				cout << "\nSo Doan Be hon" << endl;
			}
			guesscount++;
		}
		else {
			KiemTra = false;
		}

	}
	if (KiemTra) {
		cout << "you win! ";
	}
	else {
		cout << "you lose!";
	}
}