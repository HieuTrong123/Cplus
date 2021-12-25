#define MAX 100
struct TaiLieu {
	char maTaiLieu[11];
	char tuaDe[50];
	char loaiTaiLieu[15];
	unsigned namXuatBan;
	char TacGia[35];
	char nhaXuatBan[25];
	unsigned gia;

};

void ChenTaiLieu(const char* maTaiLieu, const char* tuaDe, const char* loaiTaiLieu, unsigned namXuatBan, const char* tacGia,
	const char* nhaXuatBan, unsigned gia, TaiLieu* a, int& n);
void Tao_DS_Tai_lieu(TaiLieu* a, int& n);
void Xuat_Tieu_De();
void XuatKeNgangDon();
void XuatKeNgangDoi();
void Xuat_DS_TL(TaiLieu* tl, int n);
void Xuat_1_TL(TaiLieu a);
int TongGia(TaiLieu* tl, int n);
void Tim_NhaXB_NamXB(TaiLieu* a, int n, char nhaXB[], unsigned namXB);
void Tim_BaoKH_tacGia(TaiLieu* a, int n, char tacGia[]);
void ThongKeTheoLoai(TaiLieu* a, int n, const char loai[]);
void ThongKeTheoNamXB(TaiLieu* a, int n);
void Xuat_MaTL(TaiLieu* a, int n, char maTL[]);
void ThongKeTheoTuaDe(TaiLieu* a, int n);

void ChenTaiLieu(const char* maTaiLieu, const char* tuaDe, const char* loaiTaiLieu, unsigned namXuatBan, const char* tacGia,
	const char* nhaXuatBan, unsigned gia, TaiLieu* a, int& n) {
	strcpy_s((a + n)->maTaiLieu, 11, maTaiLieu);
	strcpy_s((a + n)->tuaDe, 50, tuaDe);
	strcpy_s((a + n)->loaiTaiLieu, 15, loaiTaiLieu);
	(a + n)->namXuatBan = namXuatBan;
	strcpy_s((a + n)->TacGia, 35, tacGia);
	strcpy_s((a + n)->nhaXuatBan, 25, nhaXuatBan);
	(a + n)->gia = gia;
	n++;

}
void Tao_DS_Tai_lieu(TaiLieu* a, int& n) {
	n = 0;
	ChenTaiLieu("1123456789", "Ghost in love", "bao khoa hoc", 2020, "MARC,LEVY", "KIM DONG", 100000, a, n);
	ChenTaiLieu("1223456789", "Can cuoc", "tai lieu", 2021, "MARC,LEVY", "NXB tre", 250000, a, n);
	ChenTaiLieu("1323456789", "Cham lai mot chut", "tap chi", 2021, "John,Green", "KIM LAN", 190000, a, n);
	ChenTaiLieu("1423456789", "Lan cuoi minh noi loi chia tay", "Sach", 2003, "Hyn Band", "NXB tre", 30000, a, n);
	ChenTaiLieu("1523456789", "5 centimet tren giay", "Sach", 2020, "John,Green", "KIM DONG", 15000, a, n);
	ChenTaiLieu("1623456789", "giet con chim nhai", "luan van", 2020, "Hyn Band", "khong co NXB", 200000, a, n);
	ChenTaiLieu("1723456789", "ong gia va bien ca", "luan van", 2021, "Jiddu,Krishnamurti", "khong co NXB", 200000, a, n);
	ChenTaiLieu("1823456789", "gatsby vy dai", "Sach", 2003, "John,Green", "KIM LAN", 20000, a, n);
	ChenTaiLieu("1923456789", "suoi nguon", "tap chi", 2003, "Hyn Band", "KIM DONG", 2000, a, n);
	ChenTaiLieu("2023456789", "khi loi thuoc ve nhung vi sao", "bao khoa hoc", 2019, "John,Green", "NXB tre", 50000, a, n);
}
void Xuat_Tieu_De() {
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(12)
		<< "ma tai lieu"
		<< ':'
		<< setw(30)
		<< "tua de"
		<< ':'
		<< setw(14)
		<< "loai tai lieu"
		<< ':'
		<< setw(13)
		<< "nam xuat ban"
		<< ':'
		<< setw(19)
		<< "tac gia"
		<< ':'
		<< setw(13)
		<< "nha xuat ban"
		<< ':'
		<< setw(6)
		<< "gia"
		<< ':';
	XuatKeNgangDoi();
}
void XuatKeNgangDon()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 113; i++)
		cout << '-';
	cout << ':';
}
void XuatKeNgangDoi()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 113; i++)
		cout << '=';
	cout << ':';
}
void Xuat_1_TL(TaiLieu a) {
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(12)
		<< a.maTaiLieu
		<< ':'
		<< setw(30)
		<< a.tuaDe
		<< ':'
		<< setw(14)
		<< a.loaiTaiLieu
		<< ':'
		<< setw(13)
		<< a.namXuatBan
		<< ':'
		<< setw(19)
		<< a.TacGia
		<< ':'
		<< setw(13)
		<< a.nhaXuatBan
		<< ':'
		<< setw(6)
		<< a.gia
		<< ':';
}
void Xuat_DS_TL(TaiLieu* tl, int n) {
	Xuat_Tieu_De();
	for (int i = 0; i < n; i++) {
		cout << endl;
		Xuat_1_TL(*(tl + i));
		if ((i + 1) % 5 == 0) {
			XuatKeNgangDon();
		}
	}
	XuatKeNgangDoi();

}
int TongGia(TaiLieu* tl, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (tl + i)->gia;
	}
	return sum;
}
void Tim_NhaXB_NamXB(TaiLieu* a, int n, char nhaXB[], unsigned namXB) {
	int dem = 0;
	Xuat_Tieu_De();
	for (int i = 0; i < n; i++) {

		if (_strcmpi((a + i)->nhaXuatBan, nhaXB) == 0 && (a + i)->namXuatBan == namXB) {
			cout << endl;
			Xuat_1_TL(*(a + i));
			dem++;
			if (dem % 5 == 0) {
				XuatKeNgangDon();
			}
		}
	}
	XuatKeNgangDoi();
}
void Tim_BaoKH_tacGia(TaiLieu* a, int n, char tacGia[]) {
	int dem = 0;
	Xuat_Tieu_De();
	for (int i = 0; i < n; i++) {

		if (_strcmpi((a + i)->loaiTaiLieu, "bao khoa hoc") == 0 && _strcmpi((a + i)->TacGia, tacGia) == 0) {
			cout << endl;
			Xuat_1_TL(*(a + i));
			dem++;
			if (dem % 5 == 0) {
				XuatKeNgangDon();
			}
		}
	}
	XuatKeNgangDoi();
}
void ThongKeTheoLoai(TaiLieu* a, int n, const char loai[]) {
	cout << "\nloai " << loai << " la : ";
	int dem = 0;
	Xuat_Tieu_De();
	for (int i = 0; i < n; i++) {
		if (_strcmpi((a + i)->loaiTaiLieu, loai) == 0) {
			cout << endl;
			Xuat_1_TL(*(a + i));
			dem++;
			if (dem % 5 == 0) {
				XuatKeNgangDon();
			}
		}
	}
	XuatKeNgangDoi();
}
void ThongKeTheoNamXB(TaiLieu* a,int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a + i)->namXuatBan > (a + j)->namXuatBan) {
				TaiLieu p = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = p;
			}
		}
	}
}
void Xuat_MaTL(TaiLieu* a,int n,char maTL[]) {
	int dem = 0;
	Xuat_Tieu_De();
	for (int i = 0; i < n; i++) {

		if (_strcmpi((a + i)->maTaiLieu,maTL) == 0) {
			cout << endl;
			Xuat_1_TL(*(a + i));
			dem++;
			if (dem % 5 == 0) {
				XuatKeNgangDon();
			}
		}
	}
	XuatKeNgangDoi();
}
void ThongKeTheoTuaDe(TaiLieu* a, int n) {
	for (int i = 0; i < n - 1 ; i++) {
		for (int j = i+1; j < n; j++) {
			if (strcmp((a + i)->tuaDe , (a + j)->tuaDe) > 0 ) {
				TaiLieu p = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = p;
			}
		}
	}
}