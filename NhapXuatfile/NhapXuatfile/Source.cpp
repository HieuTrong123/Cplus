#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
struct monhoc {
	string tenmonhoc;
	float diem;
};
typedef struct monhoc MONHOC;
struct sinhvien {
	string hoten;
	string maso;
	vector<MONHOC> ds_monhoc;
};
typedef struct sinhvien SINHVIEN;
void Doc_Thong_Tin_1_SV(ifstream &filein ,SINHVIEN &sv) {
	getline(filein, sv.hoten, ',');
	getline(filein, sv.maso);
}
void Doc_DS_Mon_hoc(ifstream &filein ,MONHOC &mon ) {
	getline(filein, mon.tenmonhoc, '-');
	filein >> mon.diem;
}

void Doc_File(ifstream &filein ,vector<SINHVIEN> &ds) {
	SINHVIEN sv;
	while (filein.eof() == false) {
		Doc_Thong_Tin_1_SV(filein, sv);
		int n = 0;
		filein >> n;

		for (int i = 0; i < n; i++) {
			MONHOC mon;
			Doc_DS_Mon_hoc(filein, mon);

			sv.ds_monhoc.push_back(mon);
		}
		ds.push_back(sv);
	}
}
void Xuat_Thong_Tin_Sinh_Vien(SINHVIEN sv) {
	cout << "\nHo ten sinh vien : " << sv.hoten;
	cout << "\nma so sinh vien : " << sv.maso;

}
void Xuat_Thong_Tin_Mon_Hoc(MONHOC mon) {
	cout << "\nten mon hoc : " << mon.tenmonhoc;
	cout << "\ndiem mon hoc : " << mon.diem;
}
void Test1(vector<SINHVIEN> ds) {
	for (int i = 0; i < ds.size(); i++) {
		cout << "\nSinh vien thu " << i + 1;
		Xuat_Thong_Tin_Sinh_Vien(ds[i]);
		for (int j = 0; j < ds[i].ds_monhoc.size(); j++) {
			cout << "\nMon hoc thu " << j + 1;
			Xuat_Thong_Tin_Mon_Hoc(ds[i].ds_monhoc[j]);
		}

	}
}
void xuat_thong_tin_sinh_vien(ofstream &fileout ,sinhvien sv) {
	fileout << "\nho ten sinh vien : " << sv.hoten;
	fileout << "\nma so sinh vien : " << sv.maso;
	
}
void xuat_thong_tin_mon_hoc(ofstream &fileout, monhoc mon) {
	fileout << "\nten mon hoc : " << mon.tenmonhoc;
	fileout << "\ndiem mon hoc : " << mon.diem;
}
void test(ofstream &fileout, vector<sinhvien> ds) {
	for (int i = 0; i < ds.size(); i++) {
		fileout << "\nsinh vien thu " << i + 1;
		xuat_thong_tin_sinh_vien(fileout,ds[i]);
		for (int j = 0; j < ds[i].ds_monhoc.size(); j++) {
			fileout << "\nmon hoc thu " << j + 1;
			xuat_thong_tin_mon_hoc(fileout,ds[i].ds_monhoc[j]);
		}

	}
}

int main() {
	ifstream filein;
	filein.open("ThongTinSinhVien.txt",ios_base::in);
	vector<SINHVIEN> ds;
	Doc_File(filein,ds);
	Test1(ds);
	/*ofstream fileout;
	fileout.open("DanhSachSV.txt",ios_base::out);
	
	
	Test(fileout,ds);
	fileout.close();*/
	filein.close();
	system("pause");
	return 0;
}