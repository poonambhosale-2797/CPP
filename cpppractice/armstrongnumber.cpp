#include<iostream>
using namespace std;
int main()
{
	int orinum,num,rem,sum=0;
	cout<<"enter a number:";
	cin>>orinum;
	num=orinum;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
	}
	if(sum==orinum)
	
		cout<<orinum<<"armstrong number:";
		else
		cout<<orinum<<"not armstrong number:";
	return 0;
}
