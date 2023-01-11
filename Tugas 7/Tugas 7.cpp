//judul
//program menentukan rangking
//oleh sherina na
//30 sept 2022

#include <iostream>
using namespace std;

//kamus
int a, b, c, d, e;

//deskripsi
int main()
{
    cout << "Tentukan ranking dari masing-masing nilai." << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "Masukkan jumlah rata-rata nilai dari : " << endl;
    cout << "a. "; cin >> a;
    cout << "b. "; cin >> b;
    cout << "c. "; cin >> c;
    cout << "d. "; cin >> d;
    cout << "e. "; cin >> e;

    if (a > b && b > c && c > d && d > e) //1
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << c << ", " << d << ", " << e << ".\n";
    }
    else if (a > b && b > c && c > e && e > d) //2
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << c << ", " << e << ", " << d << ".";
    }
    else if (a > b && b > e && e > c && c > d) //3
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << e << ", " << c << ", " << d << ".";
    }
    else if (a > b && b > d && d > c && c > e) //4
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << d << ", " << c << ", " << e << ".";
    }
    else if (a > b && b > e && e > d && d > c) //5
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << e << ", " << d << ", " << c << ".";
    }
    else if (a > b && b > d && d > e && e > c) //6
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << b << ", " << d << ", " << e << ", " << c << ".";
    }
    else if (a > c && c > b && b > d && d > e) //7
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << b << ", " << d << ", " << e << ".";
    }
    else if (a > c && c > b && b > e && e > d) //8
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << b << ", " << e << ", " << d << ".";
    }
    else if (a > e && e > b && b > c && c > d) //9
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << b << ", " << c << ", " << d << ".";
    }
    else if (a > d && d > b && b > c && c > e) //10
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << b << ", " << c << ", " << e << ".";
    }
    else if (a > e && e > b && b > d && d > c) //11
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << b << ", " << d << ", " << c << ".";
    }
    else if (a > d && d > b && b > e && e > c) //12
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << b << ", " << e << ", " << c << ".";
    }
    else if (a > c && c > d && d > b && b > e) //13
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << d << ", " << b << ", " << e << ".";
    }
    else if (a > c && c > e && e > b && b > d) //14
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << e << ", " << b << ", " << d << ".";
    }
    else if (a > e && e > c && c > b && b > d) //15
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << c << ", " << b << ", " << d << ".";
    }
    else if (a > d && d > c && c > b && b > e) //16
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << c << ", " << b << ", " << e << ".";
    }
    else if (a > e && e > d && d > b && b > c) //17
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << d << ", " << b << ", " << c << ".";
    }
    else if (a > d && d > e && e > b && b > c) //18
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << e << ", " << b << ", " << c << ".";
    }
    else if (a > c && c > d && d > e && e > b) //19
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << d << ", " << e << ", " << b << ".";
    }
    else if (a > c && c > e && e > d && d > b) //20
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << c << ", " << e << ", " << d << ", " << b << ".";
    }
    else if (a > e && e > c && c > d && d > b) //21
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << c << ", " << d << ", " << b << ".";
    }
    else if (a > d && d > c && c > e && e > b) //22
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << c << ", " << e << ", " << b << ".";
    }
    else if (a > d && d > e && e > c && c > b) //23
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << d << ", " << e << ", " << c << ", " << b << ".";
    }
    else if (a > e && e > d && d > c && c > b) //24
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << a << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << a << ", " << e << ", " << d << ", " << c << ", " << b << ".";
    }
    else if (b > a && a > c && c > d && d > e) //25
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << c << ", " << d << ", " << e << ".";
    }
    else if (b > a && a > c && c > e && e > d) //26
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << c << ", " << e << ", " << d << ".";
    }
    else if (b > a && a > e && e > c && c > d) //27
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << e << ", " << c << ", " << d << ".";
    }
    else if (b > a && a > d && d > c && c > e) //28
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << d << ", " << c << ", " << e << ".";
    }
    else if (b > a && a > e && e > d && d > c) //29
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << e << ", " << d << ", " << c << ".";
    }
    else if (b > a && a > d && d > e && e > c) //30
    {
        cout << "Nilai  terbesar dari data tersebut adalah " << b << ".\n";
        cout << "Rangking 1, 2, 3, 4, 5 adalah " << b << ", " << a << ", " << d << ", " << e << ", " << c << ".";
    }

    return 0;
}
