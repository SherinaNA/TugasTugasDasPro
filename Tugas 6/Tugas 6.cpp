//judul
//Buatlah program perhitungan aritmatika
// a. Perkalian
// b. Pembagian
// c. Pengurangan
// d. Penjumlahan
// dari  point d, tentukkan hasilnya bilangan ganjil atau genap (menggunakan if)

#include <iostream>
using namespace std;

//kamus
int bil1, bil2, kali, bagi, kurang, tambah;
//deskripsi
main ()
{
    cout << "Program Perhitungan Aritmatika." << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Masukkan nilai a = "; cin >> bil1;
    cout << "Masukkan nilai b = "; cin >> bil2;
    cout << endl;
    cout << "Hasil dari perhitungan aritmatikanya adalah : " << endl;
    kali = bil1 * bil2;
    cout << "a. Hasil dari (" << bil1 << ") x (" << bil2 << ") = " << kali << endl;
    bagi = bil1 / bil2;
    cout << "b. Hasil dari (" << bil1 << ") : (" << bil2 << ") = " << bagi << endl;
    kurang = bil1 - bil2;
    cout << "c. Hasil dari (" << bil1 << ") - (" << bil2 << ") = " << kurang << endl;
    tambah = bil1 + bil2;
    cout << "d. Hasil dari (" << bil1 << ") + (" << bil2 << ") = " << tambah << endl;
    if (tambah % 2 == 0)
    {
        cout << "Maka dapat disimpulkan bahwa dari point (d), hasilnya merupakan bilangan Genap";
    }
    else
    {
        cout << "Maka dapat disimpulkan bahwa dari point (d), hasilnya merupakan bilangan Ganjil";
    }
}
