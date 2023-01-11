//judul
//simulasi menyimpulkan sebuah penyakit dari gejalanya
//oleh sherina na
//2 okt 2022

#include <iostream>
#include <string>
using namespace std;

//kamus
string Gejala1, Gejala2, Gejala3;

//deskripsi
int main()
{
   cout << "  Bantu dokter umum menentukan diagnosa dari suatu penyakit. " << endl;
   cout << "=============================================================" << endl;
   cout << endl;
   cout << "Gejala - Gejala yang biasa terjadi : " << endl;
   cout << "1 . Demam" << endl;
   cout << "2 . Batuk" << endl;
   cout << "3 . Pilek" << endl;
   cout << "4 . Nyeri Otot" << endl;
   cout << "5 . Ruam" << endl;
   cout << "6 . Diare" << endl;
   cout << "7 . Dehidrasi" << endl;
   cout << "8 . Tenggorokan Gatal" << endl;
   cout << "9 . Leher Kaku" << endl;
   cout << "10. Pusing" << endl;
   cout << "============================================================" << endl;
   cout << endl;
   cout << "Masukkan Gejala - Gejala yang dialami:" << endl;
   cout << endl;
   cout << "Masukkan Gejala 1: "; getline(cin, Gejala1);
   cout << "Masukkan Gejala 2: "; getline(cin, Gejala2);
   cout << "Masukkan Gejala 3: "; getline(cin, Gejala3);
   cout << endl;
   cout << "============================================================" << endl;

/*
Demam & Batuk & Pilek             = Influenza
Demam & Betuk & Nyeri Otot        = Covid-19
Demam & Nyeri & Otot, Ruam        = Demam Berdarah
Demam & Diare & Dehidrasi         = Tifus
Demam & Tenggorokan Gatal & Batuk = Radang Tenggorokan
Demam & Leher Kaku & Pusing       = Sakit Kepala
*/

   if (Gejala1=="Demam" && Gejala2=="Batuk" && Gejala3=="Pilek") // Penyakit 1
   {
       cout << "Maka Diagnosa penyakitnya adalah = Influenza";
   }
   else if (Gejala1=="Demam" && Gejala2=="Batuk" && Gejala3=="Nyeri Otot") // Penyakit 2
   {
       cout << "Maka Diagnosa penyakitnya adalah = Covid-19";
   }
   else if (Gejala1=="Demam" && Gejala2=="Nyeri Otot" && Gejala3=="Ruam") // Penyakit 3
   {
       cout << "Maka Diagnosa penyakitnya adalah = Demam Berdarah";
   }
   else if (Gejala1=="Demam" && Gejala2=="Diare" && Gejala3=="Dehidrasi") // Penyakit 4
   {
       cout << "Maka Diagnosa penyakitnya adalah = Tifus";
   }
   else if (Gejala1=="Demam" && Gejala2=="Tenggorokan Gatal" && Gejala3=="Batuk") // Penyakit 5
   {
       cout << "Maka Diagnosa penyakitnya adalah = Radang Tenggorokan";
   }
   else if (Gejala1=="Demam" && Gejala2=="Leher Kaku" && Gejala3=="Pusing") // Penyakit 6
   {
       cout << "Maka Diagnosa penyakitnya adalah = Sakit Kepala";
   }
   else
   {
       cout << "Anda disarankan untuk dirujuk ke dokter spesialis.";
   }
   cout << endl;
   cout << "Silahkan tebus obat Anda di apotek dengan menyerahkan resep." << endl;
   cout << "Terima kasih atas kunjungan Anda." << endl;
   cout << "============================================================" << endl;

    return 0;
}
