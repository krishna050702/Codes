#include <bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
        return 1;
    int prevPower = power(x, y - 1);
    return n * prevPower;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0;
}