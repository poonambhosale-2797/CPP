#include<iostream>
using namespace std;
int main()
{
	float cel,kel,f;
	cout<<"enter a kel:"<<endl;
	cin>>kel;
	cel=kel-273.15;
	cout<<"celcious"<<cel<<endl;
	f=cel*(9/5)+32;
	cout<<"fahrenheit"<<f<<endl;
	return 0;
	
}
