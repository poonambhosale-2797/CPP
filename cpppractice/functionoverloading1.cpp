#include<iostream>
using namespace std;
class box
{
	int l,m,n;
	public:
		box(int);
		box(int,int);
		box(int,int,int);
		void show();
		
};
box::box(int i)
{
	l=m=n=i;
}
box::box(int a,int b)
{
	l=m=a;
	n=b;
}
box::box(int x,int y,int z)
{
	l=x;
	m=y;
	n=z;
}
void box::show()
{
	int j;
	j=l*m*n;
	cout<<j<<endl;
}
int main()
{
	box b1(10);
	box b2(10,20);
	box b3(10,20,30);
	b1.show();
	b2.show();
	b3.show();
	return 0;
}
