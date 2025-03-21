#include<iostream>
using namespace std;

int main(){
    int ne1,ne2,ne3,nne1,nne2,re,rne;
    char jurusan[10];

    cout << "    STUDI KASUS 2   "<<endl;
    cout << "===================="<<endl;
    cout << "masukan nilai eksak 1 = " ;
    cin >>  ne1;
    cout << "masukan nilai eksak 2 = ";
    cin >> ne2;
    cout << "masukan nilai eksak 3 = ";
    cin >> ne3;
    cout << "masukan nilai non eksak 1 = ";
    cin >> nne1;
    cout << "masukan nilai non eksak 2 = ";
    cin >> nne2;

    re = (ne1 + ne2 + ne3)/3;
    rne = (nne1 + nne2)/2;

    if(re==rne)
    {
      cout << "Masukan jurusan yang di inginkan = ";
      cin >> jurusan;
      cout << "Selamat anda masuk pada jurusan " << jurusan;
    }
    else if(re>rne) {
      cout << "Selamat anda masuk jurusan IPA" ;
    }
    else {
        cout << "Selamat anda masuk jurusan IPS"<< endl;
    }
    cout << "===================="<<endl;

}