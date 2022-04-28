#pragma once
struct Data
{
	double coef;
	int expo;
};
struct Node
{
	Data data;
	Node* pNext;
};
struct LIST
{
	Node* pHead;
	Node* pTail;
};
void KhoiTaoList(LIST& a) {
	a.pHead = a.pTail = NULL;
}
Node* KhoiTaoNode(Data x) {
	Node* newNode = new Node;
	if (newNode != NULL) {
		newNode->data = x;
		newNode->pNext = NULL;
	}

	return newNode;
}
void ChenCuoi(LIST& l, Data x) {

	Node* newNode = KhoiTaoNode(x);
	if (l.pHead == NULL) {
		l.pHead = newNode;
		l.pTail = l.pHead;
	}
	else {
		l.pTail->pNext = newNode;
		l.pTail = newNode;
	}
}
int TaoDuLieu(LIST& A, LIST& B) {
	KhoiTaoList(A);
	KhoiTaoList(B);

	ifstream in("A.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		Data x;
		in >> x.coef;
		in >> x.expo;
		ChenCuoi(A, x);
	}
	in.close();
	in.open("B.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		Data x;
		in >> x.coef;
		in >> x.expo;
		ChenCuoi(B, x);
	}
	in.close();
	return 1;
}
void Output_Poly(LIST A)
{
	if (A.pHead == NULL)
	{
		cout << "\nDa thuc rong";
		return;
	}
	Node* p;
	//xu ly nhan tu dau tien, so mu co the == 0
	p = A.pHead;
	if (p->data.expo == 0) //so mu = 0
		cout << p->data.coef;
	else // so mu > 0 : >= 1
	{
		if (p->data.expo == 1) // so mu = 1
		{
			if (p->data.coef == 1) //he so == 1
				cout << "x ";
			else // he so !=1
				if (p->data.coef == -1)
					cout << "-x ";
				else
					cout << p->data.coef << "x ";
		}
		else //so mu > 1
		{
			if (p->data.coef == 1) //he so == 1
				cout << "x^" << p->data.expo << " ";
			else // he so !=1
				if (p->data.coef == -1)
					cout << "-x^" << p->data.expo << " ";
				else
					cout << p->data.coef << "x^" << p->data.expo << " ";
		}
	}
	//xu ly cac hang tu tiêp theo
	p = p->pNext;
	while (p != NULL)
	{
		//so mu > 0
		if (p->data.expo == 1) // so mu = 1
		{
			if (p->data.coef == 1) //he so == 1
				cout << "+x ";
			else // he so !=1
				if (p->data.coef == -1)
					cout << "-x ";
				else
					if (p->data.coef > 0)
						cout << "+ " << p->data.coef << "x ";
					else
						cout << p->data.coef << "x ";
		}
		else //so mu > 1
		{
			if (p->data.coef == 1) //he so == 1
				cout << "+x^" << p->data.expo << " ";
			else // he so !=1
				if (p->data.coef == -1)
					cout << "-x^" << p->data.expo << " ";
				else
					if (p->data.coef > 0)
						cout << "+ " << p->data.coef << "x^" << p->data.expo << " ";
					else //(he so < 0)
						cout << p->data.coef << "x^" << p->data.expo << " ";
		}
		p = p->pNext;
	}
}
void HoanVi(Data& a, Data& b) {
	Data temp;
	temp = a;
	a = b;
	b = temp;
}
void Sort_Expo(LIST& A) {
	for (Node* k = A.pHead; k != NULL; k = k->pNext) {
		for (Node* h = k->pNext; h != NULL; h = h->pNext) {
			if (k->data.expo > h->data.expo) {
				HoanVi(k->data, h->data);
			}
		}
	}
}
LIST Add(LIST A, LIST B) {
	Sort_Expo(A);
	Sort_Expo(B);
	LIST C;
	KhoiTaoList(C);
	Data x;
	Node* pA, * pB;
	pA = A.pHead;
	pB = B.pHead;
	while (pA != NULL && pB != NULL) {
		if (pA->data.expo < pB->data.expo) {

			ChenCuoi(C, pA->data);
			pA = pA->pNext;
		}
		else if (pA->data.expo > pB->data.expo) {
			ChenCuoi(C, pB->data);
			pB = pB->pNext;
		}
		else {
			x.coef = pA->data.coef + pB->data.coef;
			x.expo = pA->data.expo;
			if (x.coef != 0) {
				ChenCuoi(C, x);
			}
			pA = pA->pNext;
			pB = pB->pNext;
		}
	}
	while (pA != NULL) {
		ChenCuoi(C, pA->data);
		pA = pA->pNext;
	}
	while (pB != NULL) {
		ChenCuoi(C, pB->data);
		pB = pB->pNext;
	}
	return C;
}
LIST Hieu(LIST A, LIST B) {
	Sort_Expo(A);
	Sort_Expo(B);
	LIST C;
	KhoiTaoList(C);
	Data x;
	Node* pA, * pB;
	pA = A.pHead;
	pB = B.pHead;
	while (pA != NULL && pB != NULL) {
		if (pA->data.expo < pB->data.expo) {

			ChenCuoi(C, pA->data);
			pA = pA->pNext;
		}
		else if (pA->data.expo > pB->data.expo) {
			ChenCuoi(C, pB->data);
			pB = pB->pNext;
		}
		else {
			x.coef = pA->data.coef - pB->data.coef;
			x.expo = pA->data.expo;
			if (x.coef != 0) {
				ChenCuoi(C, x);
			}
			pA = pA->pNext;
			pB = pB->pNext;
		}
	}
	while (pA != NULL) {
		ChenCuoi(C, pA->data);
		pA = pA->pNext;
	}
	while (pB != NULL) {
		ChenCuoi(C, pB->data);
		pB = pB->pNext;
	}
	return C;
}
LIST NhanDonThucVaDaThuc(LIST A, Node* p) {
	LIST B;
	Data x;
	KhoiTaoList(B);
	Node* pA = A.pHead;
	while (pA != NULL) {
		x.coef = p->data.coef * pA->data.coef;
		x.expo = p->data.expo + pA->data.expo;
		ChenCuoi(B, x);
		pA = pA->pNext;
	}
	return B;
}
LIST NhanHaiDaThuc(LIST A, LIST B) {
	LIST c, t1, t2;
	KhoiTaoList(c);
	KhoiTaoList(t1);
	KhoiTaoList(t2);
	Node* pA;
	pA = A.pHead;
	while (pA != NULL) {
		t1 = NhanDonThucVaDaThuc(B, pA);
		t2 = Add(c, t1);
		c = t2;
		pA = pA->pNext;
	}
	return c;
}
LIST DaoHam(LIST A) {
	LIST kq;
	KhoiTaoList(kq);
	Node* pA = A.pHead;
	Data x;
	while (pA != NULL) {
		if (pA->data.expo == 0) {
			x.coef = 0;
			x.expo = 0;
		}
		else {
			x.coef = pA->data.coef * pA->data.expo;
			x.expo = pA->data.expo - 1;
		}
		if (x.coef != 0) {
			ChenCuoi(kq, x);
		}
		pA = pA->pNext;
	}
	return kq;
}
LIST TichPhan(LIST A) {
	LIST kq;
	KhoiTaoList(kq);
	Node* pA = A.pHead;
	Data x;
	while (pA != NULL) {
		if (pA->data.expo == 0) {
			x.coef = pA->data.coef;
			x.expo = 1;
		}
		else {
			x.coef = pA->data.coef / (pA->data.expo + 1);
			x.expo = pA->data.expo + 1;
		}
		if (x.coef != 0) {
			ChenCuoi(kq, x);
		}
		pA = pA->pNext;
	}
	return kq;
}
double GiaTriTaiX(LIST A,double x) {
	double kq=0;
	for (Node* k = A.pHead; k != NULL; k = k->pNext) {
		
		kq += k->data.coef * pow(x, k->data.expo);
	}
	return kq;
}