//judul
//program deteksi prodi mahasiswa berdasarkan nim
//oleh sherina na
//5 okt 2022

#include <iostream>
using namespace std;

//kamus
char KodeFak;
int jenjang, prodi;
string fullnim;

//deskripsi
int main ()
{
    cout << "Aplikasi Deteksi Program Studi di UDINUS" << endl;
    cout << "Masukkan NIM Mahasiswa         : "; cin >> fullnim;
    cout << "Masukkan Kode Awal NIM [A-E]   : "; cin >> KodeFak;
    cout << "Masukkat Kode Kedua NIM [1-2]  : "; cin >> jenjang;
    cout << "Masukkan Kode Ketiga NIM [1-6] : "; cin >> prodi;
    cout << endl;

    switch(KodeFak)
    {
        case 'A' :
            {
                cout << "Mahasiswa tersebut berada di Fakultas Ilmu Komputer, ";
                switch (jenjang)
                {
                    case 1 :
                        {
                            cout << "mengambil jenjang S1, ";
                            break;
                        }
                    case 2 :
                        {
                            cout << "mengambil jenjang D3, ";
                            break;
                        }
                    default :
                        {
                            cout << " -, ";
                            break;
                        }
                }
                            switch (prodi)
                            {
                                case 1 :
                                    {
                                        cout << "dengan program studi Teknik Informatika.";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "dengan program studi Sistem Informasi.";
                                        break;
                                    }
                                case 3 :
                                    {
                                        cout << "dengan program studi Desain Komunikasi Visual.";
                                        break;
                                    }
                                case 4 :
                                    {
                                        cout << "dengan program studi Ilmu Komunikasi.";
                                        break;
                                    }
                                case 5 :
                                    {
                                        cout << "dengan program studi Film dan Televisi.";
                                        break;
                                    }
                                case 6 :
                                    {
                                        cout << "dengan program studi Animasi.";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "-.";
                                        break;
                                    }

                            }
                break;
            }
        case 'B' :
            {
              cout << "Mahasiswa tersebut berada di Fakultas Ekonomi Bisnis, ";
              switch (jenjang)
                {
                    case 1 :
                        {
                            cout << "mengambil jenjang S1, ";
                            break;
                        }
                    default :
                        {
                            cout << "-, ";
                            break;
                        }
                }
                            switch (prodi)
                            {
                                case 1 :
                                    {
                                        cout << "dengan program studi Manajemen.";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "dengan program studi Akuntasi.";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "-.";
                                        break;
                                    }

                            }
              break;
            }
        case 'C' :
            {
              cout << "Mahasiswa tersebut berada di Fakultas Ilmu Budaya, ";
              switch (jenjang)
                {
                    case 1 :
                        {
                            cout << "mengambil jenjang S1, ";
                            break;
                        }
                    default :
                        {
                            cout << "-, ";
                            break;
                        }
                }
                            switch (prodi)
                            {
                                case 1 :
                                    {
                                        cout << "dengan program studi Bahasa Inggris.";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "dengan program studi Bahasa Jepaang.";
                                        break;
                                    }
                                case 3 :
                                    {
                                        cout << "dengan program studi Perhotelan .";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "-.";
                                        break;
                                    }

                            }
              break;
            }
        case 'D' :
            {
              cout << "Mahasiswa tersebut berada di Fakultas Kesehatan, ";
              switch (jenjang)
                {
                    case 1 :
                        {
                            cout << "mengambil jenjang S1, ";
                            break;
                        }
                    default :
                        {
                            cout << "-, ";
                            break;
                        }
                }
                            switch (prodi)
                            {
                                case 1 :
                                    {
                                        cout << "dengan program studi Kesehatan Publik.";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "dengan program studi Kesehatan Masyarakat.";
                                        break;
                                    }
                                case 3 :
                                    {
                                        cout << "dengan program studi Rekam Medis dan Informasi Kesehatan.";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "-.";
                                        break;
                                    }

                            }
              break;
            }
        case 'E' :
            {
              cout << "Mahasiswa tersebut berada di Fakultas Teknik, ";
              switch (jenjang)
                {
                    case 1 :
                        {
                            cout << "mengambil jenjang S1, ";
                            break;
                        }
                    default :
                        {
                            cout << "-, ";
                            break;
                        }
                }
                            switch (prodi)
                            {
                                case 1 :
                                    {
                                        cout << "dengan program studi Teknik Elektro.";
                                        break;
                                    }
                                case 2 :
                                    {
                                        cout << "dengan program studi Teknik Industri.";
                                        break;
                                    }
                                case 3 :
                                    {
                                        cout << "dengan program studi Teknik Biomedis.";
                                        break;
                                    }
                                default :
                                    {
                                        cout << "-.";
                                        break;
                                    }

                            }
              break;
            }
        default :
            {
              cout << "Bukan termasuk Program Studi di Udinus. ";
              break;
            }
    }

    return 0;
}

