#include <iostream>
using namespace std;

main() {
    system ("CLS");
    int total=0, count=0, nilai, i=1; double ratarata;

    cout<<"**********************************"<<endl;
    cout<<"Program Menghitung Nilai Rata-Rata"<<endl;
    cout<<"**********************************"<<endl;
    cout<<endl;

    cout<<"Masukkan nilai (masukkan -1 untuk mengakhiri):\n";

    do {cout<<"Nilai ke-"<<i<<": "; cin>>nilai;
        if (nilai>0) {i++; total+=nilai; count++;}
        else if (nilai==-1) {ratarata=static_cast<double>(total)/count; cout<<"Rata-rata: "<<ratarata<<endl; break;}
        else cout<<"Input harus bilangan bulat positif. Coba lagi.\n";}
    while (true);
}