//judul
//aplikasi krs khs
//oleh sherina na
//11 okt 2022

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//kamus
string fullnim, nama, matkul, prodi, prodi1, status, Huruf;
int jmatkul, nmr, sks, totalbobot, tugas, tugas1, uts, uts1, uas, uas1, Score;
float bobotnilai, ips, ProsentaseTugas, ProsentaseUTS, ProsentaseUAS;

//deskripsi
int main()
{
    cout << "======== Sistem Penilaian =======\n";
    cout << "===Universitas Dian Nuswantoro===\n";
    cout << endl;
    cout << "NIM    : "; getline(cin, fullnim);
    cout << "Nama   : "; getline(cin, nama);
    prodi = fullnim.substr(0,3);
    if(prodi == "A11")
    {
        prodi1 = "S1, Teknik Informatika.";
    }
    else if(prodi == "A12")
    {
        prodi1 = "S1, Sistem Informasi.";
    }
    else if(prodi == "A13")
    {
        prodi1 = "S1, Desain Komunikasi Visual.";
    }
    else if(prodi == "A14")
    {
        prodi1 = "S1, Ilmu Komunikasi.";
    }
    else if(prodi == "A15")
    {
        prodi1 = "S1, Film dan Televisi.";
    }
    else if(prodi == "A16")
    {
        prodi1 = "S1, Animasi.";
    }
    else if(prodi == "A21")
    {
        prodi1 = "D3, Teknik Informatika.";
    }
    else if(prodi == "B11")
    {
        prodi1 = "S1, Manajemen.";
    }
    else if(prodi == "B12")
    {
        prodi1 = "S1, Akuntansi.";
    }
    else if(prodi == "C11")
    {
        prodi1 = "S1, Sastra Inggris.";
    }
    else if(prodi == "C12")
    {
        prodi1 = "S1, Sastra Jepang.";
    }
    else if(prodi == "C13")
    {
        prodi1 = "S1, Perhotelan.";
    }
    else if(prodi == "D11")
    {
        prodi1 = "S1, Kesehatan Publik.";
    }
    else if(prodi == "D12")
    {
        prodi1 = "S1, Kesehatan Masyarakat.";
    }
    else if(prodi == "D23")
    {
        prodi1 = "D3, RMIK.";
    }
    else if(prodi == "E11")
    {
        prodi1 = "S1, Teknik Elektro.";
    }
    else if(prodi == "E12")
    {
        prodi1 = "S1, Teknik Industri.";
    }
    else if(prodi == "E13")
    {
        prodi1 = "S1, Teknik Biomedis.";
    }
    else
    {
        prodi1 = "Mungkin Bukan suatu Prodi di UDINUS.";
    }
    cout << "Prodi  : " << prodi1;
    cout << endl;
    cout << "==========================================================\n";
    cout << "Masukkan Jumlah Matkul     : "; cin >> jmatkul;

    nmr = 0;
    do
    {
        cin.ignore();
        cout << nmr+1 << ". Matkul " << nmr+1 << "                : "; getline(cin, matkul);
        cout << "   Jumlah SKS              : "; cin >> sks;
        cout << "   Status [T/P/TP]         : "; cin >> status;

        ProsentaseTugas = 0.2;
        ProsentaseUTS = 0.4;
        ProsentaseUAS = 0.4;

        if(status == "T" || status == "t")
        {
            cout << "   Masukkan Nilai Tugas    : "; cin >> tugas;
            cout << "   Masukkan Nilai UTS      : "; cin >> uts;
            cout << "   Masukkan Nilai UAS      : "; cin >> uas;
            Score = (ProsentaseTugas * tugas) + (ProsentaseUTS * uts) + (ProsentaseUAS * uas);
            cout << "   Nilai Angka             : " << Score << endl;
        }
        else if(status == "P" || status == "p")
        {
            cout << "   Masukkan Nilai Tugas    : "; cin >> tugas;
            cout << "   Masukkan Nilai UTS      : "; cin >> uts;
            cout << "   Masukkan Nilai UAS      : "; cin >> uas;
            Score = (ProsentaseTugas * tugas) + (ProsentaseUTS * uts) + (ProsentaseUAS * uas);
            cout << "   Nilai Angka             : " << Score << endl;
        }
        else
        {
            cout << "   Masukkan Nilai Tugas (T): "; cin >> tugas;
            cout << "   Masukkan Nilai Tugas (P): "; cin >> tugas1;
            cout << "   Masukkan Nilai UTS (T)  : "; cin >> uts;
            cout << "   Masukkan Nilai UTS (P)  : "; cin >> uts1;
            cout << "   Masukkan Nilai UAS (T)  : "; cin >> uas;
            cout << "   Masukkan Nilai UAS (P)  : "; cin >> uas1;
            Score = (ProsentaseTugas *((tugas + tugas1)/2)) + (ProsentaseUTS * ((uts + uts1)/2)) + (ProsentaseUAS * ((uas + uas1)/2));
            cout << "   Nilai Angka             : " << Score << endl;
        }

        if((Score >= 85) && (Score <= 100))
        {
            Huruf = "A";
        }
        else if((Score >= 80) && (Score < 85))
        {
            Huruf = "AB";
        }
        else if((Score >= 70) && (Score < 80))
        {
            Huruf = "B";
        }
        else if((Score >= 65) && (Score < 70))
        {
            Huruf = "BC";
        }
        else if((Score >= 60) && (Score < 65))
        {
            Huruf = "C";
        }
        else if((Score >= 50) && (Score < 60))
        {
            Huruf = "D";
        }
        else
        {
            Huruf = "E";
        }
        cout << "   Nilai Huruf             : " << Huruf << endl;
        cout << "==========================================================" << endl;
        nmr = nmr + 1;
    }
    while (nmr < jmatkul);

    return 0;
}
