#include<iostream>
using namespace std;
class employee
{
	int age;
	string name;
	static int id;
	
	public:
		employee()
		{
			cout<<"enter the employee details:";
			cin>>name>>age;
			id++;
		}
		void show()
		{
			cout<<"name is"<<name<<endl<<"age is"<<age<<endl;
			
		}
		static void counter()
		{
			cout<<"total is"<<id<<endl;
		}
		~employee()
		{
			--id;
		}
};
int employee::id;
int main()
{
	employee a1;
	a1.show();
	employee a2;
	a2.show();
	employee::counter();
	{
		employee e3;
		e3.show();
		e3.counter();
	}
	
	return 0;
	}
