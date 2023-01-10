#include <iostream>
using namespace std;

int main ()
{
	int nk;
	string nm;
	cout<<"Masukkan nama anda: "; cin>>nm;
	cout<<"Masukkan nilai kegantengan: "; cin>>nk;
	
	if (nk < 1) 
	{
	cout<<"Anda Alien";
	}
	
	else if (nk >= 1 && nk < 85 )
	{cout<<"Anda Perlu oplas" ;}
	
	else if (nk >= 85 && nk <= 100)
	{cout<<"Anda Ganteng";}
	
	else if (nk > 100)
	{cout<<"Anda Bukan Manusia";}
	
}
