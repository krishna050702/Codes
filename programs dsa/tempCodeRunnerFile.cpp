#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, s;
        cin >> n >> k >> s;
        s = s - (n * n);

        cout << (s / (k - 1)) << endl;
    }
    return 0;
}