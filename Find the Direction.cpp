#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%4==0){
            cout<<"North"<<endl;
        }
        else if(x%4==1)
        {
            cout<<"East"<<endl;
        }
        else if(x%4==2)
        {
            cout<<"South"<<endl;
        }
        else{
            cout<<"West"<<endl;
        }
    }
}
