#include <iostream>
using namespace std;

int main ()
{
	int UTS, UAS, N; 
	cout<<"Masukkan Nilai UTS : "; cin>>UTS;
	cout<<"Masukkan Nilai UAS : "; cin>>UAS;
	N = ((UTS + UAS )/2);
	(N >= 60) ? (cout<<"Lulus") : (cout<<"Tidak Lulus");
}

