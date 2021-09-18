#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,ans,m;
        cin>>a>>b;
        ans=__gcd(a,b);
        m=(a*b)/__gcd(a,b);
        cout<<ans<<" "<<m<<endl;
    }
}
