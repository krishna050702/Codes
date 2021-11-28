#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int a=abs(x);
        int b=abs(y);
        if(a%k==0 && b%k==0)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}