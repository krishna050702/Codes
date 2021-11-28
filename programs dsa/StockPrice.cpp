#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        float s,a,b,c,newS=0;
        cin>>s>>a>>b>>c;
         newS=s+(s*c)*0.01; 
        if(a<=newS && b>=newS)
         cout<<"Yes\n";
         else
         cout<<"No\n";
    }
    return 0;
}
