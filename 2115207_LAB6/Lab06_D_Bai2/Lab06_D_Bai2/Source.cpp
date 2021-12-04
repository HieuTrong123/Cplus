#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include "thuvien.h"
#include "menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	_getch();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 8, //lưu số các chức năng
		menu, // lưu số thứ tự chức năng người dùng chọn
		m = 0,// kích thước hang và giá trị khởi tạo
		n = 0; //kích thước cot và giá trị khởi tạo
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
}