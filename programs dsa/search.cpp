#include "bits/stdc++.h"
using namespace std ;
int main()
{
    int n,k;
    cin>>n>>k;
    int flag=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        if (k==arr[i])
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        cout<<"1"<<endl;
    }
    else
    cout<<"-1"<<endl;
    
    
}