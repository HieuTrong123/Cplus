struct nhom
{
	char ns[5];
	int stt;
};
typedef nhom Data;//Kieu thanh phan du lieu cua nut
struct tagNode //Kieu Nut
{
	Data info;
	tagNode* pNext;
};
typedef tagNode NODE;
//Kieu DSLK don
struct QUEUE
{
	NODE* pHead; 
		NODE * pTail;
};
//=======================================================
NODE* GetNode(Data x) {
	NODE* p = new NODE;
	p->info = x;
	p->pNext = NULL;
	return p;
}
void CreatQueue(QUEUE& q) {
	q.pHead = q.pTail = NULL;
}
void EnQueue(QUEUE& q, Data x) {
	NODE* p = GetNode(x);
	if (q.pHead == NULL) {
		q.pHead = p;
		q.pTail = q.pHead;

	}
	else {
		q.pTail->pNext = p;
		q.pTail = p;
	}
}
Data DeQueue(QUEUE& q) {
	Data null;
	null.ns[0] = NULL;
	null.stt = 0;
	NODE* p;
	Data x;
	if (q.pHead == NULL)
		return null;
	p = q.pHead;
	q.pHead = p->pNext;
	x = p->info;
	delete p;
	return x;

}
void TapTin_Queue(QUEUE& q) {
	ifstream in("test1.txt");
	if (!in)	
	cout << "\nthat bai\n";
	Data x;
	while (!in.eof()) {
		in >> x.ns;
		in >> x.stt;
		EnQueue(q, x);
	}
}
int SoNhom(QUEUE q) {
	int n = 0;
	for (NODE* k = q.pHead; k != NULL; k = k->pNext) {
		n++;
	}
	return n;
}
void XuatQueue(QUEUE q) {
	for (NODE* k = q.pHead; k != NULL; k = k->pNext) {
		cout << "\nnhom: " << k->info.ns << "thu tu truc: " << k->info.stt;
	}
}
void Sap_Tang_TTTruc(QUEUE& q) {
	for (NODE* k = q.pHead; k != NULL; k = k->pNext) {
		for (NODE* h = k->pNext; h != NULL; h = h->pNext) {
			if (k->info.stt > h->info.stt) {
				Data temp = k->info;
				k->info = h->info;
				h->info = temp;
			}
		}
	}
}
void XuatLichTruc(QUEUE& q, int m); //Xep va xuat Lich truc xoay vong n nhom trong m ngay
//========================================
//sn nhom truc xoay vong trong m ngay
void XuatLichTruc(QUEUE& q, int m)
{
	int i, sn;
	Data x;
	int vong = 1;
	sn = SoNhom(q); // so nhom : so nut trong q
	Sap_Tang_TTTruc(q);//dap tang q theo thu tu truc
	cout << "\nVong " << vong << " :\n";
	for (i = 1; i <= m; i++)
	{
		cout << setiosflags(ios::left);
		cout << setw(13) << "\nTruc ngay thu " << setw(4) << i << setw(10) << " la nhom : ";
		x = DeQueue(q);
		cout << setw(5);
		cout << x.ns;
		EnQueue(q, x);
		if (i % sn == 0)
		{
			cout << "\n================================";
			vong++;
			cout << "\nVong " << vong << " :\n";
		}
	}
	cout << endl;
}