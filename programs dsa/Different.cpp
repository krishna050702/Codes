#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int result,ans=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (arr[i]!=arr[j])
            {
                result=abs(i-j);
                ans=max(ans,result);
            }
            
        }
        
    }
    cout<<ans<<endl;
    
}