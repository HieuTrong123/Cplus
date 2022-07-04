#pragma once
struct NhanVien
{
	char maNV[10];
	char ho[15];
	char tlot[15];
	char ten[15];
	int nam;
	char diaChi[20];
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
		in >> x.ho;
		in >> x.tlot;
		in >> x.ten;
		in >> x.nam;
		in >> x.diaChi;
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
		<< "ma NV" << ':' << setw(10) << "ho" << ':' << setw(10) << "tlot"
		<< ':' << setw(10) << "ten" << ':' << setw(10)
		<< "nam" << ':' << setw(20) << "dia chi" << ':';
	XuatDongKe('=');
}
void Xuat1NV(NhanVien x) {
	cout << setiosflags(ios::left) << ':' << setw(10)
		<< x.maNV << ':' << setw(10) << x.ho << ':' << setw(10) << x.tlot
		<< ':' << setw(10) << x.ten << ':' << setw(5)
		<< x.nam << ':' << setw(20) << x.diaChi << ':';
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
	DS_LRN(root);
	XuatDongKe('=');
}