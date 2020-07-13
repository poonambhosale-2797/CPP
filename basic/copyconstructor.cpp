#include<iostream>
using namespace std;
class box
{
	int l,h,b;
	public:box()
	{
		cout<<"enter l,b,h:";
		cin>>b>>l>>h;
	}
	box(int input_1)
	{
		l=b=h=input_1;
	}
	box(int i,int j,int k)
	{
		l=i;
		b=j;
		h=k;
	}
	box(box &p)
	{
		l=p.l;
		b=p.b;
        h=p.h;		
	}
	void show()
	{
		cout<<"l,b,h are:";
		cout<<"l<<b<<h:";
		
	}
};
int main()
{
	box b1;
	b1.show();
	box b2(10);
	b2.show();
	box b3(20);
	box b4(b3);
	b4.show();
	b3.show();
	return 0;
}
