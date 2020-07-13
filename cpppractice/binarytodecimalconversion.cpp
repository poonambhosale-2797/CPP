#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int binary[100];
	int index=0;
	int r=0;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		binary[index]=r;
		index++;
	}
	cout<<"binary is:";
	for(int i=index-1;i>=0;--i)
	
		cout<<binary[i];
	
	return 0;
}
