#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,year;
    cin>>t;
    while(t--)
    {
        cin>>year;
        string days[7]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
        int count =0;
        for(int i=1900; i<year; i++){
            if(i%4){
                count++;
            }
            else if(i%100){
                 count+=2;
            }
            else if(i%400){
                count++;
            }
            else{
                count+=2;
            }
        }
        count%=7;
        cout<<days[count]<<endl;
        }
        return 0;
}
