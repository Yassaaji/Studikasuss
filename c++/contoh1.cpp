#include<iostream>
using namespace std;

int main(){
    int umur;

    cout << "masukan umur" <<endl;
    cin >> umur;
    if(umur>17)
    {
      cout << "umur anda sekarang" << umur << endl;
    }
    else {
        cout << "umur anda belum cukup" << endl;
    }
}