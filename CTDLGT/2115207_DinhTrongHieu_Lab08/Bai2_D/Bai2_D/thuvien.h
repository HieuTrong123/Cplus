#pragma once
int dem;
BNode* p;
int DemNutLa(BTree root);
int TinhMax(int a, int b);
int TinhChieuCao(BTree root);
//============================================ 
//Dem so nut la
int DemNutLa(BTree root)
{
	int soNutLa;
	if (root == NULL)
		soNutLa = 0;
	else
		if (root->left == NULL && root->right == NULL)
		{
			Xuat_HV(root->info);
			soNutLa = 1;
		}
		else
			soNutLa = DemNutLa(root->left) + DemNutLa(root->right);
	return soNutLa;
}
//----------------------------------
int TinhMax(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
//Chieu cao cua cay
int TinhChieuCao(BTree root)
{
	int h;
	if (root == NULL)
		h = -1;
	else
		if (root->left == NULL && root->right == NULL)
			h = 0;
		else
			h = 1 + TinhMax(TinhChieuCao(root->left), TinhChieuCao(root->right));
	return h;
}
//Tim kiem hoc vien theo maHV :Preorder
//Voi p la bien toan cuc, tro den hoc vien tim duoc neu co
void TimKiem_maHV(BTree root, char maHV[8])
{
	if (root != NULL)
	{
		if (strcmp(root->info.maHV, maHV) == 0)
			p = root;
		TimKiem_maHV(root->left, maHV);
		TimKiem_maHV(root->right, maHV);
	}
}
//Xuat cac hoc vien co ten cho truoc :Preorder
//Voi dem la bien toan cuc
void Xuat_HV_Ten(BTree root, char ten[8])
{
	if (root != NULL) 
	{
		if (_strcmpi(root->info.ten, ten) == 0)
		{
			dem++;
			Xuat_HV(root->info);
		}
		Xuat_HV_Ten(root->left, ten);
		Xuat_HV_Ten(root->right, ten);
	}
}