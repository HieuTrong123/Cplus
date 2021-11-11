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
		int n;
		filein >> n;
		for (int i = 0; i < n; i++) {
			MONHOC mon;
			Doc_DS_Mon_hoc(filein, mon);
			sv.ds_monhoc.push_back(mon);
		}
		ds.push_back(sv);
	}
}
void Xuat_Thong_Tin_1_SV(ofstream &fileout ,SINHVIEN &sv) {
	fileout << sv.hoten<<" , "<<sv.maso<<endl;
}
void Xuat_Mon_Hoc(ofstream &fileout, MONHOC &mon) {
	fileout << mon.tenmonhoc << " - " << mon.diem<<endl;
}
void Test(vector<SINHVIEN> ds, ofstream &fileout) {
	for (int i = 0; i < ds.size();i++) {
		Xuat_Thong_Tin_1_SV(fileout, ds[i]);
		for (int j = 0; i < ds[i].ds_monhoc.size() ; j++) {
			Xuat_Mon_Hoc(fileout,ds[i].ds_monhoc[j]);
		}
	}
}
int main() {
	ifstream filein;
	filein.open("ThongTinSinhVien.txt",ios_base::in);
	vector<SINHVIEN> ds;
	Doc_File(filein,ds);
	ofstream fileout;
	fileout.open("DanhSachSV.txt",ios_base::out);
	Test(ds,fileout);




	fileout.close();
	filein.close();
	system("pause");
	return 0;
}