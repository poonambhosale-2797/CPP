#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"before swap string is:"<<endl;
	cin>>str1>>str2;
	str1.swap(str2);
	cout<<"after swap string is:"<<endl;
	cout<<str1<<"   "<<str2<<endl;
	return 0;
	
}
