int DemSoNode(Btree* p) {
	if (p == NULL) {
		return 0;
	}
	else {
		return 1 + DemSoNode(p->pLeft) + DemSoNode(p->pRight);
	}
}
int TinhMax(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
int TinhChieuCao(Btree* root) {
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
void DenNutLa(Btree* root,int& dem) {
	if(root!=NULL) {
		if (root->pLeft == NULL && root->pRight == NULL) {
			dem++;
		}
		DenNutLa(root->pLeft,dem);
		DenNutLa(root->pRight,dem);
	}
}
void DenNut2ConKhacRong(Btree* root,int& dem) {
	if (root != NULL)
	{
		if (root->pLeft != NULL && root->pRight != NULL) {
			dem++;
		}
		DenNut2ConKhacRong(root->pLeft,dem);
		DenNut2ConKhacRong(root->pRight,dem);
	}
}
int TimMuc(Btree* root,int data) {
	int dem = 0;
	Btree* t = root;
	while (t != NULL) {
		
		if(data==t->data) {
			break;
		}
		else {
			dem++;
			if (data < t->data)
				t = t->pLeft;
			else
				t = t->pRight;
		}
		
	}
	return dem;
}

void XuatNodeMuc_x(Btree* root, int x,Btree* T) {
	
	if (root != NULL) {

		if (TimMuc(T, root->data) == x) {
			cout << root->data << "  ";
		}
		XuatNodeMuc_x(root->pLeft, x,T);
		XuatNodeMuc_x(root->pRight, x,T);
	}
}