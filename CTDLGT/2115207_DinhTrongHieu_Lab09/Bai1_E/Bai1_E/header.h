struct Btree
{
	int data;
	Btree* pLeft;
	Btree* pRight;
};
void KhoiTao(Btree*& b) {
	b = NULL;
}
Btree* GetNode(int x) {
	Btree* p = new Btree;
	p->data = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
void TaoDuLieu(Btree*& p, int data) {
	if (p == NULL) {
		p = GetNode(data);
	}
	else {
		if (data < p->data) {
			TaoDuLieu(p->pLeft, data);
		}
		else if (data > p->data) {
			TaoDuLieu(p->pRight, data);
		}
	}
}
void Xuat(Btree* p) {
	if (p != NULL) {
		cout << p->data << "  ";
		Xuat(p->pLeft);
		Xuat(p->pRight);
	}
}
int NhapTuFile(Btree*& p) {
	KhoiTao(p);
	ifstream in("test.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		int x;
		in >> x;
		TaoDuLieu(p, x);
	}
	in.close();
	return 1;
}
void TimNodeTraiNhatBenPhai(Btree*& x, Btree*& y) {
	if (y->pLeft != NULL) {
		TimNodeTraiNhatBenPhai(x, y->pLeft);
	}
	else {
		x->data = y->data;
		x = y;
		y = y->pRight;
	}
}
void Remove(Btree*& root, int data) {
	if (root != NULL) {
		if (data < root->data) {
			Remove(root->pLeft, data);
		}
		else if (data > root->data) {
			Remove(root->pRight, data);
		}
		else {
			Btree* x = root;
			if (root->pLeft == NULL && root->pRight != NULL) {
				root = root->pRight;
			}
			else if (root->pLeft != NULL && root->pRight == NULL) {
				root = root->pLeft;
			}
			else if (root->pLeft != NULL && root->pRight != NULL) {
				TimNodeTraiNhatBenPhai(x, root->pRight);
			}
			delete x;
		}
	}

}