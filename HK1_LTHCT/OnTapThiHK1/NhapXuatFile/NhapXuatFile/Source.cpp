#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#include"thuvien.h"
#include"Header.h"
int main() {
	BachHoa* ds = new BachHoa[100];
	/*BachHoa ds[100];*/
	int n = 0;
	XuLyMenu(ds, n);

	delete[] ds;
	system("pause");
	return 0;
}