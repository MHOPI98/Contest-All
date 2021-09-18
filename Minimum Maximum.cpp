#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       int arr[n];
       for(i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       if(arr[i]<=i)
       {
           cout<<arr[i]<<endl;
       }
    }
}
