#include<iostream>
using namespace std;
class cal
{
	int a,b,c;
	public:
		int sum(int,int);
		int sum(int,int,int);
		
};
int cal::sum(int i,int j)
{
	return i+j;
	
}

int cal:: sum(int k,int l,int m)
{
return k+l+m;
}
int main()
{
cal c1;
int r1=c1.sum(10,20);
int r2=c1.sum(10,20,30);
cout<<"sum is:"<<r1<<endl;
cout<<"sum is:"<<r2<<endl;

return 0;	
}


