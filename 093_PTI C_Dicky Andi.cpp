#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int input;
    int bagi = 10;
    float rata;
    char y;
    string namasiswa[2][a];
    float nilai[3][a];

    cout << "========== Program Menghitung Nilai Akhir ==========" << endl;
    cout << "Inputkan  jumlah mahasiswa ?";
    cin >> input;

    for (a = 0; a < input; a++)
    {

        cout << "--Data Mahasiswa " << a + 1 << "---" << endl;
        cout << "Masukkan nama :";
        cin >> namasiswa[0][a];
        cout << endl;
        cout << "Masukkan NIM :";
        cin >> namasiswa[1][a];
        cout << endl;
        cout << "Masukkan Nilai Tugas :";
        cin >> nilai[0][a];
        cout << endl;
        cout << "Masukkan Nilai UTS :";
        cin >> nilai[1][a];
        cout << endl;
        cout << "Masukkan Nilai UAS :";
        cin >> nilai[2][a];
        cout << endl;
    }

    cout << "Semua data telah dimasukkan, apakah ingin menampilkan y/n ?";
    cin >> y;
    if (y == 'y' || y == 'Y')
    {
        cout << "Nama\tNIM\t\tTugas\tUTS\tUAS\tNA" << endl;
        cout << "=======================================================" << endl;
        for (b = 0; b < input; b++)
        {
            cout << namasiswa[0][b] << "\t";
            cout << namasiswa[1][b] << "\t";
            cout << nilai[0][b] << "\t";
            cout << nilai[1][b] << "\t";
            cout << nilai[2][b] << "\t";
            rata = ((3 * nilai[0][b]) + (3 * nilai[1][b]) + (4 * nilai[2][b])) / bagi;
            cout << rata << endl;
        }
    }
    else
    {
        cout << "Terimaskasih sudah mengisi data ";
    }
}
