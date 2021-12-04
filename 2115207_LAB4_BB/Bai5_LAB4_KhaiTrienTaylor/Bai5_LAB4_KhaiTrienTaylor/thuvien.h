double EMuX(double x);
double SinX(double x);
double CosX(double x);
double EMuX(double x)
{
    double ketQua = 1, phanSo = 1;
    double giaiThua = 1, luyThua = 1;
    for (int i = 1; phanSo >= 10e-5; i++)
    {
        giaiThua *= i;
        luyThua *= x;
        phanSo = luyThua / giaiThua;
        ketQua += phanSo;
    }
    return ketQua;
}
double SinX(double x)
{
    double ketQua = 0, phanSo = 1, luyThua = 1, giaiThua = 1;
    int dau = 0; 
    for (int i = 1; phanSo >= 10e-5; i++)
    {
        luyThua *= x;
        giaiThua *= i;
        if (i % 2 != 0) 
        {
            phanSo = luyThua / giaiThua;
            if (dau % 2 == 0)
                ketQua += phanSo;
            else
                ketQua -= phanSo;
            dau++;
        }
    }
    return ketQua;
}

double CosX(double x)
{
    double ketQua = 1, phanSo = 1, luyThua = 1, giaiThua = 1;
    int dau = 0; 
    for (int i = 1; phanSo >= 10e-5; i++)
    {
        luyThua *= x;
        giaiThua *= i;
        if (i % 2 == 0) 
        {
            phanSo = luyThua / giaiThua;
            if (dau % 2 != 0)
                ketQua += phanSo;
            else
                ketQua -= phanSo;
            dau++;
        }
    }
    return ketQua;
}