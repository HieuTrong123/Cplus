#pragma once
void ThayDoiDiaChi(NODE*& root, char* maHV) {
	if (root != NULL) {
		if (_strcmpi(maHV, root->data.maHV) == 0) {
			cout << "\nnhap dia chi moi: ";
			cin >> root->data.diaChi;
		}
		else {
			if (_strcmpi(maHV, root->data.maHV) < 0)
				ThayDoiDiaChi(root->pLeft, maHV);
			else
				ThayDoiDiaChi(root->pRight, maHV);
		}
	}
}
void TraiNhat(NODE*& x, NODE*& y) {
	if (y->pLeft != NULL) {
		TraiNhat(x, y->pLeft);
	}
	else {
		x->data = y->data;
		x = y;
		y = y->pRight;
	}
}
void Remove(NODE*& root, char* maHV) {
	if (root != NULL) {
		if (_strcmpi(maHV, root->data.maHV) < 0)
			Remove(root->pLeft, maHV);
		else if (_strcmpi(maHV, root->data.maHV) > 0)
			Remove(root->pRight, maHV);
		else {
			NODE* x = root;
			if (root->pLeft != NULL && root->pRight == NULL)
				root = root->pLeft;
			else if (root->pLeft == NULL && root->pRight != NULL)
				root = root->pRight;
			else if (root->pLeft != NULL && root->pRight != NULL)
			{
				NODE* y = root->pRight;
				TraiNhat(x, y);
			}
			else {
				root = NULL;
			}
			//delete x;
		}
	}
}
void ReMoveDK(NODE* r, NODE*& p) {
	if (r != NULL) {
		if (r->data.diem < 5) {
			Remove(p, r->data.maHV);
		}
		ReMoveDK(r->pLeft, p);
		ReMoveDK(r->pRight, p);
	}
	
}