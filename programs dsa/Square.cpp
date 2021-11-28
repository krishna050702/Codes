#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long a, b;

    

    for (int k = 0; k < t; k++)
    {
        cin >> a >> b;
        int cnt=0;
        for (long long i = a; i <= b; i++)
            for (long long j = 1; j * j <= i; j++)
                if (j * j == i)
                    cnt++;
        cout << cnt<< endl;
    }

    return 0;
}
