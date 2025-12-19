#include <iostream>
using namespace std;

void tampilNilai(string nama, double tugas, double uts, double uas) {

    double rataRata = (tugas + uts + uas) / 3;

    cout << "Nama: " << nama << endl;
    cout << "Nilai Tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Rata-rata Nilai: " << rataRata << endl;

    if (rataRata >= 60) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }
}

int main() {
    string nama;
    double tugas, uts, uas;


    cout << "Masukan Nama: ";
    cin >> nama;
    cout << "Masukan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukan Nilai UTS: ";
    cin >> uts;
    cout << "Masukan Nilai UAS: ";
    cin >> uas;

    tampilNilai(nama, tugas, uts, uas);

    return 0;
}