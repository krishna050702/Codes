// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, count = 0;
//         int two = 0, five = 0, ten = 0, fifty = 0, hundred = 0;
//         cin >> n;
//         if (n >= 100)
//         {
//             hundred = (n / 100);
//             n %= 100;
//         }
//         if (n >= 50)
//         {
//             fifty = (n / 50);
//             n %= 50;
//         }
//         if (n >= 10)
//         {
//             ten = (n / 10);
//             n %= 10;
//         }
//         if (n >= 5)
//         {
//             five = (n / 5);
//             n %= 5;
//         }
//         if (n >= 2)
//         {
//             two = (n / 2);
//             n %= 2;
//         }
//         count=two+five+ten+fifty+hundred;
//         cout << count << endl;
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

#define ll long long

#define MIN(a, b) a < b ? a : b

using namespace std;

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);
    int array[6] = {100, 50, 10, 5, 2, 1};
    while( t-- ) {
        int n, answer = 0;
        scanf("%d", &n);

        for(int i = 0; i < 6; i++) {
            answer += (n/array[i]);
            n = n % array[i];
        }

        printf("%d\n", answer);
    }
    return 0;
}