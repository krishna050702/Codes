// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         long long arr[n];
//         for (long long i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         long long temp=0;
//         for (long long i = 0; i < n; i++)
//     {
//         for (long long j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//         cout<<arr[1]-arr[0]<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);
            int m=1000000000;
            for(int i=0;i<n-1;i++)
            {
                            m=min(m,a[i+1]-a[i]);
            }
            cout<<m<<endl;
    }
    return 0;
}

