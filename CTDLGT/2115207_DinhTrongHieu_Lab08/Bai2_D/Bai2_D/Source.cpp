#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#include"Btree.h"
#include"thuvien.h"
#include"menu.h"
int main() {
	int chon;
	BTree bt;
	while (true) {
		chon = ChonMenu(7);
		XuLyMenu(chon, bt);
	}
	system("pause");
	return 0;
}