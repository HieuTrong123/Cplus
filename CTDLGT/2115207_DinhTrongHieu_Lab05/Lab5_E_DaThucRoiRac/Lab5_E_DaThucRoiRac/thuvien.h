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
//void HoanVi(Data& a, Data& b) {
//	Data temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void Sort_Expo(LIST& A) {
//	for (Node* k = A.pHead; k != NULL; k = k->pNext) {
//		for (Node* h = k->pNext; h != NULL; h = h->pNext) {
//			if (k->data.expo > h->data.expo) {
//				HoanVi(k->data, h->data);
//			}
//		}
//	}
//}
LIST Add(LIST A, LIST B) {
	LIST C;
	KhoiTaoList(C);
	Data x;
}