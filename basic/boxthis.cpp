#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
		Box()
		{
			cout<<"enter l,b & h";
			cin>>l>>b>>h;
			cout<<"adddress of calling object:"<<this;
		}
		Box(int input)
		{
			l=b=h=input;

		}
		void show()
		{
			cout<<l<<b<<h;
		}
		Box(int i,int j,int k)
		{
		this->l=i;
		this->b=j;
		this->h=k;
	}
	Box(Box &p)
	{
	this->l=p.l;
	this->b=p.b;
	this->h=p.h;
	}
	
		
};
int main()
{
	Box B1;
	B1.show();
	Box B2(30);
	B2.show();
	Box B3(10,20,30);
	B3.show();
	Box B6(B1);
	B6.show();
	return 0;
}

