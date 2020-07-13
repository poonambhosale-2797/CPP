#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char k;
	for(i=1;i<=5;i++){
		k='A';
		for(j=1;j<=5;j++){
			if(j<=6-i||j>=4+i)
			cout<<k;
			else
			{
			
			cout<<" ";
			k++;
				
			}
		}
		cout<<"\n";
	}
	return 0;
	}
	
