#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i<t; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if ((z*2)+x>=y)
        cout<<"YES"<<endl;
        else
        cout<<"NO\n";
    }
    return 0;
}