struct HocVien {
	char maHV[10];
	char ho[10];
	char tenLot[10];
	char ten[10];
	int namSinh;
	char queQuan[15];
	double diemTB;
};
int TaoBangDiem(char* filename, HocVien ds[], int& n) {
	ifstream in(filename);
	if (!in)
		return 0;
	
	while (!in.eof()) {
		in >> ds[n].maHV;
		in >> ds[n].ho;
		in >> ds[n].tenLot;
		in >> ds[n].ten;
		in >> ds[n].namSinh;
		in >> ds[n].queQuan;
		in >> ds[n].diemTB;
		n++;
	}
	in.close();
	return 1;

}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 75; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << "ma HV" << ':' << setw(10) << "ho" << setw(10) << "tenlot" << setw(10) << "ten" << ':'
		<< setw(10) << "nam sinh" << ':' << setw(15) << "que quan" << ':' << setw(5) << "diemTB" << ':';
	XuatDongKe('=');

}
void XuatMotHV(HocVien hv) {
	cout << setiosflags(ios::left)
		<< ':' << setw(10) << hv.maHV << ':' << setw(10) << hv.ho<< setw(10) << hv.tenLot << setw(10) << hv.ten << ':'
		<< setw(10) << hv.namSinh << ':' << setw(15) << hv.queQuan << ':' << setw(5) << hv.diemTB << ':';
}
void XuatBangDiem(HocVien ds[],int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotHV(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void HoanVi(HocVien& a, HocVien& b)
{
	HocVien tam = a;
	a = b;
	b = tam;
}
void Selection_L(HocVien a[], int n)
{
	int i, j, cs_min;
	for (i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(a[j].maHV , a[cs_min].maHV)<0)
				cs_min = j;
		HoanVi(a[i], a[cs_min]);
	}
}
void Partition(HocVien a[], int l, int r)
{
	int i, j;
	HocVien x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do
	{
		while (a[i].diemTB < x.diemTB)
			i++;
		while (a[j].diemTB > x.diemTB)
			j--;
		if (i <= j)
		{
			HoanVi(a[i], a[j]);
			i++; j--;
		}
	} while (i <= j);
	if (l < j)
		Partition(a, l, j);
	if (i < r)
		Partition(a, i, r);
}
void QuickSort(HocVien a[], int n)
{
	Partition(a, 0, n - 1);
}
void Insertion_L(HocVien a[], int n)
{
	int i, pos;
	HocVien x;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		for (pos = i - 1; pos >= 0; pos--) {

			if (strcmp(a[pos].ten, x.ten) > 0|| strcmp(a[pos].ten, x.ten) == 0&& strcmp(a[pos].ho, x.ho)>0||
				strcmp(a[pos].ten, x.ten) == 0 && strcmp(a[pos].ho, x.ho) == 0&& strcmp(a[pos].tenLot, x.tenLot) > 0) {
				a[pos + 1] = a[pos];
				a[pos] = x;
			}
		}	
	}
}