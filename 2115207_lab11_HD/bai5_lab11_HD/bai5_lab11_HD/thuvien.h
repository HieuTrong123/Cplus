#define MAX 100
void Mat_File(const char* filename, int a[MAX][MAX], int n)
{
	ofstream out(filename);
	if (!out)
	{
		cout << "\nLoi mo file !";
		return;
	}
	out << n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		out << endl;
		for (j = 0; j < n; j++)
			out << a[i][j] << "\t";
	}
	out.close();
	cout << "\nLuu file thanh cong!";
}
//Xuât tập tin ma tran vuong ra màn hình
void File_Display2(const char* filename)
{
	int n, x;
	ifstream in(filename); //Mo de doc
	if (!in)
	{
		cout << "\nLoi mo file !";
		return;
	}
	in >> n;
	cout << n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			in >> x;
			cout << x << '\t';
		}
	}
	in.close();
}