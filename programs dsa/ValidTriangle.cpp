#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        string result=(a+b+c==180 &&a&&b&&c)?"YES":"NO";
        if (result=="YES")
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
        
    }
    
}