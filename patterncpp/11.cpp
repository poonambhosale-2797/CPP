#include<iostream>
using namespace std;
int main()
{
	int i,j,k=0,row;
	cout<<"enter a number of rows:";
	cin>>row;
	for(i=1;i<=row;i++){
		i<=(row+1)/2?k++:k--;
		for(j=1;j<=(row+1)/2;j++){
			if(j<=k)
			
			
			cout<<"*";
			
		
			else
			
			
			cout<<" ";
			
	
	}
		cout<<"\n";
	}
	return 0;
}
