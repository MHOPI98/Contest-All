#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int d=n%10;
        while(n>9){
            n/=10;
        }
        int sum=n+d;
        cout<<sum<<endl;
    }
    return 0;
}
