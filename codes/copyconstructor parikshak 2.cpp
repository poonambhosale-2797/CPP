#include<iostream>
using namespace std;
class Box
{
	int l,b,h;
	public:
		Box()
		{
			l=10;
			b=20;
			h=30;
			
		}
		Box(int a,int d,int c)
		{
			l=a;
			b=d;
			h=c;
			
		}
		Box(Box &p)
		{
			this->l=p.l;
			this->b=p.b;
			this->h=p.h;
		}
		void print()
		{
			cout<<l<<"  "<<b<<"  "<<"  "<<h<<"  "<<endl;
		}
};
int main()
{
	Box b1;
	b1.print();
	Box b2(40,50,60);
	b2.print();
	Box b3(b2);
	b3.print();
}
