#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int A,B;
        cin>>A>>B;
        int sum=A+B;
        if (sum%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        cout<<"Alice"<<endl;
        
    }
    return 0;
    
}