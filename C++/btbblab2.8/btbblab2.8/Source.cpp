#include<iostream>
using namespace std;
double WindChill(double t, double v);
int main() {
	double t, v;
	while (true) {
		cout << "\nNhap gia tri t : ";
		cin >> t;
		cout << "\nNhap gia tri v : ";
		cin >> v;
		if (t >= -50 && t <= 50|| v >= 3 && v <= 120) {
			break;
		}
		
	}
	cout << "\ndo lanh cua gio la : " << WindChill(t, v);

	system("pause");
	return 0;
}
double WindChill(double t, double v) {
	double w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * v * 0.16;
	return w;
}