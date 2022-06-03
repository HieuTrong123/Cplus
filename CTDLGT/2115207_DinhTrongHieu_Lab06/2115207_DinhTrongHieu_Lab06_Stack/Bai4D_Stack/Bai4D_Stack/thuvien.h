typedef char Data;
#define MAX 100
struct NODE
{
	Data info;
	NODE* pNext;
};
struct  STACK
{
	NODE* pHead;
	NODE* pTail;
};
NODE* GetNode(Data x);
void CreatStack(STACK& s);
void Push(STACK& s, Data x);


NODE* GetNode(Data x)
{
	NODE* p;
	p = new NODE;
	if (p != NULL)
	{
		p->info = x;
		p->pNext = NULL;
	}
	return p;
}
//Tao DS rong
void CreatStack(STACK& s)
{
	s.pHead = s.pTail = NULL;
}
//Ham chen x vao dau s
void Push(STACK& s, Data x)
{
	NODE* new_ele = GetNode(x);
	if (new_ele == NULL)
	{
		cout << "\nsoi cap phat bo nho! khong thuc hien duoc thao tac nay";
		return;
	}
	if (s.pHead == NULL)
	{
		s.pHead = new_ele; s.pTail = s.pHead;
	}
	else
	{
		new_ele->pNext = s.pHead;
		s.pHead = new_ele;
	}
}
Data Pop(STACK& s)
{
	Data x;
	NODE* p;
	if (s.pHead == NULL)
	{
		return NULL;
	}
	x = s.pHead->info;
	p = s.pHead;
	s.pHead = s.pHead->pNext;
	delete p;
	if (s.pHead == NULL)
		s.pTail = NULL;
	return x;
}
//================================================
int LaKySo(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	return 0;
}

void Chen_Cuoi_Chuoi(char sout[], char c) {
	int i;
	for (i = 0; sout[i] != NULL; i++) {

	}
	sout[i] = c;
	sout[++i] = NULL;


}
int LaToanTu(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return 1;
	return 0;
}
int Do_UuTien_ToanTu(char c) {
	if (c == '*' || c == '/' || c == '%')
		return  2;
	else if (c == '+' || c == '-')
		return 1;
	return 0;
}
void TrungTo_HauTo(char sin[MAX], char sout[MAX])
{
	STACK s;//stack luu cac toan tu
	char c; //Ky tu hien hanh - dang xet
	Data x; //luu toan tu o dinh stack trong thao tac Pop(s);
	int i; //duyet chuoi vao : sin
	CreatStack(s);
	// duyet tu trai sang phai cac ptu cua bieu thuc trung to P
	for (i = 0; sin[i] != NULL; i++)
	{
		c = sin[i];//ky tu dang xet
		if (LaKySo(c) == 1) //la ky so : toan hang
			Chen_Cuoi_Chuoi(sout, c); //chen c vao cuoi sout
		else
			if (c == '(')
				Push(s, c);//day '(' vao stack s
			else
				if (c == ')')
				{
					x = Pop(s);
					while (x != '(')
					{
						Chen_Cuoi_Chuoi(sout, x);
						x = Pop(s);
					}
				}
				else // la toan hang
				{
					while (s.pHead != NULL && LaToanTu(s.pHead->info) == 1)
						if (Do_UuTien_ToanTu(s.pHead->info) >= Do_UuTien_ToanTu(c))
						{
							x = Pop(s);
							Chen_Cuoi_Chuoi(sout, x);
						}
						else
							break;
					//Push toan tu dang xet vao s
					Push(s, c);
				}
	}//da het sin
	while (s.pHead != NULL) //lay cac toan tu trong s chen vao cuoi sout
	{
		x = Pop(s);
		Chen_Cuoi_Chuoi(sout, x);
	}
}
