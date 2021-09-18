#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,ans;
        cin>>n>>s;
        ans=n*(n+1)/2;
        ans=ans-s;
        if(ans>=1 && ans<=n)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
