#include <iostream>
using namespace std;

int main ()
{
	int pil;
	int a,c;
	char b;
	
	awal:
		
	cout<<"Kalkulator Suhu"<<endl;
	cout<<"1. Celcius ke Fahrenheit"<<endl;
	cout<<"2. Fahrenheit ke Celcuis"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan Pilihan Anda (1-2): "; cin>>pil;
	
	switch (pil)
	{
		case 1: cout<<"Masukkan Suhu Dalam Celcius: "; cin>>a;
			c = (a*9/5) + 32;
			cout<<"Hasil penjumlahan: "<<c<<endl;	
		break;
			
		case 2: cout<<"Masukkan angka Fahrenheit: "; cin>>a;
			c = (a-32) * 5/9;
			cout<<"Hasil Pengurangan: "<<c<<endl;
		break;	
		default: cout<<"error"<<endl;
	}	
	
	cout<<"Apakah anda ingin ulang (y/t) ?"; cin>>b;
	if (b== 'y' || b== 'Y')
	{
		goto awal;
	}
	return 0;
}
