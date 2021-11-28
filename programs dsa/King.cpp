#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        if (N%2==0)
        {
            cout<<N<<endl;
        }
        else
        cout<<N-1<<endl;
        
    }
    return 0;
}