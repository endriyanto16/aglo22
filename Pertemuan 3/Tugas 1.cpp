#include <iostream>
using namespace std;

int main () 
{
	const double pi = 3.14;
	
	double vol,r,t;
	
	cout<<"Aplikasi Cari Volume Kerucut"<<endl;
	
	cout<<"Masukkan Jari-Jari= "; cin>>r;
	cout<<"Masukkan Tinggi= "; cin>>t;
	
	vol = (pi * r * r * t) / 3;
	
	cout<<"Volume Kerucut Adalah = " <<vol;
	
	return 0;
}
