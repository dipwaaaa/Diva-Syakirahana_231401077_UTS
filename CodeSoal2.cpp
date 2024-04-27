#include <iostream> 
using namespace std;

main() {
    system("CLS");
    int n, i, j, k;
    
    cout<<"Masukkan bilangan bulat antara 2 dan 10: "; cin>>n;
    
    if (n<2||n>10) {cout<<"Input tidak memenuhi batas"; exit(0);}
    else {
        for (i=1; i<=n; i++) {
            for(j=1; j<=i; j++) {cout<<"* ";}
            cout<<endl;}
            
        for (i=1; i<=n; i++) {
            for(j=1; j<=n; j++) {cout<<"  ";}
            for(j=1; j<i; j++) {cout<<"  ";}
            for(k=n; k>=i; k--) {cout<<"* ";}
            cout<<endl;
        }
    }
}