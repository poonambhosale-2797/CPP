#include<iostream>
using namespace std;
int main()
{
	char myChar;
	cout<<"enter a char:"<<endl;

	cin>>myChar;
	while(myChar=='x')
	{
		cout<<"i am a programmer"<<" "<<"enter again char:";
		cin>>myChar;
	}
	return 0;
}
