#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << "NO" << endl;
    }
    return 0;
}
