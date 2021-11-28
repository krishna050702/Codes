#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int num;
        cin >> num;
        int rev = 0;
        while (num > 0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}