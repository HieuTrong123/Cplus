struct Vector {
	double x;
	double y;
	double z;
};
void NhapToaDo(Vector& a);
void XemVecTor(Vector a, char kt);
double TinhDoDai(Vector a);
bool KiemTra2VectorBangNhau(Vector a, Vector b);
Vector TinhTong(Vector u, Vector v);
void NhapToaDo(Vector &a) {
	cout << "\nnhap x : ";
	cin >> a.x;
	cout << "\nnhap y : ";
	cin >> a.y;
	cout << "\nnhap z : ";
	cin >> a.z;
}
void XemVecTor(Vector a,char kt) {
	cout <<"\ntoa do " << kt << "( " << a.x << " ; " << a.y <<" ; "<<a.z << " )";
}
double TinhDoDai(Vector a) {
	return sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2));
}
bool KiemTra2VectorBangNhau(Vector a,Vector b) {
	double kq;
		kq = (a.x * b.x + a.y * b.y + a.z * b.z) /
		(sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2)) * sqrt(pow(b.x, 2) + pow(b.y, 2) + pow(b.z, 2)));
	if (TinhDoDai(a) == TinhDoDai(b) && kq == 1) {
		return true;
	}
	else return false;
}
Vector TinhTong(Vector u,Vector v) {
	Vector c;
	c.x = u.x + v.x;
	c.y = u.y + v.y;
	c.z = u.z + v.z;
	return c;
}
Vector TinhHieu(Vector u, Vector v) {
	Vector c;
	c.x = u.x - v.x;
	c.y = u.y - v.y;
	c.z = u.z - v.z;
	return c;
}
Vector TinhTich(Vector u,double k) {
	Vector c;
	c.x = k * u.x;
	c.y = k * u.y;
	c.z = k * u.z;
	return c;
}
double TichVoHuong(Vector u,Vector v) {
	return (u.x * v.x + u.y * v.y + u.z * v.z);
}