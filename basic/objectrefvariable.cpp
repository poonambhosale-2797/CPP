#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		void get()
		{
			cout<<"enter l,b,h";
			cin>>l>>b>>h;
			
		}int compare(box &p)
		{
			int area_d1;
			int area_d2;
			area_d1=l*b*h;
			area_d2=p.l*p.b*p.h;
			if(area_d1==area_d2)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			
		}
		
};
int main()
{
	box b1,b2;
	b1.get();
	b2.get();
	int r=b1.compare(b2);
	if(r==0)
	{
		cout<<"both box are equal";
		
	}
	else
	{
		cout<<"both box are not equal";
	}
	return 0;
}
