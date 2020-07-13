#include<iostream>
using namespace std;
int main()
{
	char myChar;
	do{
		cout<<"i am a programmer"<<" "<<"if u want to print this message again please enter x:";
		cin>>myChar;
	}
	while(myChar=='x');
	return 0;
}
