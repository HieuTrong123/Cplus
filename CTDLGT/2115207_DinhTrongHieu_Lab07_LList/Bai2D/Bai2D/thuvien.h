#pragma once
int TaoSoNgauNhien()
{
	int n;
	srand(time(NULL));
	n = rand() % MAX + 1;
	return n;
}
//ham tra ve con tro tro den nut thu n-1
NODE* Node_q(LLIST l, int n)
{
	NODE* q;
	int dem = 1;//dem nut da qua
	q = l.pHead;
	if (q != NULL)
	{
		while (dem < n - 1)
		{
			q = q->pNext;
			dem++;
		}
	}
	return q;
}
//Huy nut sau q : huy xong, chuyen nut ke tiep la nut dau, q la cuoi
void Remove_Node_After_q(LLIST& l, NODE* q)
{
	if (l.pHead == NULL)
	{
		cout << "\nDanh sach rong!";
		system("pause");
		return;
	}
	NODE* p = q->pNext;
}