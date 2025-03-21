#include <iostream>
using namespace std;

int main(){
    char NAMA[30],KELAS;
    int Absen;
    float Ipk;

    cout<<"--------INPUT------------"<<endl;
    cout<<"masukan nama masiswa"<<endl;
    cin >>NAMA;
    cout<<"masukan kelas" << endl;
    cin >>KELAS;
    cout<<"masukan absen mahasiswa"<<endl;
    cin >>Absen;
    cout<<"Masukan ipk mahasiswa"<<endl;
    cin >>Ipk;

    cout<<"--------OUTPUT------------"<<endl;
    cout<<"NAMA = "<<NAMA<<endl;
    cout<<"KELASS = "<<KELAS<<endl;
    cout<<"ABSEN = "<<Absen<<endl;
    cout<<"IPK = "<<Ipk<<endl;

}