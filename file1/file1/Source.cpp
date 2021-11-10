#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
struct monhoc {
	string tenmonhoc;
	float diem;
};
typedef struct monhoc MONHOC;
struct sinhvien {
	string hoten;
	string maso;
	string ngaysinh;
	vector<MONHOC> ds_monhoc;
};
typedef struct sinhvien SINHVIEN;
void Doc_Thong_Tin_1_Thang_Sinh_Vien(ifstream &filein , SINHVIEN &sv) {
	getline(filein, sv.hoten,',');//doc du lieu den dau ,
	getline(filein, sv.maso, ',');
	getline(filein, sv.ngaysinh);
}
void Doc_Thong_Tin_Mon_Hoc(ifstream &filein ,MONHOC &mon) {
	getline(filein,mon.tenmonhoc, '-');
	filein >> mon.diem;
}
void Doc_File(ifstream &filein ,vector<SINHVIEN> &ds_sinhvien) {
	while (filein.eof() == false) {
		SINHVIEN sv;
		Doc_Thong_Tin_1_Thang_Sinh_Vien(filein ,sv);
		
		int n;
		filein >> n;
		
		for (int i = 0; i < n; i++) {
			MONHOC mon;
			Doc_Thong_Tin_Mon_Hoc(filein ,mon);
			
			sv.ds_monhoc.push_back(mon);
		}
		ds_sinhvien.push_back(sv);
	}
}
void Xuat_Thong_Tin_Sinh_Vien(SINHVIEN sv) {
	cout << "\nHo ten sinh vien : "<<sv.hoten;
	cout << "\nma so sinh vien : " << sv.maso;
	cout << "\nngay sinh sinh vien : " << sv.ngaysinh;
}
void Xuat_Thong_Tin_Mon_Hoc(MONHOC mon){
	cout << "\nten mon hoc : "<<mon.tenmonhoc;
	cout << "\ndiem mon hoc : " << mon.diem;
}
void Test(vector<SINHVIEN> ds) {
	for (int i = 0; i < ds.size(); i++) {
		cout << "\nSinh vien thu "<<i+1;
		Xuat_Thong_Tin_Sinh_Vien(ds[i]);
		for (int j = 0; j < ds[i].ds_monhoc.size() ; j++) {
			cout << "\nMon hoc thu " << j + 1;
			Xuat_Thong_Tin_Mon_Hoc(ds[i].ds_monhoc[j]);
		}

	}
}

int main() {
	ifstream filein;
	filein.open("sinhvien.txt", ios_base::in);
	vector<SINHVIEN> ds_sinhvien;
	Doc_File(filein, ds_sinhvien);
	Test(ds_sinhvien);




	filein.close();
	system("pause");
	return 0;
}