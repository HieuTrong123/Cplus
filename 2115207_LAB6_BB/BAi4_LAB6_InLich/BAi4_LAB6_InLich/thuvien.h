int NgayMax(int month, int year);
void In_Lich(int a[], int month, int year);
int NgayMax(int month ,int year) {
	int day;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			day = 9;
		}
		else {
			day = 28;
		}
		break;

	}
	return day;
}
void In_Lich(int a[],int month,int year) {
	int JMD,
		day=NgayMax(month,year);
	
	JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
		(365 * (year + 4800 - ((14 - month) / 12))) +
		((year + 4800 - ((14 - month) / 12)) / 4) -
		((year + 4800 - ((14 - month) / 12)) / 100) +
		((year + 4800 - ((14 - month) / 12)) / 400) - 32045) % 7;
	cout << JMD;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (7 * i + j + 1 <= day) {
				a[7 * i + j + JMD] = 7 * i + j + 1;
			}
		}
	}
	for (int i = 0; i < JMD; i++)
		a[i] = 32;
	for (int i = day + JMD; i < 42; i++)
		a[i] = 32;
	cout << "----\n\nLich thang " << month << "\\" << year << "\n------\n\n";
	cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat\n\n";
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (a[7 * i + j] == 32)
				cout << "\t";
			else
				cout << a[7 * i + j] << "\t";
		}
		cout << "\n";
	}
}