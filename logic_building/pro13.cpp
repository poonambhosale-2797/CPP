//fibonacci number
#include<iostream>
using namespace std;
int main()
{
	cout<<"Fibonacci series:"<<endl;
	cout<<"Enter your number:"<<endl;
	int n,first=0,second=1,next;
	cin>>n;
	for(int i=1;i<n;i++)
	{
	   cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
		
	}
	return 0;
}
