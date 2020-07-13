#include<iostream>
using namespace std;
int main()
{
	int start;
	int end;
	cout<<"Enter the start and end range";
	cin>>start>>end;
	for(int i=start;i<end;i++)
	{
		/*if(i%2=0)
		{
			cout<<"even num="<<i<<endl;
			
		}
		*/
		if(i%2!=0)
		{
		  i=i+1;
		  	cout<<"odd num="<<i<<endl;	
		}
		else if(i%2!=0)
		{
			i=i+2;
		cout<<"odd num="<<i<<endl;	
		}
	}
}
