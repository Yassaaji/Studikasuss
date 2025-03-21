#include<iostream>
using namespace std;

int main(){
    int umur;

    cout << "Masukan Umur Anda = " ;
    cin >> umur;

    
    if(umur<5)
    {
      cout << "Anda Masuk Golongan BALITA" ;
    }
    else if(umur<10) {
      cout << " Anda Masuk Golongan Anak-Anak" ;
    }
    else if (umur<23)
    {
        cout << " Anda Masuk Golongan REMAJA" ;
    }
    else if (umur<50)
    {
        cout << "Anda Masuk Golongan DEWASA" ;
    }
    else {
        cout << "Anda Masuk Golongan TUA" ;
    }
}