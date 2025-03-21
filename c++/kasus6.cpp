#include<iostream>
using namespace std;

int main(){
    int Lp,Bp;

    cout << "Masukan Lama Parkir = ";
    cin >> Lp;

    if(Lp<=1)
    {
      cout << "total biaya parkir = 10.000" ;
    }
    else if(Lp<=24) {
      Bp = (10.000 + (Lp-2) * 1000) ;
      cout << "Total Biaya Parkir Tanpa Denda = " << Bp;
    }
    else {
        Bp = (10.000 + (Lp-2) * 1000 + 100.000) ;
        cout << "Total Biaya Parkir Dengan Denda = " << Bp;
    }
}