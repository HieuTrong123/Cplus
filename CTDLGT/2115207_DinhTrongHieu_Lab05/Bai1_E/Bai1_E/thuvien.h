#pragma once
struct Data
{
	int data;
	Data* pNext;
};
struct Node
{
	Data* pHead;
	Data* ptail;
};
void KhoiTao(Node& a) {
	a.pHead = a.ptail = NULL;
}
Data* Tao(int x)
{
	Data* p;
	p = new Data;
	if (p != NULL)
	{
		p->data = x;
		p->pNext = NULL;
	}
	return p;
}
void TaoDuLieu(Node& a, int x) {

	Data* newDATA = Tao(x);
	if (a.pHead == NULL) {
		a.pHead = newDATA;
		a.ptail = a.pHead;
	}
	else {
		a.ptail->pNext = newDATA;
		a.ptail = newDATA;
	}
}
int TaoThongTin(Node& a, Node& b,Node& u) {
	KhoiTao(a);
	KhoiTao(b);
	KhoiTao(u);
	ifstream in("A.txt");
	if (!in)
		return 0;
	int x;
	while (!in.eof()) {
		in >> x;
		TaoDuLieu(a, x);
	}
	in.close();
	in.open("B.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		in >> x;
		TaoDuLieu(b, x);
	}
	in.close();
	in.open("U.txt");
	if (!in)
		return 0;
	while (!in.eof()) {
		in >> x;
		TaoDuLieu(u, x);
	}
	in.close();
	return 1;
}
void XemDuLieu(Node a) {
	for (Data* k = a.pHead; k != NULL; k = k->pNext) {
		cout << k->data << '\t';
	}
}
Node GiaoHaiTapHop(Node a, Node b) {
	Node c;
	KhoiTao(c);
	Data* p = a.pHead;
	int temp;
	int kt = 0;
	while (p != NULL) {
		for (Data* k = b.pHead; k != NULL; k = k->pNext) {
			if (p->data == k->data) {
				temp = k->data;
				kt = 1;
				break;
			}
		}
		if (kt == 1) {
			TaoDuLieu(c, temp);
			kt = 0;
		}

		p = p->pNext;
	}
	return c;
}
Node HopHaiTapHop(Node a, Node b) {
	int kq = 0;
	Data* p = b.pHead;
	while (p != NULL) {
		for (Data* k = a.pHead; k != NULL; k = k->pNext) {
			if (p->data == k->data) {
				kq = 1;
				break;
			}
		}
		if (kq == 0) {
			TaoDuLieu(a, p->data);
		}
		else {
			kq = 0;
		}
		p = p->pNext;
	}
	return a;
}
Node HieuHaiTapHop(Node a, Node b) {
	Node c = GiaoHaiTapHop(a, b);
	Node kq;
	KhoiTao(kq);
	int kt = 0;
	Data* p = a.pHead;
	while (p != NULL) {
		for (Data* k = c.pHead; k != NULL; k = k->pNext) {
			if (p->data == k->data) {
				kt = 1;
				break;
			}
		}
		if (kt == 0) {
			TaoDuLieu(kq, p->data);
		}
		else {
			kt = 0;
		}
		p = p->pNext;
	}
	return kq;
}
Node HieuDoiXung(Node a, Node b) {
	return HopHaiTapHop(HieuHaiTapHop(a, b), HieuHaiTapHop(b, a));
}
void Tich(Node a, Node b) {
	if(a.pHead == NULL || b.pHead == NULL)
		return;
	cout<<"A x B = {";
	for (Data*p = a.pHead; p != NULL; p = p->pNext)
	for (Data*q = b.pHead; q != NULL; q = q->pNext)
	{
	cout<<p->data<<","<< q->data;
	if (p != a.ptail || q != b.ptail)
	cout<< ',';
	}
	cout<< '}';
}
int KiemTraXcoThuocTapHop(Node a, int x) {
	for (Data* k = a.pHead; k != NULL; k = k->pNext) {
		if (k->data == x) {
			return 1;
		}
	}
	return 0;
}
int KiemTraBaoHam(Node a, Node b) {
	Data* p = b.pHead;
	while (p != NULL) {
		for (Data* k = a.pHead; k != NULL; k = k->pNext) {
			if (p->data == k->data) {
				return 1;
				
			}
		}
	
		p = p->pNext;
	}
	return 0;
}
int TinhLucLuong(Node a) {
	int Count = 0;
	for (Data* k = a.pHead; k != NULL; k = k->pNext) {
		Count++;
	}
	return Count;
}