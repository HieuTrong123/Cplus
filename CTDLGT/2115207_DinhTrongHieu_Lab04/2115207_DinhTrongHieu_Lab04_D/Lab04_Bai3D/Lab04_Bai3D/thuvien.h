#pragma once
struct nhanvien
{
	char maNV[8];
	char hoNV[10];
	char tenLot[10];
	char ten[10];
	char diachi[12];
	int namSinh;
	double luong;
};
typedef nhanvien Data;
struct tagNode
{
	Data info;
	tagNode* pNext;
};
typedef tagNode NODE;
struct LIST
{
	tagNode* pHead;
	tagNode* pTail;
};
//=============================================
NODE* GetNode(Data x);
void CreatList(LIST& l);
int IsEmpty(LIST l);
void InsertHead(LIST& l, Data x);
void InsertTail(LIST& l, Data x);
//========================================
int TapTin_List(const char* filename, LIST& l);
void Xuat_DSNV(LIST l);
void Xuat_NV(Data p);
void TieuDe();
//========================================
void Tach_Luong_x(LIST l, double x);
void Tach_LuanPhien(LIST l);
void DaoNguoc_DS(LIST l);
void Remove_Ten(LIST& l, char ten[10]);
int RemoveNode_First(LIST& l, char ten[10]);
void List_SapTang_Ten_Ho_TLot(LIST& l);
void List_Selection_Sort(LIST& l);
void Hoanvi(Data& x, Data& y);
//========================================
void Hoanvi(Data& x, Data& y) {
	Data temp = x;
	x = y;
	y = temp;
}
//Tao nut moi
NODE* GetNode(Data x)
{
	NODE* p;
	p = new NODE;
	if (p != NULL)
	{
		p->info = x;
		p->pNext = NULL;
	}
	return p;
}
//Khoi tao DSLK don rong
void CreatList(LIST& l)
{
	l.pHead = l.pTail = NULL;
}
//Kiem tra danh sach co rong
int IsEmpty(LIST l)
{
	if (l.pHead == NULL)
		return 1;
	return 0;
}
//Chen x vao dau ds
void InsertHead(LIST& l, Data x)
{
	NODE* new_ele = GetNode(x);
	if (new_ele == NULL)
	{
		cout << "\nKhong du bo nho";
		system("PAUSE");
		return;
	}
	if (l.pHead == NULL) //DS rong
	{
		l.pHead = new_ele;
		l.pTail = l.pHead;
	}
	else
	{
		new_ele->pNext = l.pHead; //chen vao dau DS
		l.pHead = new_ele;
	}
}
//Chen x vao cuoi ds
void InsertTail(LIST& l, Data x)
{
	NODE* new_ele = GetNode(x);
	if (new_ele == NULL)
	{
		cout << "\nKhong du bo nho";
		system("CLS");
		return;
	}
	if (l.pHead == NULL)
	{
		l.pHead = new_ele; l.pTail = l.pHead;
	}
	else
	{
		l.pTail->pNext = new_ele;
		l.pTail = new_ele;
	}
}
//=============================================
//Chuyen du lieu tap tin dang list
int TapTin_List(const char* filename, LIST& l)
{
	Data x;
	ifstream in(filename);
	if (!in)
		return 0;
	CreatList(l);
	while (!in.eof())
	{
		in >> x.maNV;
		in >> x.hoNV;
		in >> x.tenLot;
		in >> x.ten;
		in >> x.diachi;
		in >> x.namSinh;
		in >> x.luong;
		InsertTail(l, x);
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 69; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
//Xuat tieu de
void TieuDe()
{
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "maNV" << ':'
		<< setw(10) << "ho" << setw(10) << "ten lot" << setw(10) << "ten" << ':'
		<< setw(10) << "dia chi" << ':' << setw(10) << "nam sinh" << ':'
		<< setw(10) << "luong" << ':';
	XuatDongKe('=');
}
//Xuat 1 nhan vien
void Xuat_NV(Data nv)
{
	cout << setiosflags(ios::left) << ':' << setw(10) << nv.maNV << ':'
		<< setw(10) << nv.hoNV << setw(10) << nv.tenLot << setw(10) << nv.ten << ':'
		<< setw(10) << nv.diachi << ':' << setw(10) << nv.namSinh << ':'
		<< setw(10) << nv.luong << ':';
}

//Xuat danh sach nhan vien
void Xuat_DSNV(LIST l)
{
	TieuDe();

	for (tagNode* k = l.pHead; k != NULL; k = k->pNext) {
		Xuat_NV(k->info);
		cout << endl;
	}
	XuatDongKe('=');
}
void Tach_Luong_x(LIST l, double x)
{
	NODE* p;
	LIST l1, l2;
	p = l.pHead;
	if (p == NULL)
	{
		cout << "\nDS l rong";
		system("PAUSE");
		return;
	}
	CreatList(l1);
	CreatList(l2);
	while (p != NULL)
	{
		if (p->info.luong <= x)
			InsertTail(l1, p->info);
		else
			InsertTail(l2, p->info);
		p = p->pNext;
	}
	cout << "\n- Danh sach l1 (luong <= " << x << "):\n";
	Xuat_DSNV(l1);
	cout << "\n- Danh sach l2 (luong > " << x << "):\n";
	Xuat_DSNV(l2);
	cout << endl;
}
void Tach_LuanPhien(LIST l)
{
	NODE* p;
	LIST l1, l2;
	p = l.pHead;
	if (p == NULL)
	{
		cout << "\nDS l rong";
		system("PAUSE");
		return;
	}
	int k = 1; //khoa
	CreatList(l1);
	CreatList(l2);
	while (p != NULL)
	{
		if (k == 1)
			InsertTail(l1, p->info);
		else
			InsertTail(l2, p->info);
		p = p->pNext;
		k = 3 - k;
	}
	cout << "\n- Danh sach l1:\n";
	Xuat_DSNV(l1);
	cout << "\n- Danh sach l2 :\n";
	Xuat_DSNV(l2);
	cout << endl;
}
void DaoNguoc_DS(LIST l)
{
	NODE* p;
	LIST l1;
	p = l.pHead;
	if (p == NULL)
	{
		cout << "\nDS l rong";
		system("PAUSE");
		return;
	}
	CreatList(l1);
	while (p != NULL)
	{
		InsertHead(l1, p->info);
		p = p->pNext;
	}
	cout << "\n- Danh sach dao nguoc cua l:\n";
	Xuat_DSNV(l1);
}
//Sap tang theo ten
void List_Selection_Sort(LIST& l)
{
	NODE* min;
	NODE* p, * q;
	p = l.pHead;
	while (p != l.pTail)
	{
		min = p;
		q = p->pNext;
		while (q != NULL)
		{
			if (_strcmpi(q->info.ten, min->info.ten) < 0)
				min = q;
			q = q->pNext;
		}
		Hoanvi(min->info, p->info);
		p = p->pNext;
	}
}
void List_SapTang_Ten_Ho_TLot(LIST& l)
{
	List_Selection_Sort(l);
	NODE* p, * q;
	for (p = l.pHead; p != l.pTail; p = p->pNext)
		for (q = p->pNext; q != NULL; q = q->pNext)
			if (_strcmpi(p->info.ten, q->info.ten) == 0)
				if (_strcmpi(p->info.hoNV, q->info.hoNV) > 0)
					Hoanvi(q->info, p->info);
	for (p = l.pHead; p != l.pTail; p = p->pNext)
		for (q = p->pNext; q != NULL; q = q->pNext)
			if (_strcmpi(p->info.ten, q->info.ten) == 0 && _strcmpi(p->info.hoNV, q->info.hoNV) == 0)
				if (_strcmpi(p->info.tenLot, q->info.tenLot) > 0)
					Hoanvi(q->info, p->info);
}