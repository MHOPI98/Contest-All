#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m[n+1];
    m[0]=arr[0];
    for(int i=1; i<n; i++){
        m[i]=m[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<m[b]<<endl;
        }
        else{
            cout<<m[b]-m[a-1]<<endl;
        }
    }
    return 0;
}
