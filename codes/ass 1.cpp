#include<iostream>
using namespace std;
 class swap1{
 	public:
 	  int swapnum(int &a,int &b)
 	  {
 	  	/*
		   case 1
		   a=a+b;
 	  	b=a-b;
 	  	a=a-b;
 	  	*/
 	  	/*
		case 2
 	  	b=b-a;
 	  	a=a+b;
 	  	*/
 	  	//case 3;
 	  	b=a+b;
 	  	a=b-a;
 	  	b=b-a;
	  }
 };
 int main()
 {
 	int p;
 	int q;
 	p=10;q=20;
 	swap1 s1;
 	s1.swapnum(p,q);
 	cout<<"After swap p="<<p;
	 cout<<"q="<<q;
 }
