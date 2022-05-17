#define MAX 100
#define NULLDATA ' '
typedef char Data;//Kieu thanh phan du lieu cua nut
struct tagNode //Kieu Nut
{
	Data info;
	tagNode* pNext;
};
typedef tagNode NODE;
//Kieu DSLK don
struct QUEUE
{
	NODE* pHead; //Chua dc nut dau
	NODE* pTail; //Chua dc nut cuoi
};
//======================================
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
Data DeQueue(QUEUE& q)
{
	NODE* p;
	Data x;
	if (q.pHead == NULL)
		return NULLDATA;
	p = q.pHead;
	x = p->info;
	q.pHead = q.pHead->pNext;
	delete p;
	if (q.pHead == NULL)
		q.pTail = NULL;
	return x;
}
void File_String(char a[MAX]) {
	ifstream in("test.txt");
	if (!in)
		cout << "\nthat bai\n";
	int n = 0;
	while (!in.eof()) {
		in >> a[n];
		a[++n] = NULL;
	}
	
	cout << "\nthanh cong\n";
}
void XuatQueue(QUEUE q) {
	for (NODE* k = q.pHead; k != NULL; k = k->pNext) {
		cout << k->info;
	}
	cout << '\t';
}
void XuLy_ThaoTac(char a[MAX])
{
	QUEUE q;
	CreatQueue(q);
	char c;
	int i;
	for (i = 0; a[i] != NULL; i++)
	{
		c = a[i];
		if ('A' <= c && c <= 'Z')
		{
			EnQueue(q, c);
			XuatQueue(q);
		}
		else
			if (c == '*')
			{
				if (DeQueue(q));
				XuatQueue(q);
			}
	}
	cout << "\nKet qua sau khi thuc hien chuoi thao tac \"" << a << "\":\n";
		XuatQueue(q);
	cout << endl;
	system("PAUSE");
}