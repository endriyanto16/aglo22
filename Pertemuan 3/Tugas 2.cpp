#include <iostream>
using namespace std;

int main () 
{
 
 double ideal,tb;
 
 
 
 cout<<"Aplikasi Mencari Berat Badan Ideal Pria"<<endl;
 
 cout<<"Masukkan Tinggi= "; cin>>tb;
 
 ideal = ((tb - 100 ) - ((tb - 100) *10/100));
 
 cout<<"Berat Badan Ideal = " <<ideal;
 
 return 0;
}
