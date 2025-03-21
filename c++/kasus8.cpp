#include <iostream>
using namespace std;

int main() {
    int Td, Ta, Tb, Bb, Selisih, BBT, Kuota, TotalBiaya, TotalHarga;

    cout << "Masukkan Total Tiket Dewasa = ";
    cin >> Td;
    cout << "Masukkan Total Tiket Anak-Anak = ";
    cin >> Ta;
    cout << "Masukkan Total Tiket Bayi = ";
    cin >> Tb;
    cout << "Masukkan Total Berat Bagasi = ";
    cin >> Bb;

    Kuota = Td * 20; 

    cout << "Kuota bagasi anda adalah :" << Kuota << " kg" << endl;

    if (Bb > Kuota) {
        Selisih = Bb - Kuota;
        BBT = Selisih * 10000;
        TotalBiaya = (Td * 500000) + (Ta * 250000) + (Tb * 150000) + BBT;
        cout << "Total Biaya = " << TotalBiaya << endl;
        cout << "Terdapat biaya tambahan bagasi sebesar :" << BBT << endl;
    } else {
        TotalHarga = (Td * 500000) + (Ta * 250000) + (Tb * 150000);
        cout << "Total Harga = " << TotalHarga << endl;
        cout << "Berat bagasi tidak melebihi kuota." << endl;
    }

}