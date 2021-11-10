//#include<iostream>
//#include<math.h>
//#include<conio.h>
//#include<iomanip>
//using namespace std;
////#define max  3600
////#define sixty  60
//
//void main()
//{
	/*int a, b, c;
	cout << "nhap gia tri cua a:" << endl;
	cin >> a;
	cout << "nhap gia tri cua b:" << endl;
	cin >> b;
	cout << "nhap gia tri cua c" << endl;
	cin >> c;
	float p, chuvi, dientich;
	p = (a + b + c) / 2;
	chuvi = a + b + c;
	dientich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << endl << "chu vi hinh tam giac la:" << chuvi;
	cout << endl << "dien tich hinh tam giac la:" << dientich;*/
	/*int n, phut , gio , giay ;
	cout << "nhap gia tri cua n" << endl;
	cin >> n;
	gio = n / max;
	phut = (n % max ) / sixty;
	giay = (n % max) % sixty;
	cout << endl << gio << '\:' << phut << '\:' << giay;*/
	/*int x, y;
	cout << "nhap gia tri cua x:" << endl;
	cin >> x;
	cout << "nhap gia tri cua y" << endl;
	cin >> y;
	cout << "gia tri cua x++ :" << x++;\
	cout << "\ngia tri cua x++ :" << x;*/
	/*int n;
	cout << "nhap gia tri cua n:";
	cin >> n;
	(n <= 999999999) ? (cout << "n="<<n) : (cout << "khong xac dinh");*/
	/*float x, y, n,p;*/
	/*cout << "nhap gia tri cua x:" << endl;
	cin >> x;
	cout << "nhap gia tri cua y:" << endl;
	cin >> y;
	cout << "nhap gia tri cua n:" << endl;
	cin >> n;
	p = pow(x, n) + pow(y, n);
	cout << endl << "gia tri cua x^n+y^n la :" << p;*/
	/*int a, b, h;
	cout << endl << "nhap gia tri cua a :";
	cin >> a;
	cout << endl << "nhap gia tri cua b :";
	cin >> b;
	cout << endl << "nhap gia tri cua h :";
	cin >> h;
	int chuvi, dientich, canhben;
	canhben = sqrt(pow((a - b) / 2, 2) + h * h);
		chuvi = a + b - 2 * canhben;
		dientich = ((a + b) * h) / 2;
		cout << endl << "dien tich hinh thang la :" << dientich;
		cout << endl << "chu vi hinh thang la :" << chuvi;
		cout << endl << "canh ben hinh thang la :" << canhben;*/
	/*cout << setiosflags(ios::left)
		<< setw(10) << "mssv" << setw(25) << "ho va ten" << setw(10) << "lop" << setw(10) << "diem tb" << setw(10) << "diem tl"<<endl;
	cout << setiosflags(ios::left) << setw(10) << "____" <<setw(25)<<"________________"<<setw(10)<<"_____"<<setw(10)<<"_____"<<setw(10)<<"_____"<< endl;
	cout << setiosflags(ios::left) 
		<< setw(10) << "1914775" << setw(25) << "Dinh Trong Dat" << setw(10) << "CTK43" << setw(10) << "10" << setw(10) <<setprecision(5)<< 10 << endl;
	cout << endl << setiosflags(ios::left) << setw(0) << "=========================================================";*/
	
	/*const float pi = 3.14;
	int r, h;
	cout << "nhap gia tri cua r" << endl;
		cin >> r;
		cout << "nhap gia tri cua h" << endl;
	cin >> h;
	int v, sxq, stp;
	v = pi * r * r * h;
	sxq = 2 * pi * r * h;
	stp = 2 * pi * r * r + 2 * pi * r * h;
	cout << "gia tri cua v la :" << v << endl;
	cout << "gia tri cua sxq la :" << sxq<< endl;
	cout << "gia tri cua stp la :" << stp << endl;*/
	/*int w, h, BMI;
	cout << endl << "nhap gia tri cua w la :";
	cin >> w;
	cout << endl << "nhap gia tri cua h la :";
	cin >> h;
	BMI = w / (h * h);
	cout << endl << " chỉ số khối cơ thể BMI la :" << BMI;*/
	/*int xa, xb, ya, yb, d;
	cout << endl << "gia tri cua xa la :";
	cin >> xa;
	cout << endl << "gia tri cua ya la :";
	cin >> ya;
	cout << endl << "gia tri cua xb la :";
	cin >> xb;
	cout << endl << "gia tri cua yb la :";
	cin >> yb;
	d = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
	cout << endl << "khoang cach la :" << d;*/
	/*float w, t, v;
	cout << endl << "nhap gia tri cua t :";
	cin >> t;
	cout << endl << "nhap gia tri cua v :";
	cin >> v;

	(3 <= v <= 120) ? (cout << endl<<"gia tri cua v la :" << v) : (cout << "khong co gia tri");
	(-50 <= t <= 50) ? (cout <<endl<< "gia tri cua t la :" << t) : (cout << "khong xac dinh");
	w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
	cout << endl << "gia tri cua w la :" << w;*/
//cout << setiosflags(ios::right) 
//<< setw(32) << "'  '"<<endl;
//cout << setiosflags(ios::right)
//<< setw(32) << "____" << endl;
//cout << setiosflags(ios::right)
//<< setw(32) << "(@@)" << endl;
//cout << setiosflags(ios::right)
//<< setw(31) << "/========\\/" << endl;
//cout << setiosflags(ios::right)
//<< setw(29) << "/ || %% ||" << endl;
//cout << setiosflags(ios::right)
//<< setw(29) << "*  ||----||" << endl;
//cout << setiosflags(ios::right)
//<< setw(29) <<"¥¥    ¥¥" << endl;
//cout << setiosflags(ios::right)
//<< setw(29) <<"\"\"    \"\""<< endl;
//int d, m, y, t, k, w, x;
//cout << endl << "nhap gia tri cua d :";
//cin >> d;
//cout << endl << "nhap gia tri cua m :";
//cin >> m;
//cout << endl << "nhap gia tri cua y :";
//cin >> y;
//t = y-(14-m) / 12;
//x = t+(t/4)-(t/100)+(t/400);
//k = m+12 * ((14-m) / 12)-2;
//w = (d + x + (31 * k) / 12)%7;
//cout << endl << "so thu trong tuan la :";
//if(w==0){
//	cout << "chu nhat"<<endl;
//}
//else if (w == 1) {
//	cout << "thu hai"<<endl;
//
//}
//else if (w == 2) {
//	cout << "thu ba"<<endl; 
//
//}
//else if (w == 3) {
//	cout << "thu tu"<<endl;
//
//}
//else if (w == 4) {
//	cout << "thu nam"<<endl;
//}
//else if (w == 5) {
//	cout << "thu sau"<<endl;
//
//}
//else if (w == 6) {
//	cout << "thu bay"<<endl;
//}



//	_getch();
//}
