#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	public:
		int sum(int,int);
		int sum(int,int,int);
};
int demo:: sum(int i,int j)
{
	return i+j;
}
int demo:: sum(int l,int m,int n)
{
	return l+m+n;
}
int main()
{
	demo d1;
int r1=d1.sum(10,20);
	int r2=d1.sum(10,20,30);
	cout<<"sum is"<<r1<<endl;
	cout<<"sum is:"<<r2<<endl;
	return 0;
}
