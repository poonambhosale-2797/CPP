#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the num";
    cin>>num;
    if(num%3==0)
    {
     cout<<"Three";
      if(num%3==0 && num%7==0)
        cout<<"-seven";
    }


        else if (num%7==0)
        cout<<"seven";


    return 0;
}
