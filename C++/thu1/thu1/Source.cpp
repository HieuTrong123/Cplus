#include<iostream>
using namespace std;
void main() {
	int a, b = 4, c = 1, x;
	double y;
	a = b++ + c++;
	/*cout << endl << a;
	cout << endl << b;
	cout << endl << c;*/
	a += b + ++c;
	/*cout << endl << a;
	cout << endl << b;
	cout << endl << c;*/
	a += a += a;
	//cout << endl << a;
	a = (b >= c) ? 2 : 3;
	/*cout << endl << a;
	cout << endl << b;
	cout << endl << c;*/
	x = a < c;
	/*cout << endl << a;
	cout << endl << c;
	cout << endl << x;*/
	x = a << c;
	/*cout << endl << a;
	cout << endl << c;
	cout << endl << x;*/
	x = c / 2;
	//cout << endl << x;
	x = (double)c / 2;
	//cout << endl << x;
	y = c / 2;
	//cout << endl << y;
	y = (double)c / 2;
	cout << endl << y;
	system("pause");
}