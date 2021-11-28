#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int  i = 0; i <t; i++)
    {
        long long pc,pr;
        cin>>pc>>pr;
        long long x=ceil((pc*1.0)/9);
        long long y=ceil((pr*1.0)/9);
        if(x<y)
        {
            cout<<0<<" "<<x<<"\n";
        }
        else
        {
            cout<<1<<" "<<y<<"\n";
        }

    }
    return 0;
}