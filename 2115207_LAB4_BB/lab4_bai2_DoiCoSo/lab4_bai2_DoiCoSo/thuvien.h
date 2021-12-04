void DoiCoSo(int n, int b);
void Xuat(int so);
int TimLuyThua(int b, int n);
void Xuat(int so)
{
    if (0 <= so && so <= 15)
    {
        if (so <= 9)
            cout << so;
        else
        {
            char kyTu = 'A' + so - 10;
            cout << kyTu;
        }
    }
}

int TimLuyThua(int b, int n)
{
    int kq = 0;
    for (int i = 1; pow(b, i) <= n; i++)
    {
        kq = pow(b, i);
    }
    return kq;
}

void DoiCoSo(int n, int b)
{
    int v, so;
    v = TimLuyThua(b, n);
    while (v > 0)
    {
        if (n < v)
            Xuat(0);
        else
        {
            so = n / v;
            Xuat(so);
            n = n - so * v;
        }
        v = v / b;
    }
}