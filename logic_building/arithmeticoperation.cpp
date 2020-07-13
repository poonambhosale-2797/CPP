//arithmetic operation
#include<iostream>
using namespace std;
int main()
{
	cout<<"arithmetic operation program:"<<endl;

	cout<<"1.ADDITION:"<<endl<<"2.SUBSTRACTION:"<<endl<<"3.MULTIPLICATION"<<endl<<"4.DIVISION"<<endl<<"5.MODULO"<<endl;
		cout<<"select the appropriate operation:";
	int x;
	cin>>x;

	switch(x)
		
		{
			int a,b;
			case 1:
				cout<<"enter 2 no:"<<endl;
				cin>>a>>b;
				cout<<"addition of two number is:"<<endl<<(a+b);
		
				break;
			case 2:
				cout<<"enter 2 no:"<<endl;
				cin>>a>>b;
				cout<<"substraction of two number is:"<<endl<<(a-b);
			
				break;
			case 3:
				cout<<"enter 2 no:"<<endl;
				cin>>a>>b;
				cout<<"multiplication of two number is:"<<endl<<(a*b);
				
				break;
            case 4:
            	cout<<"enter 2 no:"<<endl;
            	cin>>a>>b;
				cout<<"division of two number is:"<<endl<<(a/b);
				
				break;
            case 5:
            	cout<<"enter 2 no:"<<endl;
            	cin>>a>>b;
				cout<<"modulo of two number is:"<<endl<<(a%b);
				
				break;
	        default:
	        	cout<<"invalid operation";
	        	

		}
	
	return 0;
}
