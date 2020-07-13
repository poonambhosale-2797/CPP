#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"enter a number:"<<endl;
	cin>>num;
	n=num;
	do
	{
		num=num%10;
		rev=(rev*10)+digit;
		digit=num/10;
		
	}while(num!=0);
	{
	cout<<"reverse number is:"<<rev<<endl;
	if(n==rev)
	cout<<"it is palimdrome:"<<endl;
	else
	cout<<"it is not  palimdrome:"<<endl;
	}
	
	
	return 0;
}

