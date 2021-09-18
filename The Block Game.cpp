#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,rem;
        cin>>n;
         int m=n;
        while(n>0)
        {
            rem= n%10;
            sum=sum*10+rem;
            n/=10;
        }

        if(sum==m)
        {
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
}
