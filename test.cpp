#include <iostream>

using namespace std;

int main() {

    int jumlah, i;

        string nama[5],nilai[100];
    cout<<"Input Jumlah Data Mahasiswa : ";cin>>jumlah;

 for(i = 1; i <= jumlah; i++) {

     cout<<"Data "<<i<<endl;
     cout<<"Nama : ";
     cin>>nama[i];
     cout<<"nilai : ";
     cin>>nilai[i];


    }

        cout<<"Daftar Data Mahasiswa"<<endl;
    for(i = 1; i <= jumlah; i++) {

        cout<<i<<""<<nama[i]<<nilai[i]<<endl;

    }


    return 0;


}