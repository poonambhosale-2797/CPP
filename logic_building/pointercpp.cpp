//pointer
#include<iostream>
using namespace std;
int main()
{
	int var=5;
	 int *ip;
	 float *fp;
	 double *dp;
	 char *cp;
	 ip=&var;
	 cout<<"variable value = "<<var<<endl;
	 cout<<"pointer pointing to value = "<<*ip<<endl;
	 cout<<"pointer pointing to address =  "<<ip<<endl;
	 *ip=6;
	 cout<<"variable value = "<<var<<endl;
	 cout<<"pointer pointing to value = "<<*ip<<endl;
	 cout<<"pointer pointing to address =  "<<ip<<endl;
	 return 0;
}
