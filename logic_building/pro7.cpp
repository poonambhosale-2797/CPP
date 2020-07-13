//vowel and consonant
#include<iostream>
using namespace std;
int main()
{
	char c;
	int lc,uc;
	cout<<"enter an aplphabeat:";
	cin>>c;
	lc=( c =='a' || c =='e'|| c =='i'|| c =='o'|| c =='u' );
	uc=(c =='A'|| c =='E'|| c =='I'|| c =='O'|| c =='U');
	if(lc||uc)
	{
		cout<<c<<" "<<"it is vowel:"<<endl;
		
	}
	else
	{
		cout<<c<<" "<<"it is consonant"<<endl;
	}
	return 0;
}
