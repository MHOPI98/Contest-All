#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b;
    while(a--){
        cin>>c;
        if(c%b==0){
            sum++;
        }
    }

        cout<<sum<<endl;
    return 0;
}
