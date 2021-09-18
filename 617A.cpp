#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    if(n%5==0)
    {
        d=n/5;
    }
    else{
        d=(n/5)+1;
    }
    cout<<d<<endl;
    return 0;
}
