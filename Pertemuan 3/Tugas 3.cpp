#include <iostream>
using namespace std;


int main () 
{
 
 double kalori,tb,bb,u,af,kk;
 
 
 
 cout<<"Aplikasi Menghitung Kebutuhan Kalori"<<endl;
 
 cout<<"Masukkan Tinggi= "; cin>>tb;
 cout<<"Masukkan Berat Badan= "; cin>>bb;
 cout<<"Masukkan Usia= "; cin>>u;


 
 kalori =  (88.4 + 13.4 * bb) + (4.8 * tb) - (5.68 * u);
 cout<<" "<<endl;

 cout<<"Kalori = " <<kalori;
 return 0;
}

