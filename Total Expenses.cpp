#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double a,b,c,sum;
        cin>>a>>b;
        sum=a*b;
        if(a>1000){
            c=sum/10;
            sum-=c;
            cout<<fixed<<setprecision(6)<<sum<<endl;
        }
        else{
             cout<<fixed<<setprecision(6)<<sum<<endl;
        }
    }
    return 0;
}
