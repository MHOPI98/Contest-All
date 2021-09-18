#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        float d;
        cin>>a;
        if(a<1500){
            d=a+0.1*a+0.9*a;
        }
        else{
            d=a+500+0.98*a;
        }
        cout<<fixed<<setprecision(2)<<d<<endl;
    }
    return 0;
}
