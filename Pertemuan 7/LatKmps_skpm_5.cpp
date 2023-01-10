#include <iostream>
using namespace std;

int main(){
 int tahun;
 ulang: 
 
 cout<<"masukkan tahun antara 1900 sampai 2020 : ";
 cin>>tahun;
 
 if (tahun >= 1900 && tahun <= 2020){
  if (tahun % 4== 0){
   cout<<"tahun kabisat";
  }
  else
  {
  cout<<"bukan tahun kabisat";
  }
 }
 else{
  goto ulang; 
 }

}
