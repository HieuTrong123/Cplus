#include<iostream>
using namespace std;

void Xoa(char a[], int vt) {
	int n = strlen(a);
	for (int i = vt + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	a[n - 1] = NULL;
}
int main()
{
	int* a=NULL, ** b=NULL;
	int n, m;
	a = &n;
	n = 15;
	b = &a;
	cout << **b;
	system("pause");
	return 0;
}
