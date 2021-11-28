#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int sum=0;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        for (int k = 0; k < n; k++)
        {
            sum=sum+arr[k];
        }
        if(sum%2==0)
         cout<<"1"<<endl;
         else
         cout<<"2"<<endl;
        
    }
    return 0;
}