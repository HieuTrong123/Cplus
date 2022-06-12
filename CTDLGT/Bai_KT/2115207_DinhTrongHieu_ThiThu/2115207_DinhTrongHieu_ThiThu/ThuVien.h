#pragma once
void TimNV_maNV(BSTree* root, char* maNV) {
	if (root != NULL) {
		if (_strcmpi(root->data.maNV, maNV) > 0) {
			TimNV_maNV(root->left, maNV);
		}
		else if (_strcmpi(root->data.maNV, maNV) < 0) {
			TimNV_maNV(root->right, maNV);
		}
		else {
			XuatTieuDe();
			Xuat1NV(root->data);
			XuatDongKe('=');
		}
	}
}
void SuaThongTin(BSTree*& root, const char* maNV) {
	if (root != NULL) {
		if (_strcmpi(root->data.maNV, maNV) > 0) {
			SuaThongTin(root->left, maNV);
		}
		else if (_strcmpi(root->data.maNV, maNV) < 0) {
			SuaThongTin(root->right, maNV);
		}
		else {
			root->data.nam = 1991;
		}
	}
}
void TraiNhat(BSTree*& x, BSTree*& y) {
	if (y->left != NULL) {
		TraiNhat(x, y->left);
	}
	else {
		x->data = y->data;
		y = y->right;
	}
}
void XoaNV(BSTree*& root) {
	if (root != NULL) {
		if (_strcmpi(root->data.maNV, "CT13452") > 0) {
			XoaNV(root->left);
		}
		else if (_strcmpi(root->data.maNV, "CT13452") < 0) {
			XoaNV(root->right);
		}
		else {
			if (root->left != NULL && root->right == NULL) {
				root = root->left;
			}
			else if (root->left == NULL && root->right != NULL) {
				root = root->right;
			}
			else if (root->left == NULL && root->right == NULL) {
				root = NULL;
			}
			else {
				TraiNhat(root, root->right);
			}
		}
	}
}
void DemSoNut(BSTree* root, int& dem) {
	if (root != NULL) {
		dem++;
		DemSoNut(root->left, dem);
		DemSoNut(root->right, dem);
	}

}
int SoMucBSTree(BSTree* root, char* maNV) {
	int dem;
	dem = 0;
	BSTree* p = root;
	while (p != NULL) {
		if (strcmp(p->data.maNV, maNV) == 0)
			break;
		else {
			dem++;
			if (strcmp(p->data.maNV, maNV) > 0) 
				p = p->left;
			else 
				p = p->right;
		}
	}
	return dem;
}
void TimChieuCaoBSTree(BSTree* root, BSTree* root_temp, int& max) {
	if (root != NULL) {
		int temp = SoMucBSTree(root_temp, root->data.maNV);
		if (temp > max) {
			max = temp;
		}
		TimChieuCaoBSTree(root->left, root_temp, max);
		TimChieuCaoBSTree(root->right, root_temp, max);
	}
}
//=====================================================
int TinhMax(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
//Chieu cao cua cay
int TinhChieuCao(BSTree* root)
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
//======================================================
void XuatNutLa(BSTree* root) {
	if (root != NULL) {
		if (root->left == NULL && root->right == NULL) {
			Xuat1NV(root->data);
			cout << endl;
		}
		XuatNutLa(root->left);
		XuatNutLa(root->right);
	}
}