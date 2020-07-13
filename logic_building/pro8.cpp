//largest number between 3
#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3;
	cout<<"enter a number:";
	cin>>n1>>n2>>n3;
	if(n1>=n2&&n1>=n3)
	{
		cout<<"n1 is a greatest number:"<<n1;
	}
else if(n2>=n1&&n2>=n3)//if
	{
		cout<<"n2 is a greatest number:"<<n2;
	}
	else//(n3>=n1||n3>=n1)//if
	{
		cout<<"n3 is a greatest number:"<<n3;
	}
	return 0;
}
