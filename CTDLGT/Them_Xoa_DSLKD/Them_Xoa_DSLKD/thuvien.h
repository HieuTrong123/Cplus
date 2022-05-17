struct NODE
{
	int data;
	NODE* pNext;
};
struct LinkedList
{
	NODE* pHead;
	NODE* pTail;
};
void KhoiTaoLLIST(LinkedList& a) {
	a.pHead = a.pTail = NULL;
}
NODE* GetNode(int data) {
	NODE* p = new NODE;
	p->data = data;
	p->pNext = NULL;
	return p;
}
void Add(LinkedList& a, int data) {
	NODE* p = GetNode(data);
	if (a.pHead == NULL)
		a.pHead = a.pTail = p;
	else {
		a.pTail->pNext = p;
		a.pTail = p;
	}
}
void TaoDSLK(LinkedList& a) {
	KhoiTaoLLIST(a);
	ifstream in("a.txt");
	if (!in)
		cout << "\nthat bai\n";
	int x;
	while (!in.eof()) {
		in >> x;
		Add(a, x);
	}
	in.close();
}
void XemDSLK(LinkedList a) {
	for (NODE* k = a.pHead; k != NULL; k = k->pNext) {
		cout << k->data << ' ';
	}
}
void SapXepDSLKGiam(LinkedList& a) {
	for (NODE* k = a.pHead; k != NULL; k = k->pNext) {
		for (NODE* h = k->pNext; h != NULL; h = h->pNext) {
			if (h->data > k->data) {
				int t = h->data;
				h->data = k->data;
				k->data = t;
			}
		}
	}
}
int Min(LinkedList a) {
	int min = a.pHead->data;
	for (NODE* h = a.pHead->pNext; h != NULL; h = h->pNext) {
		if (h->data < min) {
			min = h->data;
		}
	}
	return min;
}
void ChenSau(LinkedList& a, int x) {
	for (NODE* k = a.pHead; k != NULL; k = k->pNext) {
		if (k->data == Min(a)) {
			NODE* p = GetNode(x);
			p->pNext = k->pNext;
			k->pNext = p;
			k = k->pNext;
		}
	}
}
void ChenTruoc(LinkedList& a, int x) {
	int dem = 1;
	NODE* t = NULL;
	for (NODE* k = a.pHead; k != NULL; k = k->pNext) {
		if (k->data == Min(a) && dem != 1) {
			NODE* p = GetNode(x);
			p->pNext = t->pNext;
			t->pNext = p;
		}
		else if (k->data == Min(a) && dem == 1) {
			NODE* p = GetNode(x);
			p->pNext = a.pHead;
			a.pHead = p;
		}
		t = k;
		dem++;
	}
}
void XoaMin(LinkedList& a) {
	int dem = 1;
	int min = Min(a);
	NODE* t = NULL;
	NODE* k = a.pHead;
	while (k != NULL) {
		if (k->data == min && dem == 1)
			while (k->data == min && dem == 1) {
				NODE* p = a.pHead;
				a.pHead = k = p->pNext;
				delete p;

			}
		else if (k->data == min && dem != 1)
			while ((k->data == min && dem != 1)) {
				NODE* p = k;
				t->pNext = k = k->pNext;
				delete p;
			}
		t = k;
		dem++;
		k = k->pNext;
	}
}
void XoaVT(LinkedList& a, int vt) {
	int dem = 1;
	NODE* t = NULL;
	NODE* k = a.pHead;
	while (k != NULL) {
		if (vt == 1)
		{
			NODE* p = a.pHead;
			a.pHead = k = p->pNext;
			delete p;

		}
		else {
			if (dem == vt) {
				NODE* p = k;
				t->pNext = k = k->pNext;
				delete p;
			}
		}
		t = k;
		dem++;
		k = k->pNext;
	}
}
void ChenVT(LinkedList& a, int vt,int x) {
	int dem = 1;
	NODE* t = NULL;
	for (NODE* k = a.pHead; k != NULL; k = k->pNext) {
		
		if (vt==1) {
			NODE* p = GetNode(x);
			p->pNext = a.pHead;
			a.pHead = p;
		}
		else {
		if (dem==vt) {
			NODE* p = GetNode(x);
			p->pNext = t->pNext;
			t->pNext = p;
		}
		}
		t = k;
		dem++;
	}
}
