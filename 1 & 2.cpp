#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
    char kode[20], tahun[10], harga[10],nama [50], pengarang[50];

};
Buku book[10];
int a,i;

void Input()
{
    char get[1];
    cout << "Masukan Jumlah Buku : ";
    cin >>a;
    for (i=0;i<a;i++)
    {
        cout << "Buku ke-"<<i+1<<endl<<endl;
        cout << "Kode Buku\t: ";
        cin >> book[i].kode; cin.getline(get,1);
        cout << "Nama Buku\t: ";
        cin.getline(book[i].nama,50);
        cout << "Tahun Terbit\t: ";
        cin.getline(book[i].tahun,10);
        cout << "Nama Pengarang\t: ";
        cin.getline(book[i].pengarang,50);
        cout << "Harga\t\t: ";
        cin.getline(book[i].harga,10);
    }
    system("cls");
}

void Show ()
{
    cout << "Kode\tNama Buku\tTahun\tPengarang\tHarga\t"<<endl<<endl;

    for (i=0;i<a;i++)
    {
        cout << i;
        cout << book[i].kode<<"\t"<<book[i].nama<<"\t"<<book[i].tahun<<"\t"<<book[i].pengarang<<"\t\t"<<book[i].harga<<endl;
    }
}

void Delete ()
{
    int j,k;
    cout << "Hapus Data Buku ke-";
    cin >> j;
    j=j-1;
    i--;
    for (k=j;k<i;k++)
    {
        book[i]=book[i-1];
    }
    a=a-1;
    cout << "\t\t\tData Buku Berhasil Dihapus"<<endl;
    getch();system("cls");

}

void Edit()
{
    int j;
    cout << "Edit Data Buku ke-";
    cin >> j;
    j=j-1;
    cout << "Kode Buku\t: ";
    cin >> book[j].kode;
    cout << "Nama Buku\t: ";
    cin >> book[j].nama;
    cout << "Tahun Terbit\t: ";
    cin >> book[j].tahun;
    cout << "Nama Pengarang\t: ";
    cin >> book[j].pengarang;
    cout << "Harga\t\t: ";
    cin >> book[j].harga;
    Show();
    system("cls");

}

int main()
{
    int pilihan;


    while (pilihan!=99)
    {
        cout << "1. Masukan Data Buku"<<endl;
        cout << "2. Hapus Data Buku"<<endl;
        cout << "3. Edit Data Buku "<<endl;
        cout << "4. Tampilkan Data Buku"<<endl;
        cout << "99. Keluar"<<endl<<endl;
        cout << "Masukan Pilihan : ";
        cin >> pilihan;
        system("cls");

        if (pilihan == 1)
        {
            Input();
        }

        else if (pilihan == 2)
        {
            Delete();
        }

        else if (pilihan == 3)
        {
            Edit();
        }

        else if (pilihan == 4)
        {
            Show();
        }

        else if (pilihan == 99)
        {
            return 0;
        }

        else
        {
            cout << "Pilihan Tidak ada!";
        }
    }

}


