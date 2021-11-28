#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,temp;
        cin>>m>>n;
        int arr[m][n];
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                arr[i][j]=i*j;
                cin>>arr[i][j];
            }
        }
        cout<<"done\n";
        
         for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i][j]>arr[i][j+1])
                {
                    temp=arr[i][j+1];
                    arr[i][j+1]=arr[i][j];
                    arr[i][j]=temp;
                }
            }
         }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                cout<<arr[i][j]<<" ";
        return 0;
}