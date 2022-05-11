NODE* GetNode(data x);
void CreatStack(STACK& s);
void Push(STACK& s, data x);

// ham kiem tra toan tu
int LaToanTu(char c);
//Kiem tra toan hang - chi can kiem tra co phai la ky so
int LaKySo(char c);

//Đổi ký tự số thành số
int So(char c)
{
	return c - '0';
}
//Tính giá trị biểu thức đại số dạng hậu tố
int Tinh_BT_HauTo(char a[MAX])
{
	int i;
	char c;
	data x, y;
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