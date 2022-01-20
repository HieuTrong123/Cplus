#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <fstream>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main() {
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh() {
	char filename[MAX];
	int n = 0;
	SinhVien a[MAX];
	XuLyMenu(filename, a, n);
	cout << endl;
	system("pause");
}
