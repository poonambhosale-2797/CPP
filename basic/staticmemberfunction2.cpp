#include<iostream>
using namespace std;
class student
{
	int roll;
	static int count;
	public:
	student(int input)
	{
		roll=input;
		count++;
		
	}
	void show()
	{
		cout<<"roll="<<roll;
		
	}
static void studentcounter()
	{
		cout<<"total student="<<count;
		
	}
	~student()
	{
		--count;
	}
};
int student::count;
int main()
{
	student R1(1);
	student R2(2);
	student R3(3);
	R1.show();
	R2.show();
	R3.show();
	student::studentcounter();
	{
		student R4(4);
		student R5(5);
		R5.studentcounter();
		}	
		R3.studentcounter();
		return 0;
		}

	
