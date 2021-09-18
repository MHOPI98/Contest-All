#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n, count =0,rem;
     cin>>n;
 while(n>0){
        rem=n%10;
        if(rem==4)
        {
            count++;
        }
        n/=10;
    }
     cout<<count<<endl;
    }
    return 0;
}
