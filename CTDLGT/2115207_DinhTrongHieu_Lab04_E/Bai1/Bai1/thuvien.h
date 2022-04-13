#pragma once
struct  Node
{
	int data;
	Node* pNext;
};
struct LIST
{
	Node* pHead;
	Node* pTail;
};
void TaoDuLieu(LIST& l) {
	l.pHead = l.pTail = NULL;
}

Node* ThemGiaTri(int x) {
	Node* new_Node = new Node;
	new_Node->data = x;
	new_Node->pNext = NULL;
	return new_Node;
}
void ThemVaoCuoiDS(LIST& l, int x) {
	Node* new_Node = ThemGiaTri(x);
	if (new_Node == NULL) {
		cout << "\nchua co du lieu";
	}
	if (l.pHead == NULL) {
		l.pHead = new_Node;
		l.pTail = l.pHead;
	}
	else {
		l.pTail->pNext = new_Node;
		l.pTail = new_Node;
	}

}
int TaoDnahSach(LIST& l,char* filename) {
	int x;
	ifstream in(filename);
	if (!in)
		return 0;
	while (!in.eof()) {
		in >> x;
		ThemVaoCuoiDS(l, x);
	}
	in.close();
	return 1;
}
void XemDanhSach(LIST l) {
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		cout << k->data << '\t';
	}
}
int TimMin(LIST l) {
	int min = l.pHead->data;
	for (Node* k = l.pHead->pNext; k != NULL; k = k->pNext) {
		if (k->data < min) {
			min = k->data;
		}
	}
	return min;
}
int TimMax(LIST l) {
	int max = l.pHead->data;
	for (Node* k = l.pHead->pNext; k != NULL; k = k->pNext) {
		if (k->data > max) {
			max = k->data;
		}
	}
	return max;
}
int demX(LIST l,int x) {
	int dem = 0;
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		if (k->data == x) {
			dem++;
		}
	}
	return dem;
}
int Tong(LIST l) {
	int sum = 0;
	for (Node* k = l.pHead; k != NULL; k = k->pNext) {
		
			sum += k->data;
		
	}
	return sum;
}

LIST DSGTKhacNhau(LIST l) {
	LIST new_LIST;	
	TaoDuLieu(new_LIST);
	int kq = 0;
	int dem = 0;
	for (Node* k = l.pHead; k != l.pTail; k = k->pNext) {
		
		for (Node* h = l.pHead; h != NULL; h = h->pNext) {
			if (k->data == h->data) {
				kq = 1;		
				dem++;
				
			}
		}
		if (kq == 1&&dem<2) {
			
			
			ThemVaoCuoiDS(new_LIST, k->data);
			kq = 0;
			dem = 0;
		}
		else {
			kq = 0;
			dem = 0;
		}

	}
	return new_LIST;
}
void HoanVi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


void SapXepChenTrucTiep(LIST& l) {


	for (Node* k = l.pHead; k != l.pTail; k = k->pNext) {
		
		for (Node* h = k->pNext; h != NULL; h = h->pNext) {
		
			if (k->data > h->data) {
				
				HoanVi(k->data, h->data);

			}
		}
	}

}
void SapXepTheoYeuCau(LIST& l) {
	for (Node* k = l.pHead; k != l.pTail; k = k->pNext) {
		for (Node* h = k->pNext; h != NULL; h = h->pNext) {
			if (k->data > h->data&& k->data >0&& h->data>0 ||
				k->data!=0&&h->data==0||
				k->data < h->data && k->data < 0 && h->data < 0
				||  k->data >0 && h->data<0) {
				HoanVi(k->data, h->data);
			}
		}
	}
}