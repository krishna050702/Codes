#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int bb)
{
    if(bb==0)
    {
        return a;
    }
    else 
    return gcd(bb,a%bb);
}

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int n,k;
        cin>>n>>k;
        int p=0;

        int g=gcd(n,k);
        p=n/g;
        cout<<p<<endl;

    }
    return 0;
}