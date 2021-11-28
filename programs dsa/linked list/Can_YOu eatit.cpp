#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int n,k;
        cin>>n>>k;
        if(n%k==0)
        cout<<n/k<<endl;
        else if(n==0)
        cout<<"0"<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}