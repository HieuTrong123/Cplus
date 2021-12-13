#define MAX 100
void Doi_Tien(double temp[], double b[MAX][MAX], double n);
void Xuat_USD(double temp[], double b[MAX][MAX], double n);
void Xuat_JPY(double temp[], double b[MAX][MAX], double n);
void Xuat_VND(double temp[], double b[MAX][MAX], double n);
void Xuat_NZD(double temp[], double b[MAX][MAX], double n);
void Xuat_ZAR(double temp[], double b[MAX][MAX], double n);
void Xuat_CAD(double temp[], double b[MAX][MAX], double n);
void Xuat_AUD(double temp[], double b[MAX][MAX], double n);
void Xuat_INR(double temp[], double b[MAX][MAX], double n);
void Xuat_GBP(double temp[], double b[MAX][MAX], double n);
void Xuat_EUR(double temp[], double b[MAX][MAX], double n);
void Doi_Tien(double temp[], double b[MAX][MAX], double n) {
   
    int m = 0;
    int tam = 0;
    
    cout <<  "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10;i++) {
        for (int j = 0; j < 10;j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 0; i < m;i++) {
        cout << temp[i] << '\t';
        tam++;
        if (tam == 10) {
            cout << endl;
            tam = 0;
        }
    }
}
void Xuat_USD(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_EUR(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 10; i < 20; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_GBP(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 20; i < 30; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_INR(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 30; i < 40; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_AUD(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 40; i < 50; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_CAD(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 50; i < 60; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_ZAR(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 60; i < 70; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_NZD(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 70; i < 80; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_VND(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 80; i < 90; i++) {
        cout << temp[i] << '\t';
    }
}
void Xuat_JPY(double temp[], double b[MAX][MAX], double n) {
    int m = 0;
    int tam = 0;

    cout << "\nUSD" << "\tEUR" << "\tGBP" << "\tINR" << "\tAUD" << "\tCAD" << "\tZAR" << "\tNZD" << "\tJPY" << "\tVND";
    cout << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            temp[m] = n * b[i][j];
            m++;
        }
    }
    for (int i = 90; i < 100; i++) {
        cout << temp[i] << '\t';
    }
}