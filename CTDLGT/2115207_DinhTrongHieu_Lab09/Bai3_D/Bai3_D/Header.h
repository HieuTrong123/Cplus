#define MAXCOT 70
typedef char KeyType[8];//Kieu du lieu cua Khoa, la mot thanh phan cua kieu nhanvien - (ma nhan vien)
//Dinh nghia kieu thanh phan du lieu cua nut
struct nhanvien
{
	 
		KeyType maNV; //ma nhan vien : truong khoa, dung de dua du lieu len cay
	char hoTen[25];
	int namSinh;
	char diachi[15];
	double luong;
};
//Kieu du lieu cua cac nut
struct BSNode
{
	nhanvien info;
	BSNode* left;
	BSNode* right;
};
//Kieu cay nhi phan tim kiem
typedef BSNode* BSTree;
//=====================================
//khai bao nguyen mau
BSNode* CreateNode(nhanvien x);
void CreateBST(BSTree& root);
int InsertNode(BSTree& root, nhanvien x);
void PosOrder(BSTree root);
void InOrder(BSTree root);
void PreOrder(BSTree root);
//=====================================
//Tao nut voi x cho truoc
BSNode* CreateNode(nhanvien x)
{
	BSNode* p = new BSNode;
	if (p != NULL)
	{
		p->info = x;
		p->left = NULL;
		p->right = NULL;
	}
	return p;
}
//----------------------------------
//Khoi tao cay BST rong
void CreateBST(BSTree& root)
{
	root = NULL;
}
//----------------------------------
//Them x vao cay BST
int InsertNode(BSTree& root, nhanvien x)
{
	//Cay khac rong
	if (root != NULL)
	{
		if (strcmp(root->info.maNV, x.maNV) == 0)
			return 0; // x da co san
		if ((strcmp(root->info.maNV, x.maNV) > 0)) 
			return InsertNode(root->left, x);
		else
			return InsertNode(root->right, x);
	}//root == NULL : chen vi tri nut ngoai thích hop - la nut la sau khi chen xong
	root = CreateNode(x);
	if (root == NULL)
		return -1;
	return 1; //thanh cong
}
//----------------------------------
//Tao cay BST tu file
int File_BST(BSTree& root, char* filename)
{
	ifstream in(filename);
	if (!in)
		return 0;
	KeyType maNV; //truong khoa, dung de dua du lieu len cay
	int kq;
	CreateBST(root);
	nhanvien x;
	while (!in.eof())
	{
		in >> x.maNV;
		in >> x.hoTen;
		in >> x.namSinh;
		in >> x.diachi;
		in >> x.luong;
		kq = InsertNode(root, x);
		if (kq == 0 || kq == -1)
			return 0;
	}
	in.close();
	return 1;
}
//Xuat tieu de
void TieuDe()
{
	int i;
	cout << "\n:";
	for (i = 1; i <= MAXCOT; i++)
		cout << "=";
	cout << ":\n";
	cout << setiosflags(ios::left);
	cout << ':'
		<< setw(8) << "Ma NV"
		<< ':'
		<< setw(25) << "Ho va Ten"
		<< ':'
		<< setw(5) << "NS"
		<< ':'
		<< setw(15) << "Dia Chi"
		<< ':' 
		<< setw(13) << "Luong"
		<< ':';
	cout << "\n:";
	for (i = 1; i <= MAXCOT; i++)
		cout << "=";
	cout << ":";
}
//Xuat 1 nhan vien
void Xuat_NV(nhanvien p)
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.maNV
		<< ':'
		<< setw(25) << p.hoTen
		<< ':'
		<< setw(5) << p.namSinh
		<< ':'
		<< setw(15) << p.diachi
		<< ':'
		<< setw(13) << setprecision(2) << setiosflags(ios::fixed) << p.luong
		<< ':';
}
//Xuat cay theo thu tu truoc : NLR
void PreOrder(BSTree root)
{
	if (root != NULL)
	{
		Xuat_NV(root->info);
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
//Xuat cay theo thu tu giua : LNR
void InOrder(BSTree root)
{
	if (root != NULL)
	{
		InOrder(root->left);
		Xuat_NV(root->info);
		InOrder(root->right);
	}
}
//Xuat cay theo thu tu sau : LRN
void PosOrder(BSTree root)
{
	if (root != NULL)
	{
		PosOrder(root->left);
		PosOrder(root->right);
		Xuat_NV(root->info);
	}
}
//---------------------------------- 