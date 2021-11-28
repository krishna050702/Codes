// #include <bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main()
// {
//      ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         string s1, s2;
//         cin >> s1>>s2;
//         int ans = 0;
//         int j=0;
//         while (j<n)
//         {
//             string p1 = s1.substr(j, n - j);
//             string p2 = s2.substr(j, n - j);
//             if (p1 < p2)
//                 ans++;
//             j++
//         }
        
        
//         cout << ans << endl;
//     }
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
        string a,b;
        cin>>a>>b;
        bool bigb;
        int ans=0;
        bigb=b[n-1]>a[n-1];
        if(bigb)
        ans++;
        for (int i =n-2; i>=0; i--)
        {
            if(b[i]>a[i])
            {
                bigb=true;
                ans++;
            }
            else if(b[i]<a[i])
            {
                bigb=false;
            }
            else{
                if(bigb)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}