struct NODE
{
	char info;
	NODE* pNext;
};
struct STACK
{
	NODE* pHead;
	NODE* pTail;
};
NODE* GetNode(char x);
void CreatStack(STACK& s);
void Push(STACK& s, char x);

// ham kiem tra toan tu
int LaToanTu(char c);
//Kiem tra toan hang - chi can kiem tra co phai la ky so
int LaKySo(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	return 0;
}
int LaToanTu(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return 1;
	return 0;
}
void CreatStack(STACK& s) {
	s.pHead = s.pTail = NULL;
}
NODE* GetNode(char x) {
	NODE* newNODE = new NODE;
	newNODE->info = x;
	newNODE->pNext = NULL;
	return newNODE;
}
void Push(STACK& s, char x) {
	NODE* p = GetNode(x);
	if (s.pHead == NULL) {
		s.pHead = p;
		s.pTail = s.pHead;
	}
	else {
		p->pNext = s.pHead;
		s.pHead = p;
	}
}
char Pop(STACK s) {
	char x;
	NODE* p;
	if (s.pHead == NULL) {
		cout << "\nSTACk rong";
		return NULL;
	}
	else {
		p = s.pHead;
		x = p->info;
		s.pHead = p->pNext;
		delete p;
		return x;
	}
}


//Đổi ký tự số thành số
int So(char c)
{
	return c - '0';
}
int LaKySo(char c) {
	return c + '0';
}
//Tính giá trị biểu thức đại số dạng hậu tố
int Tinh_BT_HauTo(char a[])
{
	int i;
	char c;
	char x, y;
	STACK s;
	CreatStack(s);
		for (i = 0; a[i] != NULL; i++)
		{
			c = a[i];
			if (LaKySo(c) == 1)
			{
				x = So(c);
				Push(s, x);
			}
			else //toan tu
			{
				x = Pop(s);
				y = Pop(s);
				switch (c)
				{
				case '+':
					Push(s, y + x);
					break;
				case '-':
					Push(s, y - x);
					break;
				case '*':
					Push(s, y * x);
					break;
				case '/':
					Push(s, y / x);
					break;
				case '%':
					Push(s, y % x);
					break;
				}
			}
		}//Ket thuc bieu thuc hau to
	return s.pHead->info; //Gia tri bieu thuc hau to
}