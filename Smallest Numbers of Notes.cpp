#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        sum+=n/100;
        n%=100;
        sum+=n/50;
        n%=50;
        sum+=n/10;
        n%=10;
        sum+=n/5;
        n%=5;
        sum+=n/2;
        sum+=n%2;
        cout<<sum<<endl;
    }
    return 0;
}
