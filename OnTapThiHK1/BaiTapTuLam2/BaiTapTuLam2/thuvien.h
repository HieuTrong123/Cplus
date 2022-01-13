ifstream in;
ofstream out;
struct MonHoc
{
	char tenMonHoc[30];
	float diem;
};
struct SinhVien
{
	char hoTen[30];
	char maSV[10];
	char date[12];
	vector<MonHoc> ds_monHoc;
};
//dinh nghia ham


void NhapThongTin1SinhVien(SinhVien &sv) {
	
	in.getline(sv.hoTen,30, ',');
	in.getline(sv.maSV,10, ',');
	in.getline(sv.date,12);
}
void NhapThongTinMonHoc(MonHoc &mon) {
	in.getline(mon.tenMonHoc,30, '-');
	in >> mon.diem;
}

void NhapThongTinSinhVien(vector<SinhVien>& ds_sinhVien, const char* filename) {
	in.open(filename);
	int n;
	
	MonHoc mon;
	if (!in) {
		cout << "\nin giu lieu tu file that bai";
		return;
	}
	while (!in.eof()) {
		SinhVien sv;
		NhapThongTin1SinhVien(sv);
		in >> n;

		for (int i = 0; i < n; i++) {
			NhapThongTinMonHoc(mon);
			sv.ds_monHoc.push_back(mon);
		}
		ds_sinhVien.push_back(sv);
	}
	in.close();
}
void XuatDanhSach(vector<SinhVien> ds) {
	for (int i = 0; i < ds.size(); i++) {
		cout << "\n\n\t\tSinh Vien Thu " << i + 1 << " la:";
		cout << "\nma so Sinh vien la: " << ds[i].maSV;
		cout <<"\nHo va ten: " << ds[i].hoTen;
		cout << "\nngay sinh Sinh vien la: " << ds[i].date;
		cout << "\n\n\t\t======= MOM HOC ========\n";
		for (int j = 0; j < ds[i].ds_monHoc.size(); j++) {
			cout << "\nmon hoc thu " << j + 1 << " la: ";
			cout << "\n ten mon hoc la: " << ds[i].ds_monHoc[j].tenMonHoc;
			cout << "\ndiem mon hoc la : " << ds[i].ds_monHoc[j].diem;
		}

	}
}