#include <iostream>
using namespace std;

int main ()
{
	char jawab;
	int angka;
	
	do 
	{
		cout<<"Masukkan Angka : ";
		cin>>angka;
		cout<<"Angka " << angka << " adalah ";
		cout<< ((angka % 2 == 1 ) ? "ganjil" : "genap");
		cout<<endl<< "Coba lagi (y/t) ? "; cin>>jawab;
	}
	
	while
	(jawab == 'y' || jawab == 'Y');
	
	return 0; 
}
