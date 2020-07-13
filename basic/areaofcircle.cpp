#include<iostream>
using namespace std;
class circle
{
	int r;
	const float pie;
	public:
		circle(int input,float i):pie(i)
		{
			
			r=input;
		}
		void showrecord()
		{
			cout<<"radius="<<r<<"pie="<<pie;
		}
		
};
int main()
		
		{
			circle c1(10,3.14);
			c1.showrecord();
			return 0;
		
}
