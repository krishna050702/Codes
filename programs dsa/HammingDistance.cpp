#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    cin>>x>>y;
    int count=0;
    int sum=x^y;
    int arr[10000];
    for ( i = 0; sum>0; i++)
    {
        arr[i]=sum%2;
        sum=sum/2;
    }
    for ( i =i-1; i>=0; i--)
    {
        if (arr[i]==1)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
}