
#include <iostream>
using namespace std;

int main()
{
    cout<<"enter an n for range  and m for divide";
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
       if(i%m==0)
       {
          cout<<"no divisible by n="<<i<<endl;
          if(i%2==0)
          {
              cout<<"no is even="<<i<<endl;
          }
          else
            cout<<"no is odd="<<i<<endl;

       }
       else
       cout<<" num is not divisible by m ="<<i<<endl;
}


    return 0;
}


