#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout<<"nilai a: "; cin>>a;
		switch (a)
		{
			case 1 ... 5: cout<<"1-5"; break;
			case 6 ... 9: cout<<"6-9"; break;
		}
}
