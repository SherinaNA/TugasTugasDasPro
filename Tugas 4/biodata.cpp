//judul
//Program menampilkan Biodata
//oleh sherina na
//16 sept 2022

#include <iostream>
using namespace  std;

//kamus
string nama1, nama2;
string tempat;
string tanggal;
string nim;
string negara;
string kelamin;
string goldar;
string hobi;


//deskripsi
main()
{
    cout << "Biodata Diri" << endl;
    cout << "============" << endl;
    cout << endl;
    cout << "Nama Lengkap             : "; getline(cin, nama1);
    cout << "Nama Panggilan           : "; getline(cin, nama2);
    cout << "Tempat Lahir             : "; getline(cin, tempat);
    cout << "Tanggal Lahir            : "; getline(cin, tanggal);
    cout << "NIM                      : "; getline(cin, nim);
    cout << "Kewarganegaraan          : "; getline(cin, negara);
    cout << "Jenis Kelamin            : "; getline(cin, kelamin);
    cout << "Golongan Darah           : "; getline(cin, goldar);
    cout << "Hobi                     : "; getline(cin, hobi);
}
