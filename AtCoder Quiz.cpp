#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1!="ABC" && s2!="ABC" && s3!="ABC")
    {
        cout<<"ABC"<<endl;
    }
     else if(s1!="ARC" && s2!="ARC" && s3!="ARC")
    {
        cout<<"ARC"<<endl;
    }
     else if(s1!="AGC" && s2!="AGC" && s3!="AGC")
    {
        cout<<"AGC"<<endl;
    }
    else{
        cout<<"AHC"<<endl;
    }
    return 0;
}
