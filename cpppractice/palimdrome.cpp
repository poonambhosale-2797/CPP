#include<iostream>
using namespace std;
int main()
{
	int rev=0,n,digit,num;
	cout<<"enter a number:";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
		
	}while(num!=0);
	cout<<"reverse number is"<< rev<<endl;
	if(n==rev)
	cout<<"number is palimdrome:"<<endl;
	else
	cout<<"number is not palimdrome:"<<endl;
	return 0;
	
		
	}

