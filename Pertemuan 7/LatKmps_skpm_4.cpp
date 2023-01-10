#include <iostream>
using namespace std;

int main(){
 int n, i, j, l, k;
 
 cout<<"masukkan bilangan bulat maksimum hingga 5: "; cin>>n;
 
 for (int i=1; i<=n; i++)
  {
  for (int j=1; j <= n - i; j++)
  {
   cout<<endl<<"  ";
  }
  
   for (int j=1; j<2*i; j++)
   {
   cout<<i<<"  "; 
   }
cout<<endl;
}
}
