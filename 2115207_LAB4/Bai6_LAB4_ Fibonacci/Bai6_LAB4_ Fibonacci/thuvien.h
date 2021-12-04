#define MAX 100
void Fibonacci_Thu_n(int a[], int n);
void Be_Hon_Bang_n(int a[], int n);

void Fibonacci_Thu_n(int a[] ,int n) {
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < MAX;i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	
	cout << a[n-1];
}
void Be_Hon_Bang_n(int a[] ,int n) {
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << "    ";
	}
}


