#include<iostream>
using namespace std;

int main(){
    char nama[30],pembeli[30];
    int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
    string input, kode;
    
    awal:
    cout << "    TOKO YASSA   "<<endl;
    cout << "===================="<<endl;
    cout << "Nama Pembeli :";
    cin >> pembeli;
    cout << "Pilihan Barang Tersedia"<<endl;
    cout << "001 - Laptop Asus - Rp.5.000.000"<<endl;
    cout << "002 - Mouse Gaming - Rp. 1.000.000"<<endl;
    cout << "003 - Keyboard Mechanical - Rp.3.000.000"<<endl;

    cout << endl;
    cout << endl;
    cout << "Barang yang di pilih    :";
    cin >> kode;
    cout << "Jumlah Beli   :";
    cin >> jumlah; 

    if (kode == "001"){
        cout << "Laptop Asus";
        harga = 5000000;
    } else if (kode == "002"){
        cout << "Maouse Gaming";
        harga = 1000000;
    }else if (kode == "003"){
        cout << "KeyboardMechanical ";
        harga = 3000000;
    }else{
        cout <<"Barang yang di pilih tidak tersedia";
    }

    cout<<endl;
    cout<<"======================================="<<endl;
    cout<< "Struk Pembayaran "<<endl;
    cout<<"======================================="<<endl;
    cout<< "Nama Pembeli    :"<<pembeli<<endl;
    cout<< "Harga           :"<<harga<<endl;
    cout<< "Jumlah          :"<<jumlah<<endl;
    
    total = harga * jumlah;
    cout << "Total           :"<<total<<endl;
    
    cout<<endl;

    if(total == 1000000 || total < 2000000){
        potongan = 0.05 * total;
    }else if (total > 2000000 ){
        potongan = 0.10 * total;
    }else{
        potongan = 0;
    }

    cout<<"Diskon          :"<<potongan<<endl;
    cout<<"====================================="<<endl;

    jumtotal = total-potongan;
    cout << "Total Keseluruhan  :"<<jumtotal<<endl;
    cout << "Uang Bayar         :";
    cin >> jumbayar;
    kembalian = jumbayar-jumtotal;

    cout<<endl;

    cout<< "Uang Kembalian      :"<<kembalian<<endl;
    cout<<"======================================"<<endl;

    cout << "Mau Input Ulang [Y/N] :";
    cin>> input;


    if(input == "y" || input=="Y"){
        goto awal;
    }else{
        return 0;
    }
    
    cout<<endl;
    cout<<endl;
}