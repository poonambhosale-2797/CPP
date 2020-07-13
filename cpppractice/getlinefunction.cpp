#include<iostream>
#include<string>
using namespace std;

class demo
{
	int roll;
	char grade;
	string name;
	public:
		void get();
		void show();
};
void demo::get()
{
	cout<<"enter details:"<<endl;
	cin>>roll>>grade>>name;
	getline(cin,name);
}
void demo::show()
{
	cout<<roll <<" "<<grade<<" "<<name<<endl;
}
int main()
{
	demo d1;
	d1.get();
	d1.show();
	return 0;
}
