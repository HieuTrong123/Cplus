#define MAX 100
int File_Mat(char* filename, int a[MAX][MAX], int& n);
int File_Mat(char* filename, int a[MAX][MAX], int& n)
{
	ifstream in(filename); //Mo de doc
	if (!in)
		return 0;
	in >> n;
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			in >> a[i][j];
	in.close();
	return 1;
}