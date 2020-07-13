#include <iostream>

using namespace std;

int main()
{
    int p,t,r;
    int ans;
    cout<<"Enter principal,timeand rate";
    cin>>p>>t>>r;
    ans=p*t*r/100;
    cout<<"Simple interest="<<ans;
    return 0;
}
