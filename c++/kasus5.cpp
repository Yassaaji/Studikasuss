#include<iostream>
using namespace std;

int main(){

    int Jl,status,HT,disc,Hb;

    cout << "Masukan Jumlah Lembar = " ;
    cin >> Jl;
    cout << "Masukan Status (1.YA,0.Tidak) = " ;
    cin >> status;

    if(Jl<50)
    {
      HT = (200 * Jl) ;

    }
    else if(Jl<100) {
      HT = (175 * Jl) ;
    }
    else {
        HT = (150 * Jl) ;
    }

    disc = (HT * 0.5) ;
    Hb = (HT - disc) ;
     
    if(status==1)
    {
      cout << "Harga Keseluruhan Dengan Diskon = " << Hb ;
    }
    else {
        cout << "Harga Keseluruhan Tampa Diskon = " << HT ;
    }
}