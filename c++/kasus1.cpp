#include<iostream>
using namespace std;

int main(){
    int n1,n2,rata_rata;

    cout << "Masukan Nilai 1 = " ;
    cin >> n1;
    cout<< "Masukan Nilai 2 = "  ;
    cin >> n2;

    rata_rata = (n1 + n2)/2;
    cout<< "RATA RATA ANDA = " << rata_rata <<endl;

    if(rata_rata > 60)
    {
      cout << "Anda LULUS"; 
    }
    else {
        cout << "Anda tidak LULUS";
    }
}