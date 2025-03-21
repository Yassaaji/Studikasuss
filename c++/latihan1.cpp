#include<iostream>
using namespace std;

int main(){
    int rata,mk1,mk2;

    cout << "masukan nilai mk 1"<< endl;
    cin >> mk1;
    cout << "masukan nilai mk 2"<<endl;
    cin >> mk2;
    
    rata = (mk1 + mk2) /2;
    cout << "nilai rata rata ="<< rata << endl;
    if(rata >= 60)
    {
      cout << "anda  lulus dengan nilai = "<< rata << endl;
    }
    else {
        cout << "anda tidak lulus dengan nilai = "<< rata <<endl;
    }

}