#define MAX 100
void File_Array(char* filename, int a[MAX], int& n);
//Đọc dữ liệu trong tập tin filename ghi vào mảng a
void File_Array(char* filename, int a[MAX], int& n)
{
	int i;
	ifstream in(filename); //Mo tập tin filename de doc
	if (!in) //Kiểm tra việc mở tập tin
	{
		cout << "\nLoi mo file !";
		return;
	}
	in >> n; //đọc dữ liệu đầu tiên của tập tin (hàng đầu), luu vao n.
	//n la kích thước mảng
	for (i = 0; i < n; i++)
	{
		in >> a[i]; // lần lượt đọc dữ liệu tập tin ghi vảo mảng 1 chiều arr
	}
	in.close();
}