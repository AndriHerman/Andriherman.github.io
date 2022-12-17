#include <iostream>

using namespace std;

int hashing[5];//elemen hashing dari 1-5

void inisialisasi()

{

for(int i=1;i<=5;i++)

{

hashing[i]=-1;

}

}

int cek_kosong()

{

int kosong=0;

for(int i=1;i<=5;i++)

{

if(hashing[i]==-1)

kosong++;

}

if(kosong!=0)

return 1;

else

return 0;

}

int pengacak()

{

int acak;

lagi:

acak=rand()%6;

if(acak==0)

goto lagi;

return acak;

}

void input(int input)

{

int indeks;

if(cek_kosong()==0)

{

cout<<"± Tempat penyimpan data penuh\n";

}

else

{

indeks=pengacak();

acak:

if(hashing[indeks]!=-1)

{

cout<<"± Terjadi tabrakan pada indeks : "<<indeks<<"\n";

if(indeks==5)

{

indeks=1;

cout<<"± Karena indeks = 5 maka indeks dikembalikan ke 1\n";

goto acak;

}

else

{

indeks++;

cout<<"± Tambah indeks menjadi "<<indeks<<endl;

}

goto acak;

}

else

{

hashing[indeks]=input;

cout<<"± Data masuk pada indeks "<<indeks<<endl;

}

}

}

void searching(int cari)

{

int temu=0;

for(int i=1;i<=5;i++)

{

if(hashing[i]==cari)

temu=1;

}

if(temu==1)

cout<<"± Data ditemukan\n";

else

cout<<"± Data tidak ditemukan\n";

}

void hapus(int hapus)

{

int del=0;

for(int i=1;i<=5;i++)

{

if(hashing[i]==hapus)

{

del=1;

hashing[i]=-1;

}

}

if(del==0)

cout<<"± Data tidak ada\n";

else

cout<<"± Data terhapus\n";

}

void tampil()

{

for(int i=1;i<=5;i++)

{

cout<<"± Indeks ke "<<i<<" : ";

if(hashing[i]!=-1)

cout<<hashing[i]<<endl;

else

cout<<"kosong\n";

}

}

int main()

{

inisialisasi();

int pilihan,data;

do

{

menu:

system("cls");

cout<<"±±±±±±±±±±±±±±±±±±±±±±±\n";

cout<<"±                     ±\n";

cout<<"±   PROGRAM HASHING   ±\n";

cout<<"±                     ±\n";

cout<<"±±±±±±±±±±±±±±±±±±±±±±±\n";

cout<<"±                     ±\n";

cout<<"± Programmer : Andrian Suherman Sistem Informasi Universitas Panca Sakti Bekasi\n";

cout<<"± 1.Input data        ±\n";

cout<<"± 2.Searching data    ±\n";

cout<<"± 3.Delete data       ±\n";

cout<<"± 4.Tampilkan data    ±\n";

cout<<"± 5.Keluar            ±\n";

cout<<"±                     ±\n";

cout<<"±±±±±±±±±±±±±±±±±±±±±±±\n";

cout<<"± Pilihan : ";

cin>>pilihan;

switch(pilihan)

{

case 1:

cout<<"± Masukkan data (harus positif) : ";

cin>>data;

if(data<0)

{

cout<<"± Data tidak boleh negatif\n";

cout<<"±\n± ";system("pause");

goto menu;

}

input(data);

cout<<"±\n± ";system("pause");

break;

case 2:

cout<<"± Masukkan data yang dicari : ";

cin>>data;

searching(data);

cout<<"±\n± ";system("pause");

break;

case 3:

cout<<"± Masukkan data yang dihapus : ";

cin>>data;

hapus(data);

cout<<"±\n± ";system("pause");

break;

case 4:

tampil();

cout<<"±\n± ";system("pause");

break;

}

}while(pilihan!=5);

}