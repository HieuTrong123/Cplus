void DoiCoSo(int n, int b);
void DoiCoSo(int n, int b) {
	if (n == 0) {
		return;
	}
	else {
		int r = n % b;
		DoiCoSo(n / b, b);
		switch (r)
		{
		case 10:cout << "A";
			break;
		case 11:cout << "B";
			break;
		case 12:cout << "C";
			break;
		case 13:cout << "D";
			break;
		case 14:cout << "E";
			break;
		case 15:cout << "F";
			break;
		default:
			cout << r;
			break;
		}

	}
}