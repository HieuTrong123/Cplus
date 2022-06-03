#pragma once
void TimHVCoMaHV(NODE* r, char* maHV) {
	if (r != NULL) {
		if (_strcmpi(maHV, r->data.maHV) < 0) {
			TimHVCoMaHV(r->pLeft, maHV);
		}
		else if (_strcmpi(maHV, r->data.maHV) > 0)
			TimHVCoMaHV(r->pRight, maHV);
		else {
			XuatMotHV(r->data);
			cout << endl;
		}
	}
}
void SoNODE(NODE* r,int & dem) {
	if (r != NULL) {
		dem++;
		SoNODE(r->pLeft, dem);
		SoNODE(r->pRight, dem);
	}
}
int TinhMax(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
//Chieu cao cua cay
int TinhChieuCao(NODE* root)
{
	int h;
	if (root == NULL)
		h = -1;
	else
		if (root->pLeft == NULL && root->pRight == NULL)
			h = 0;
		else
			h = 1 + TinhMax(TinhChieuCao(root->pLeft), TinhChieuCao(root->pRight));
	return h;
}
int TimMuc_x(NODE* root, char* maHV)
{
	int muc;
	muc = 0;
	NODE* T = root;
	while (T != NULL)
	{
		if (_strcmpi(maHV, T->data.maHV)==0)
			break;
		else
		{
			muc++;
			if (_strcmpi(maHV, T->data.maHV) < 0)
				T = T->pLeft;
			else
				T = T->pRight;
		}
	}
	return muc;
}
void XuatHocVienCoTen(NODE* r, char* ten) {
	if (r != NULL) {
		if (_strcmpi(ten, r->data.ten) == 0) {
			XuatMotHV(r->data);
			cout << endl;

		}
		else if (_strcmpi(ten, r->data.ten) < 0)
			XuatHocVienCoTen(r->pLeft, ten);
		else {
			XuatHocVienCoTen(r->pRight, ten);
		}
	}
}
void XuLyRemove(NODE*& x, NODE*& y) {
	if (y->pLeft != NULL) {
		XuLyRemove(x, y->pLeft);
	}
	else {
		x->data = y->data;
		x = y;
		y = y->pRight;
	}
}
void Remove(NODE* r, char* maHV) {
	if (r != NULL) {
		if (_strcmpi(maHV, r->data.maHV) < 0) {
			TimHVCoMaHV(r->pLeft, maHV);
		}
		else if (_strcmpi(maHV, r->data.maHV) > 0)
			TimHVCoMaHV(r->pRight, maHV);
		else {
			NODE* x = r;
			if (r->pLeft == NULL && r->pRight != NULL) {
				r = r->pRight;
			}
			else if (r->pLeft != NULL && r->pRight == NULL) {
				r = r->pLeft;
			}
			else if (r->pLeft != NULL && r->pRight != NULL) {
				XuLyRemove(x, r->pRight);
			}
			delete x;
		}
	}
}