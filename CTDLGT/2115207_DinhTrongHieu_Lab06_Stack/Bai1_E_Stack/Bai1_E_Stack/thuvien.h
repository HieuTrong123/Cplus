struct Node
{
	char daTa;
	Node* pNext;
};
struct Stack
{
	Node* pHead;
	Node* ptail;
	void KhoiTao() {
		this->pHead = this->ptail = NULL;
	}
	Node* KhoiTaoNode(char x) {
		Node* newNODE = new Node;
		newNODE->daTa = x;
		newNODE->pNext = NULL;
		return newNODE;
	}
	void push(char x) {
		Node* t = KhoiTaoNode(x);
		if (this->pHead == NULL) {
			this->pHead = t;
			this->ptail = this->pHead;
		}
		else {
			t->pNext = this->pHead;
			this->pHead = t;
		}
	}
	char pop() {
		Node* p;
		char x;
		if (this->pHead == NULL)
			return NULL;
		p = this->pHead;
		x = p->daTa;
		this->pHead = p->pNext;
		delete p;
		return x;
	}
};
void Chep_Chuoi_Sang_Stack(Stack& s, char X[])
{
	s.KhoiTao();
	if (X[0] == NULL)
		return;
	int i;
	for (i = 0; X[i] != NULL; i++)
		s.push(X[i]);
}
void Chep_Stack_Sang_Chuoi(Stack s, char Y[])
{
	Y[0] = NULL;
	if (s.pHead == NULL)
		return;
	Node* p;
	p = s.pHead;
	int i = 0;
	while (p != NULL)
	{
		Y[i++] = p->daTa;
		p = p->pNext;
	}
	Y[i] = NULL;
}

int Tao_Cac_So(Stack& a, Stack& b) {
	a.KhoiTao();
	b.KhoiTao();
	ifstream in("a.txt");
	if (!in)
		return 0;
	char x;
	while (!in.eof()) {
		in >> x;
		a.push(x);
	}
	in.close();
	in.open("b.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		in >> x;
		b.push(x);
	}
	in.close();
	return 1;
}

void Xem_So(Stack a) {
	char x[100];
	Chep_Stack_Sang_Chuoi(a, x);
	Chep_Chuoi_Sang_Stack(a, x);
	for (Node* k = a.pHead; k != NULL; k = k->pNext) {
		cout << k->daTa;
	}
}
int KySo_So(char x) {
	return x - '0';
}
char So_KySo(int x) {
	return x + '0';
}

Stack Tong2So(Stack a, Stack b) {
	Stack kq;
	kq.KhoiTao();
	char x[100], y[100];
	Node* k = a.pHead;
	Node* p = b.pHead;
	int nho = 0;
	while (true) {
		if (k != NULL && p != NULL) {

			int da = KySo_So(k->daTa) + KySo_So(p->daTa) + nho;
			if (da >= 10) {
				nho = 1;
				kq.push(So_KySo(da % 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			k = k->pNext;
			p = p->pNext;
		}
		else if (k != NULL && p == NULL) {
			int da = KySo_So(k->daTa) + nho;
			if (da > 10) {
				nho = 1;
				kq.push(So_KySo(da % 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			k = k->pNext;
		}

		else if (k == NULL && p != NULL)
		{
			int da = KySo_So(p->daTa) + nho;
			if (da > 10) {
				nho = 1;
				kq.push(So_KySo(da % 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			p = p->pNext;
		}
		else if (k == NULL && p == NULL)
			break;

	}
	char temp[100];
	Chep_Stack_Sang_Chuoi(kq, temp);
	Chep_Chuoi_Sang_Stack(kq, temp);

	return kq;
}
Stack Hieu2So(Stack a, Stack b) {
	Stack kq;
	kq.KhoiTao();
	char x[100], y[100];
	Node* k = a.pHead;
	Node* p = b.pHead;
	int nho = 0;
	while (true) {
		if (k != NULL && p != NULL) {

			int da = KySo_So(k->daTa) - KySo_So(p->daTa) - nho;
			if (da < 0) {
				nho = 1;
				kq.push(So_KySo(da + 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			k = k->pNext;
			p = p->pNext;
		}
		else if (k != NULL && p == NULL) {
			int da = KySo_So(k->daTa) - nho;
			if (da < 0) {
				nho = 1;
				kq.push(So_KySo(da + 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			k = k->pNext;
		}

		else if (k == NULL && p != NULL)
		{
			int da = KySo_So(p->daTa) - nho;
			if (da < 0) {
				nho = 1;
				kq.push(So_KySo(da + 10));
			}
			else {
				nho = 0;
				kq.push(So_KySo(da));
			}
			p = p->pNext;
		}
		else if (k == NULL && p == NULL)
			break;

	}
	char temp[100];
	Chep_Stack_Sang_Chuoi(kq, temp);
	Chep_Chuoi_Sang_Stack(kq, temp);

	return kq;
}