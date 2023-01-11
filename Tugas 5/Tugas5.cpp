//judul
//tugas 5
//program sederhana input output
//oleh sherina na
//21 sept 2022

#include <iostream>
using namespace std;

//kamus
string nama, alamat, kelamin, kampus, jurusan;

//deskripsi
main()
{
    cout << "Masukkan Nama          : "; getline(cin, nama   );
    cout << "Masukkan Alamat        : "; getline(cin, alamat );
    cout << "Masukkan Jenis Kelamin : "; getline(cin, kelamin);
    cout << "Masukkan Kampus        : "; getline(cin, kampus );
    cout << "Masukkan Prodi         : "; getline(cin, jurusan);
    cout << endl;
    cout << "=========================" << endl;
    cout << "Ohh dia itu " << nama << ", yang alamatnya di " << alamat << " itu kan?" << endl;
    cout << "Dia itu " << kelamin << " kan?" << endl;
    cout << "Ya, iya lahh. Masa gitu aja nggak tahu sih kamu." << endl;
    cout << "Kuliah dimana dia sekarang ?" << endl;
    cout << "Itu di " << kampus << ", ambil  jurusan " << jurusan << ".";
}
