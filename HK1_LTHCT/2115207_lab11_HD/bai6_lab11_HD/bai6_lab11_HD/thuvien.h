#define MAX 20
#define THOAT 0
struct DATE
{
	int ngay;
	int thang;
	int nam;
};
struct NHANVIEN
{
	int ms;
	char hoten[MAX];
	DATE ntn;
	char diachi[MAX];
	double luong;
};
void Xuat(NHANVIEN ds[MAX], int n);
int Read_struct(char* filename, NHANVIEN ds[MAX], int& n);
//**************************
int Read_struct(char* filename, NHANVIEN ds[MAX], int& n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	while (!in.eof())
	{
		in >> ds[n].ms;
		in >> ds[n].hoten;
		in >> ds[n].ntn.ngay;
		in >> ds[n].ntn.thang;
		in >> ds[n].ntn.nam;
		in >> ds[n].diachi;
		in >> ds[n].luong;
		n++;
	}
	in.close();
	return 1;
}
void Xuat(NHANVIEN ds[MAX], int n)
{
	cout << setiosflags(ios::left);
	cout << setw(20) << "MS"
		<< setw(20) << "Ho Ten"
		<< setw(20) << "NTN Sinh"
		<< setw(20) << "Dia chi"
		<< setw(20) << "Luong";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(20) << ds[i].ms
			<< setw(20) << ds[i].hoten
			<< setw(2) << ds[i].ntn.ngay << '/'
			<< setw(2) << ds[i].ntn.thang << '/'
			<< setw(14) << ds[i].ntn.nam
			<< setw(20) << ds[i].diachi
			<< setiosflags(ios::fixed) << setprecision(2) << setw(20) << ds[i].luong;
		cout << endl;
	}
}
