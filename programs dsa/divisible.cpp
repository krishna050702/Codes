#include "bits/stdc++.h"
#include <unordered_map>
using namespace std;

// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

// Macros
#define int long long
#define endl "\n"
#define pb push_back
#define fi first
#define se second
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define sz(X) (int)X.size()
#define setbits(X) __builtin_popcountll(X)
#define fix(X) fixed << setprecision(X)
#define mem0(X) memset((X), 0, sizeof((X)))
#define mem1(X) memset((X), -1, sizeof((X)))
#define fl(x, n) for (int x = 0; x < n; ++x)
#define MAX 1000000000

#define ll long long
#define int long long
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.find(k - arr[i]) != m.end())
        {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    fl(i,n)
    cin>>a[i];
    int op=0,om=0,tp=0,tm=0;
    fl(i,n){
        if((a[i]-1)%3==0)
        {om++;
}
        else if((a[i]+1)%3==0)
        {op++;}
       
    }
   // cout<<op<<om<<tp<<tm<<" ";
   //cout<<om<<op<<" ";
if(op==om){
    cout<<(op)<<endl;
}
// else if(op==0 and om==0)
// cout<<0<<endl;
else
cout<<-1<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}