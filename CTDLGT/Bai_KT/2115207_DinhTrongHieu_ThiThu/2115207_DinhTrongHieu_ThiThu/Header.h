#pragma once
struct NhanVien
{
	char maNV[10];
	char hoTen[30];
	int ngay;
	int thang;
	int nam;
	char diaChi[20];
	double bacLuong;
};
struct BSTree
{
	NhanVien data;
	BSTree* left;
	BSTree* right;
};
void CreatBST(BSTree*& root) {
	root = NULL;
}
BSTree* GetBST(NhanVien x) {
	BSTree* p = new BSTree;
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}
void Add(BSTree*& root, NhanVien x) {
	if (root == NULL) {
		root = GetBST(x);
	}
	else {
		if (_strcmpi(root->data.maNV, x.maNV) > 0) {
			Add(root->left, x);
		}
		else if (_strcmpi(root->data.maNV, x.maNV) < 0) {
			Add(root->right, x);
		}
	}
}
int NhapTuFile(BSTree*& root){
	CreatBST(root);
	ifstream in("lylich.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		NhanVien x;
		in >> x.maNV;
		in >> x.hoTen;
		in >> x.ngay;
		in >> x.thang;
		in >> x.nam;
		in >> x.diaChi;
		in >> x.bacLuong;
		Add(root, x);
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	for (int i = 0; i < 93; i++) {
		cout << x;
	}
	cout << endl;

}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10)
		<< "ma NV" << ':' << setw(30) << "ho ten" << ':' << setw(5) << "ngay"
		<< ':' << setw(5) << "thang" << ':' << setw(5)
		<< "nam" << ':' << setw(20) << "dia chi" << ':' << setw(10) << "bac luong"<<':';
	XuatDongKe('=');
}
void Xuat1NV(NhanVien x) {
	cout << setiosflags(ios::left) << ':' << setw(10)
		<< x.maNV << ':' << setw(30) << x.hoTen << ':' << setw(5) << x.ngay
		<< ':' << setw(5) << x.thang << ':' << setw(5)
		<< x.nam << ':' << setw(20) << x.diaChi << ':' << setw(10) << x.bacLuong<<':';
}
//NLR
void DS_NLR(BSTree* root) {
	if (root != NULL) {
		Xuat1NV(root->data);
		cout << endl;
		DS_NLR(root->left);
		DS_NLR(root->right);
	}
}
void XuatDS_NLR(BSTree* root) {
	XuatTieuDe();
	DS_NLR(root);
	XuatDongKe('=');
}//LNR
void DS_LNR(BSTree* root) {
	if (root != NULL) {
		
		DS_LNR(root->left);
		Xuat1NV(root->data);
		cout << endl;
		DS_LNR(root->right);
	}
}
void XuatDS_LNR(BSTree* root) {
	XuatTieuDe();
	DS_LNR(root);
	XuatDongKe('=');
}
void DS_LRN(BSTree* root) {
	if (root != NULL) {

		DS_LRN(root->left);
		DS_LRN(root->right);
		Xuat1NV(root->data);
		cout << endl;
	}
}
void XuatDS_LRN(BSTree* root) {
	XuatTieuDe();
	DS_LNR(root);
	XuatDongKe('=');
}