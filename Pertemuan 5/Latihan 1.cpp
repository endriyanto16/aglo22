#include <iostream>
using namespace std;

int main()
{
	string n;
	int nt, nuts, nuas, tn;
	char nh;
	
	//inputan
	cout<<"Masukkan Nama Anda: "; cin>>n;
	cout<<"Masukkan Nilai Tugas Anda: "; cin>>nt;
	cout<<"Masukkan Nilai UTS Anda: "; cin>>nuts;
	cout<<"Masukkan Nilai UAS Anda: "; cin>>nuas;
	
	cout<<"--------------------------"<<endl;

	//output dari inputan user
	cout<<"Selamat "<<n <<endl;
	
		//rumus untuk total nilai
	tn = (nt + nuts + nuas)/3;
	cout<<"Nilai Anda: "<<tn<<endl;
	
	 if (tn > 0 && tn<= 20)
     { nh = 'E'; }
     
 	 else if (tn > 20 && tn <= 40)
 	 { nh = 'D'; }
 	 
 	 else if (tn > 41 && tn <= 60)
 	 { nh = 'C'; }
 	 
 	 else if (tn > 61 && tn <= 80)
 	 { nh = 'B'; }
 	 
 	 else if (tn > 81 && tn <= 100)
 	 { nh = 'A'; }
 	 
 	 else
 	 { nh = 'X'; }
	 cout<<"Nilai Huruf Anda: "<<nh<<endl;
	
		//untuk predikat
	 switch (nh)
 	 {
  	 case 'A' : cout<<"Predikat : Sangat Baik"; break;
  	 case 'B' : cout<<"Predikat : Baik"; break;
  	 case 'C' : cout<<"Predikat : Cukup"; break;
  	 case 'D' : cout<<"Predikat : Kurang"; break;
  	 case 'E' : cout<<"Predikat : Sangat Kurang"; break;
  	 default : cout<<"Error";
 	 } 
}

