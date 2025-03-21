#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "masukan bilangan A = ";
    cin >> a;
    cout << "masukan bilangan B = ";
    cin >> b;
    cout << "masukan bilangan C = ";
    cin >> c;

    if(a==b && b==c)
    {
      cout << "Bilangan Tidak Boleh Sama" ;
    }
    else if(a>b && a>c) {
      cout << "Bilangan A Terbesar = " << a ;
    }
    else if (b>a && b>c)
    {
        cout << "Bilangan B Terbesar = " << b;
    }
    else {
        cout << "Bilangan C Terbesar = " << c;
    }
}