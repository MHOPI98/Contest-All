#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum;
    cin>>x;
    if(x>=0 && x<40)
    {
        sum=40-x;
        cout<<sum<<endl;
    }
    else if(x>=40 && x<70)
    {
        sum=70-x;
        cout<<sum<<endl;
    }
    else if(x>=70 && x<90)
    {
        sum=90-x;
        cout<<sum<<endl;
    }
    else {
        cout<<"expert"<<endl;
    }
    return 0;
}
