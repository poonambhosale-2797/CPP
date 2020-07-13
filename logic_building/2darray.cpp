//2d array
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int myarray[5][5];//initialization
	int myarray1[2][2];//initialization with decleration
	int myarray2[3][3]={{1,1,1},{2,2,2},{3,3,3}};//intialization with decleration
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<myarray2[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
/*	cout<<"enter number for 2*2 matrix for a:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{

			cin>>a[i][j];
		}
	}
	cout<<"enter number for 2*2 matrix for b:"<<endl;
	for(int i=0;i<2;++)
	{
		for(int j=0;j<2;j++)
		{
		
			cin>>b[i][j];
		}
	}*/
	
//	int a[2][2],b[2][2],addition[2][2],substraction[2][2];
	/*cout<<"enter number:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		
		{
			cin>>a[i][j]>>b[i][j];
			addition[i][j]=a[i][j]+b[i][j];
			
		}
	
	}*/
	
	
	return 0;
}
