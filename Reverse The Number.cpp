#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,rem;
        cin>>n;
        while(n>0){
            rem=n%10;
            ans=ans*10+rem;
            n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
