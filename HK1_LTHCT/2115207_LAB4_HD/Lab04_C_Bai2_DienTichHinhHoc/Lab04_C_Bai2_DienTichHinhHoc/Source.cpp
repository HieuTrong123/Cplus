#include<iostream>
using namespace std;
#include"ThuVien.h"
#include"Menu.h"
void ChayChuongTrinh();
int main() {
	ChayChuongTrinh();
	system("pause");
	return 1;
}
void ChayChuongTrinh()
{
	
	int menu, 
		soMenu = 4; 
		
		
	do
	{
			menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}