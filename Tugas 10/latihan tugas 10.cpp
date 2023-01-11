//judul
//program menghitung kelipatan angka 6 (0-100)
//oleh sherina na
//5 okt 2022

#include <iostream>
using namespace std;

//kamus
int angka;

//deskripsi
int main()
{
    angka = 0;
    do
    {
      cout << angka << endl;
      angka = angka+6;
    }
    while (angka <= 100);
    return 0;
}
