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
			
		}
		int compare(box &p)
		{
			int aread1;
			int aread2;
			aread1=l*b*h;
			aread2=*p.l*p.b*p.h;
			if(aread1==aread2)
			{
				return 0;
			}
			else{
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
	else{
		cout<<"both box are not equal";
	}
	return 0;
}
