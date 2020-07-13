#include<iostream>
using namespace std;
class box{
	int l,b,h;
	public:
		box (int);
		box (int,int);
		box (int,int,int);
		void show();
		
		
};
box::box(int i)
{
	l=b=h=i;
	
 } 
 box::box(int a,int p)
 {
 	l=h=a;
 	b=p;
 }
 box::box(int p,int q,int r)
 {
 	l=p;
 	b=q;
 	h=r;
 }
 void box::show()
 {
 	cout<<l<<endl<<b<<endl<<h<<endl;
 }
 int main()
 {
 	box b1(10);
 	box b2(10,20);
 	box b3(10,20,30);
 	b1.show();
 	b2.show();
 	b3.show();
 	
 	
 }
