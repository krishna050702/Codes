// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         int i = a * b;
//         int j = c * d;

//         if (a == b && b == c && c == d)
//         {
//             cout << "0" << endl;
//         }
//         else if (i % 2 == 0 && j % 2 == 0 )
//         {
//             cout << "2" << endl;
//         }
//         else if (i % 2 != 0 || j % 2 != 0)
//         {
//             cout << "1" << endl;
//         }

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int A, B, P, Q;
        cin >> A >> B >> P >> Q;
        if (A == P && B == Q)
        {
            cout << 0 << endl;
        }
        else if (((A + B) % 2 == 0 && (P + Q) % 2 == 0) || ((A + B) % 2 != 0 && (P + Q) % 2 != 0))
        {
            cout << 2 << endl;
        }

        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}