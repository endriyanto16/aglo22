#include <iostream>
using namespace std;

int main()
{
	string NP, NB;
	float HB, JB, TB;
	
	//Inputan User
		cout<<"Masukkan Nama Pelanggan : "; cin>>NP;
		cout<<"Masukkan Nama Barang : "; cin>>NB;
		cout<<"Masukkan Harga Barang : "; cin>>HB;
		cout<<"Masukkan Jumlah Beli : "; cin>>JB;
	
	cout<<"--------------------------------"<<endl;
	
	//Perhitungan Pertama    
		TB = HB * JB;
	
	//Output dari inputan user
		cout<<"Barang yang Anda Beli Adalah " <<NB <<endl;
		cout<<"Dengan Harga " <<HB <<endl;
		cout<<"Total Bayar " <<TB <<endl;
		(TB>50000) ? (cout<<"Selamat Dapat Payung Yesh") : (cout<<"--Terima Kasih "<<NP <<"--");
}
