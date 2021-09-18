#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int size=1000, nfact[size],carry=0,j=size-1;
        nfact[size-1]=1;
        while(n>1)
        {
            int x;
            for(int i=size-1; i>=j; i--)
            {
                x=nfact[i]*n+carry;
                nfact[i]=x%10;
                carry=x/10;

            }
            while(carry>0)
            {
                nfact[--j]=carry%10;
                carry/=10;
            }
            n--;
        }
        for(int k=j; k<size; k++)
        {
            cout<<nfact[k];
        }
        cout<<endl;
    }
}
