#include<iostream>
using namespace std;
class base
{
	private:
		int a,b;
		public:
		void input()
		{
			cout<<"enter value:";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"a:"<<a<<"  "<<"b:"<<b<<endl;
		}
};
class derive:public base
{
	private:
		int n,m;
	public:
		void getdata()
		{
			cout<<"enter value";
			cin>>m>>n;
		}
		void show()
		{
			cout<<"n:"<<n<<"  "<<"m:"<<m<<endl;
		}
};
int main()
{ 
     base obj;
	derive obj1;
//	obj.input();
//	obj.display();
    obj1.input();
    obj1.display();
	obj1.getdata();
	obj1.show();
	return 0;
}
	

