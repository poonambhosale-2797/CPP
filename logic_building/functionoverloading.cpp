//FUNCTION overloading
#include<iostream>
using namespace std;
int add(int a,int b) //1
{
	cout<<"function 1 is:"<<endl;
	return (a+b);
}
double add(double a,double b)//2
{
	cout<<"function 2 is:"<<endl;
	return(a+b);
	
}
double add(double a,int b)//3
{
	cout<<"function 3 is:"<<endl;
	return(a+b);
}
double add(int a,double b)//4
{
	cout<<"function 4 is:"<<endl;
	return(a+b);
}
int add(int a,int b,int c)//5
{
	cout<<"function 5 is:"<<endl;
	return(a+b+c);
}
int main()
{
	cout<<"addition is:"<<add(4,5)<<endl;
	cout<<"addition is:"<<add(4.5,5.5)<<endl;
	cout<<"addition is:"<<add(4.5,5)<<endl;
	cout<<"addition is:"<<add(4,5.5)<<endl;
	cout<<"addition is:"<<add(4,5,6)<<endl;
	return 0;
	
}
