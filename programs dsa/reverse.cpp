#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int brr[n];
    for (int j = 0,i=n-1; j < n,i>=0; j++,i--)
    {
        brr[j]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<brr[i]<<" ";
    }
    
}