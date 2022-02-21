#include <iostream>
#include<iomanip>
using namespace std;
#include "Thuvien.h"
#include "Menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh() {
	int menu, //luu trử giá trị chọn stt của người dùng
		soMenu = 5; //số chức năng trong chương trình
	int n = 0; //khởi tạo kích thước dữ liệu
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
		system("pause"); //tạm dừng chương trình sau khi thực hiện một chức năng
	} while (menu > 0);//menu = 0 thi dung chuong trinh
}