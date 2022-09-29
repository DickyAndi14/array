#include <iostream>

using namespace std;

int main()
{
    int i;
    int l;
    int in;
    int bagi = 10;
    float rata;
    char y;
    string namasiswa[2][i];
    float nilai[3][i];

    cout << "==========Menghitung Nilai Akhir==========" << endl;
    cout << "Berapa jumlah mahasiswa ?";
    cin >> in;

    for (i = 0; i < in; i++)
    {

        cout << "---Data Mahasiswa" << i + 1 << "---" << endl;
        cout << "Masukkan nama :";
        cin >> namasiswa[0][i];
        cout << endl;
        cout << "Masukkan NIM :";
        cin >> namasiswa[1][i];
        cout << endl;
        cout << "Masukkan Nilai Tugas :";
        cin >> nilai[0][i];
        cout << endl;
        cout << "Masukkan Nilai UTS :";
        cin >> nilai[1][i];
        cout << endl;
        cout << "Masukkan Nilai UAS :";
        cin >> nilai[2][i];
        cout << endl;
    }

    cout << "Semua data telah dimasukkan, apakah ingin menampilkan y/n ?";
    cin >> y;
    if (y == 'y' || y == 'Y')
    {
        cout << "Nama NIM Tugas UTS UAS NA" << endl;
        cout << "=======================================================" << endl;
        for (l = 0; l < in; l++)
        {
            cout << namasiswa[0][l] << "";
            cout << namasiswa[1][l] << "";
            cout << nilai[0][l] << "";
            cout << nilai[1][l] << "";
            cout << nilai[2][l] << "";
            rata = ((3 * nilai[0][l]) + (3 * nilai[1][l]) + (4 * nilai[2][l])) / bagi;
            cout << rata << endl;
        }
    }
    else
    {
        cout << "Terimaskasih sudah mengisi data ";
    }
}
