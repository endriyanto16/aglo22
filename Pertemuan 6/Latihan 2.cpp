#include <iostream>
using namespace std;
 
int main(){
char jawab;
int a,aa,h;

	 do 
	 {
	 cout<<"masukkan angka pertama : ";
	 cin>>a;
	 cout<<"masukkan angka kedua : ";
	 cin>>aa;
	 h = a + aa;
	 cout<<"hasil dari penjumlahan "<<a<<" dan "<<aa<<" adalah "<<h;
	 cout<<endl<<"coba lagi (y/t) ? "; cin>>jawab;
	 }
	
	 while (jawab == 'y' || jawab == 'Y');
	 return 0;
	 }
	
	
	
	
