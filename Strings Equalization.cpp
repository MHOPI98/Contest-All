#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,n;
        cin>>s>>n;
        int count=0;
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<s.length(); j++)
            {
                if(s[i]==n[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
