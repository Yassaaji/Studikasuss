#include<iostream>
using namespace std;

int main(){
    double r, hasil;
    char Pilihan;

    cout << "masukan jari jari lingkaran = " ;
    cin >> r;

    cout << "Ingin mengihitung luas / keliling ? (y/Y) = ";
    cin >> Pilihan;
    if(Pilihan == 'y' || Pilihan == 'Y')
    {
      hasil = 3.14159 * r * r;
      cout << "Luas = " << hasil << endl;
    }
    else {
        hasil = 2 * 3.14159 * r;
        cout << "Keliling = " << hasil << endl;
    }
}