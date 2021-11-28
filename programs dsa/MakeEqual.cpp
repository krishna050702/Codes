// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         int maxN=INT_MIN;
//         int minN=INT_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             maxN=max(maxN,arr[i]);
//             minN=min(maxN,arr[i]);
//         }
//         int diff=maxN-minN;
//         cout<<diff<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int T;
//     cin>>T;
//     for(int t=0;t<T;t++){
//         int n;
//         cin>>n;
//         int A[n];
//         int min=0,max=0,count=0;
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//             if (A[i]>max)
//             {
//                 max=A[i];
//             }
                 
//         }min=A[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (min>A[i])
//             {
//                 min=A[i];
//             }
            
//         }
        
        
//         count=max-min;
//         cout<<count<<endl;
//     }
    
    
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin>>T;
    while(T--)
    {
        int k;
        cin>>k;
        int arr[k];
        
        for(int i=0 ; i<k ; i++)
        {
            cin>>arr[i];
        }
        
        int Max_num = INT_MIN;
        int Min_num = INT_MAX;
        
        for(int i=0 ; i<k ; i++)
        {
            Max_num = max(Max_num,arr[i]);
            Min_num = min(Min_num,arr[i]);
        }
        
        int diff=0;
        diff = Max_num - Min_num;
        cout<< diff <<endl;
        
    }
    return 0;
}