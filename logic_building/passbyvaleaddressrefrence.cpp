//pass by value,pass by address,pass by refrence
///in pass by value..value are as it is copy into another parameter
//in pass by refrence..value are  copy into another parameter x<->a,y<->b so a=5,b=6..a=6 b=5 
#include<iostream>
using namespace std;
void passbyvalue(int x,int y)//user defined function
{
	int z=x;
	x=y;
	y=z;
}
//pass by refrence:&
void passbyrefrence(int &x,int &y)//user defined function
{
	int z=x;
	x=y;
	y=z;
}
void passbyaddress(int *x,int *y)//user defined function
{
	int z=*x;
	*x=*y;
	*y=z;
}
int main()///inbuilt function
{
	int a=6,b=8;
	cout<<"before swap the value:"<<"a:"<<" "<<a<<endl<<"b:"<<b<<endl;
	
	//function call
	//passbyvalue(a,b);
	///passbyrefrence(a,b);//function call..x<->a,y<->b
	passbyaddress(&a,&b);
	
	cout<<"after swap the value:"<<"a:"<<" "<<a<<endl<<"b:"<<b<<endl;
	return 0;
}
