#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s;
        cin>>s;
        if(s=='b' || s=='B')
            cout<<"BattleShip"<<endl;

        else if(s=='c'||s=='C')

                cout<<"Cruiser"<<endl;

        else if(s=='d'|| s=='D')

            cout<<"Destroyer"<<endl;

        else if(s=='f' || s=='F')

        cout<<"Frigate"<<endl;

    }

    return 0;
}
