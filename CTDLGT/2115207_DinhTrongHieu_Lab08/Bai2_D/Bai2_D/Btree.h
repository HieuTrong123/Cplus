#pragma once
#define MAXCOT 73
//Dinh nghia kieu thanh phan du lieu cua nut
struct hocvien
{
	char maHV[8];
	char hoHV[10];
	char tenLot[10]; 
		char ten[10];
	char lop[6];
	int namSinh;
	double dtb;
	int tichLuy;
};
//Kieu cac nut
struct BNode
{
	hocvien info;
	BNode* left;
	BNode* right;
};
//Kieu BTree
typedef BNode* BTree;
//----------------------------------
BNode* CreateNode(hocvien x);
void CreateBT(BTree& root);
int InsertNode(BTree& root, hocvien x);
int InsertNode1(BTree& root, hocvien x); //lam cay suy bien
int File_BT(BTree& root, char* filename);
void TieuDe();
void Xuat_HV(hocvien p);
int DemSoNut(BTree root);
//============================================
//Cai dat cac ham he thong
//Tao nut moi voi x cho truoc
BNode* CreateNode(hocvien x)
{
	BNode* p = new BNode;
	if (p != NULL)
	{
		p->info = x;
		p->left = NULL;
		p->right = NULL;
	}
	return p;
}
//----------------------------------
//Khoi tao cay BTree rong
void CreateBT(BTree& root)
{
	root = NULL;
}
//----------------------------------
//Them x vao cay BT
int InsertNode(BTree& root, hocvien x)
{
		if (root != NULL)
		{
			if (DemSoNut(root->left) > DemSoNut(root->right))
				return InsertNode(root->right, x);
			return InsertNode(root->left, x);
		}//root == NULL
	root = CreateNode(x);
	if (root == NULL)
		return 0;
	return 1; //thanh cong
}
//Them x vao cay BT: Suy bien
int InsertNode1(BTree& root, hocvien x)
{
	//Cay khac rong
	if (root != NULL)
	{
		return InsertNode(root->left, x);
		return InsertNode(root->right, x);
	}//root == NULL
	root = CreateNode(x);
	if (root == NULL)
		return 0;
	return 1; //thanh cong
}
//Dem so nut : So luong hoc vien trong danh sach
int DemSoNut(BTree root)
{
	if (root == NULL)
		return 0;
	return 1 + DemSoNut(root->left) + DemSoNut(root->right);
}
//============================================
//Cai dat cac ham nhap, xuat
//Tao BTree tu file - cai dat danh sach hoc vien bang cay nhi phan
int File_BT(BTree& root, char* filename)
{
	ifstream in(filename);
	if (!in)
		return 0;
	int kq;
	CreateBT(root);
	hocvien x;
	while (!in.eof())
	{
		in >> x.maHV;
		in >> x.hoHV;
		in >> x.tenLot; 
			in >> x.ten;
		in >> x.lop;
		in >> x.namSinh;
		in >> x.dtb;
		in >> x.tichLuy;
		kq = InsertNode(root, x);
		if (kq == 0)
			return 0;
	}
	in.close();
	return 1;
}
//----------------------------------
//Xuat tieu de
void TieuDe()
{
	int i;
	cout << endl;
	cout << ":";
	for (i = 1; i <= MAXCOT; i++)
		cout << "=";
	cout << ":";
	cout << endl;
	cout << setiosflags(ios::left);
	cout << ':'
		<< setw(8) << "maHV"
		<< ':'
		<< setw(10) << "Ho"
		<< setw(10) << "Tenlot"
		<< setw(10) << "Ten"
		<< ':'
		<< setw(8) << "Lop"
		<< ':'
		<< setw(6) << "NS"
		<< ':'
		<< setw(6) << "DTB"
		<< ':'
		<< setw(10) << "TichLuy"
		<< ':';
	cout << "\n";
	cout << ":";
	for (i = 1; i <= MAXCOT; i++)
		cout << "=";
	cout << ":";
}
//----------------------------------
//Xuat 1 hoc vien
void Xuat_HV(hocvien p)
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.maHV
		<< ':'
		<< setw(10) << p.hoHV
		<< setw(10) << p.tenLot
		<< setw(10) << p.ten 
		<< ':'
		<< setw(8) << p.lop
		<< ':'
		<< setw(6) << p.namSinh
		<< ':'
		<< setw(6) << setprecision(2) << p.dtb << ':'
		<< setw(10) << p.tichLuy
		<< ':';
}
//============================================
//Cai dat cac ham duyet cay
//Duyet va Xuat cay theo thu tu truoc : NLR
void PreOrder(BTree root)
{
	if (root != NULL)
	{
		Xuat_HV(root->info);
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
//----------------------------------
//Duyet va Xuat cay theo thu tu giua : LNR
void InOrder(BTree root)
{
	if (root != NULL)
	{
		InOrder(root->left);
		Xuat_HV(root->info);
		InOrder(root->right);
	}
}
//----------------------------------
//Duyet va Xuat cay theo thu tu sau : LRN
void PosOrder(BTree root)
{
	if (root != NULL)
	{
		PosOrder(root->left);
		PosOrder(root->right);
		Xuat_HV(root->info);
	}
}