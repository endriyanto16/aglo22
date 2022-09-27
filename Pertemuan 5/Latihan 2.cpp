#include <iostream>
using namespace std;
int main()
{
 string n,kamar;
 int li,jk,hk,tbs;
 char s;
 
 cout<<"hotel bahagia"<<endl;
 cout<<"-----------------------"<<endl;
 
 cout<<"jenis kamar hotel bahagia : "<<endl;
 cout<<"1. VVIP"<<endl;
 cout<<"2. VIP "<<endl;
 cout<<"3. standard"<<endl;
 cout<<"4. Melati"<<endl;
 
 cout<<"-----------------------"<<endl;
 
 cout<<"masukkan nama anda : "; 
 getline(cin,n); 
 
 cout<<"masukkan jenis kamar (1-4) : "; cin>>jk;
 
 switch(jk)
 {
  case 1 : kamar = "VVIP"; hk = 1000000; break;
  case 2 : kamar = "VIP"; hk = 750000; break;
  case 3 : kamar = "standart"; hk = 500000; break;
  case 4 : kamar = "melati"; hk = 250000; break;
  default: cout<<"salah input";
 }

 
 
 cout<<"lama inap : "; cin>>li;
 cout<<"apakah dengan sarapan (y/t) 50rb/hari : "; cin>>s;

 cout<<"-----------------------"<<endl;
 cout<<"terima kasih "<<n<<endl;
 
 cout<<"kamar anda "<<kamar<<endl;
 
 cout<<"lama menginap "<<li<<" malam";
 
 if (s == 'y')
  {
  cout<<" dengan sarapan"<<endl;
  tbs = (hk*li) + (li*50000);
  }
  else
  {  tbs = (hk*li);
  cout<<"tanpa sarapan"<<endl; }
  
 cout<<"total bayar : "<<tbs<<endl;
}



