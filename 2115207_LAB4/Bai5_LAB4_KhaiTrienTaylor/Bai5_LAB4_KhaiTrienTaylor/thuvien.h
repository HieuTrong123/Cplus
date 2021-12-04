int GiaiThua(int n);
float exponential(int n, float x);
float Tinh_Cos(int n, float x);
float Tinh_Sin(int n, float x);
int GiaiThua(int n) {
    int tich = 1;
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            tich *= i;

        }
        return tich;
    }
}
float exponential(int n, float x)
{
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, i * 1.0) / GiaiThua(i * 1.0);
    }
    return sum;
}
float Tinh_Cos(int n, float x) {
    float sum = 0;
    int tam = 0;
    for (int i = 1; i < n;i=i+2) {
        if (tam == 0) {
            sum += pow(x, i * 1.0) / GiaiThua(i * 1.0);
            tam = 1;
        }
        else {
            sum -= pow(x, i * 1.0) / GiaiThua(i * 1.0);
            tam = 0;
        }
        
    }
    return sum;
}
float Tinh_Sin(int n, float x) {
    float sum = 0;
    int tam = 0;
    for (int i = 0; i < n; i = i + 2) {
        if (tam == 0) {
            sum -= pow(x, i * 1.0) / GiaiThua(i * 1.0);
            tam = 1;
        }
        else {
            sum += pow(x, i * 1.0) / GiaiThua(i * 1.0);
            tam = 0;
        }

    }
    return sum;
}