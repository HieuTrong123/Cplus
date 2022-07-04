#pragma once
void SuaThongTin(BSTree*& root, const char* maNV) {
	if (root != NULL) {
		if (_strcmpi(root->data.maNV, maNV) > 0) {
			SuaThongTin(root->left, maNV);
		}
		else if (_strcmpi(root->data.maNV, maNV) < 0) {
			SuaThongTin(root->right, maNV);
		}
		else {
			strcpy_s(root->data.diaChi, "Lam_Dong");
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
		if (_strcmpi(root->data.maNV, "LD13452") > 0) {
			XoaNV(root->left);
		}
		else if (_strcmpi(root->data.maNV, "LD13452") < 0) {
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
int SoMucBSTree(BSTree* root,const char* maNV) {
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