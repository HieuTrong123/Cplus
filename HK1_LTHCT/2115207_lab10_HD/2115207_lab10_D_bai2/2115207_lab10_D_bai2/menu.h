void Menu();
void XuLyMenu();
void Menu() {
	cout << "\n\n\t\t========MENU========\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1.xuat n so fibonacci dau tien";
	cout << "\n2.xuat to hop chap k trong n";
	cout << "\n3.tim gia tri max min trong doan a[l..r] cua mang a[l..n]";
	cout << "\n\n\t\t========MENU========\n";
}
void XuLyMenu() {
	int luaChon, n, k, a[MAX], l, r, Min, Max;
	while (true) {
		system("cls");
		Menu();
		cout << "\nNhap lua chon : ";
		cin >> luaChon;
		if (luaChon == 0) {
			break;
		}
		else if (luaChon == 1) {
			cout << "\m1.xuat n so fibonacci dau tien";
			cout << "\nNhap so luong so fibo : ";
			cin >> n;
			Xuat_K_Fib(n);
			system("pause");
		}
		else if (luaChon == 2) {
			cout << "\m2.xuat to hop chap k trong n";
			cout << "\nnhap n: ";
			cin >> n;
			cout << "\nNhap chap k : ";
			cin >> k;
			cout<<Tinh_Cnk(n, k);
			system("pause");
		}
		else if (luaChon == 3) {
			cout << "\m3.tim gia tri max min trong doan a[l..r] cua mang a[l..n]";
			cout << "\nNhap so phan tu cua mang : ";
			cin >> n;
			srand(time(NULL));
			for (int i = 0; i < n; i++) {
				a[i] = rand() % (10 - 0 + 1) + 0;
			}
			cout << "\nxem mang : ";
			for (int i = 0; i < n; i++) {
				cout << a[i]<<"    ";
			}

			cout << "\nNhap l : ";
			cin >> l;
			cout << "\nNhap r : ";
			cin >> r;
			MinMax(a, l, r, Min, Max);
			cout << "\nMin la : "<<Min;
			cout << "\nMax la : " << Max;
			system("pause");
		}
		else {
			cout << "\nlua chon cua ban khong ton tai!!";
			system("pause");
		}
	}
}
