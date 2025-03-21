#include<iostream>
using namespace std;

int main(){
    int Dewasa,Anak,Balita,Tb,Th;

    cout << "Masukan Jumlah Tiket Dewasa = ";
    cin >> Dewasa;
    cout << "Masukan Jumlah Tiket Anak-Anak =  ";
    cin >> Anak;
    cout << "Masukan Jumlah Tiker Balita = ";
    cin >> Balita;

    Tb = (Dewasa * 100000) + (Anak * 50000) + (Balita * 0) ;

    if(Tb>500000)
    {
      cout << "Total Biaya = " << Tb ;
    }
    else {
        Th = (Tb - 50000) ;
        cout << "Total Harga  = " << Th ;
    }
}