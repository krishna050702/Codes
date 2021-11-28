#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        int n,s;
        cin>>n>>s;
        int sum=0,temp=0;
        for (int i = 0; i <n; i++)
        {
            while(s>0)
            {
                sum=sum+s;
                s--;
            }
            s=sum;
            temp=sum;
            sum=0;
        }
        cout<<temp<<endl;
    }
    return 0;
}