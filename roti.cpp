#include <iostream>
using namespace std;

const float harga1=14000, harga2=27000, harga3=40000, harga4=35000;

int main(){
    int kode, jumlah;
    string namaroti;
    float harga, totalharga, totaldiskon, totalbayar, diskon;
    char pesanlagi;
    char pembeli[35];


 do{
    cout<<"DAFTAR MENU :"<<endl;
    cout<<endl;
    cout<<"\t1.Smokey Cake"<<endl;
    cout<<"\t2.Chocolate bar"<<endl;
    cout<<"\t3.Roti Boy"<<endl;
    cout<<"\t4.Crossaint"<<endl;

    cout<<"Nama Pembeli    :";
    cin>>pembeli;
    cout<<"Kode    :";
    cin>>kode;
    cout<<"Jumlah    :";
    cin>>jumlah;


    switch (kode){
    case 1:
        namaroti="Smokey Cake";
        harga=harga1;
        break;
    case 2:
        namaroti="Chocolate Bar";
        harga=harga2;
        break;
    case 3:
        namaroti="Roti Boy";
        harga=harga3;
        break;
    case 4:
        namaroti="Crossaint";
        harga=harga4;
        break;

    }

    totalharga=0;
    for(int i=1; i<=jumlah; i++){
        totalharga+=harga;
    }
    if(jumlah>10){
        totaldiskon=totalharga* diskon;
        totalbayar=totalharga - totaldiskon;
    }
    else{
        totaldiskon=0;
        totalbayar=totalharga;
    }

    cout<<"==========================="<<endl;
    cout<<"NOTA PEMBAYARAN"<<endl;
    cout<<"nama pembeli     = "<<pembeli<<endl;
    cout<<"kode             = "<<kode<<endl;
    cout<<"Harga Roti       = "<<harga<<endl;
    cout<<"Jumlah           = "<<jumlah<<endl;
    cout<<"==========================="<<endl;
    cout<<"diskon           = "<<totaldiskon<<endl;
    cout<<"Total bayar      = "<<totalbayar<<endl;

    cout<<"Transaksi Lagi? [Y/T]: "<<endl;
    cin>>pesanlagi;

    }
    while (pesanlagi=='y'|| pesanlagi=='Y');

    return 0;
}