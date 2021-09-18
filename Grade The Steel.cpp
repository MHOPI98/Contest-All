#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d;
    cin>>t;
    while(t--)
    {
        float a,b,c;
        cin>>a>>b>>c;
        if(a>50 && b<0.7 && c>5600){
            d=10;
        }
        else if(a>50 && b<0.7){
           d=9;
        }
        else if(b<0.7 && c>5600)
        {
            d=8;
        }
        else if(a>50 && c>5600)
        {
            d=7;
        }
        else if(a>50 || b<0.7 || c>5600)
        {
            d=6;
        }
        else{
            d=5;
        }
       cout<<d<<endl;
    }

    return 0;
}
