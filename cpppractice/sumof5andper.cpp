#include<iostream>
using namespace std;
int main()
{
	int sum=0,total=500;
	float per;
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	
	per=(sum*100)/total;
	cout<<"perc"<<per<<endl;
	return 0;
	
}
