#include<iostream>
using namespace std;
int main()
{
	int num,count,rem;
	cout<<"Enter the num:";
	cin>>num;
	int digit;
	cout<<"Enter the digit:";
	cin>>digit;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		if(rem==digit)
		{
			count++;
			
		}
		
	}
	cout<<"the num occurances are="<<count;
}
