#include <iostream>
using namespace std; 

int main ()
{
	float f, c;
	
	cout<<"Aplikasi Hitung Suhu";
	cout<<"Masukkan suhu dalam Fahrenheit: "; cin>>f;
	
	c = ((f-32) * 5/9);
	cout<<"Suhu Celciusnya adalah: "<<c;
}
