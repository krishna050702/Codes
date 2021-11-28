#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, max, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (i == 0)
                max = k;
            if (k <= max)
            {
                max = k;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}