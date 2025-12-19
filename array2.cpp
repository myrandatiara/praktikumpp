#include <iostream>
using namespace std;

int main() {

    int tanggal[12] = {8, 8, 5, 6, 27, 19, 13, 20, 31, 22, 24, 10};
    cout << "Tanggal ke-1: " << tanggal[0] << endl;


    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << "Hari ke-1: " << hari[0] << endl;

    char namaP[] = {'A', 'k', 'i'};
    cout << "Nama panggilan (char): " << namaP << endl;

    string nama = "Akil Penakluk Dunia";
    cout << "Nama lengkap (string): " << nama << endl;

    int i = 0;
    while (i < 7) {
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;

    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang array hari adalah: " << panjang << endl;

    int jumlahHari = 7;
    int totalPenjualan = 0;
    float rataRata;

    for (int j = 1; j <= jumlahHari; j++) {
        int penjualan;
        cout << "Masukan penjualan berapa porsi Chicken Katsu selama hari ke-" << j << " (" << hari[j - 1] << ") : ";
        cin >> penjualan;
        totalPenjualan += penjualan;
    }

    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "Total porsi Chicken Katsu yang terjual: " << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan Chicken Katsu selama " << jumlahHari << " hari adalah: " << rataRata << " porsi." << endl;

    int jumlahBaris, jumlahKolom;
    cout << "Masukan jumlah bulan dan tanggal buat kedai Chicken Katsu: " << endl;
    cout << "Input jumlah bulan (baris matriks): ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (kolom matriks): ";
    cin >> jumlahKolom;

    int matriks[jumlahBaris][jumlahKolom];
    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << "Baris (" << x + 1 << "), Kolom (" << y + 1 << ") : ";
            cin >> matriks[x][y];
        }
    }

    cout << "Matriks Chicken Katsu yang terjual:" << endl;
    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}