#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, i, j;
        char ch[51][51];
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> ch[i][j];
            }
        }

        char c;
        long long f = 0, po;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (ch[i][j] != '.')
                {
                    po = i + j;
                    f = 1;
                    c = ch[i][j];
                    break;
                }
            }
            if (f)
                break;
        }
        if (f == 0)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2)
                        ch[i][j] = 'W';
                    else
                        ch[i][j] = 'R';
                }
            }
        }

        long long flg = 0;
        if (po % 2 == 0) //(i+j)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0 and ch[i][j] == '.')
                        ch[i][j] = c;

                    if ((i + j) % 2 != 0 and ch[i][j] == '.')
                    {
                        if (c == 'R')
                            ch[i][j] = 'W';
                        else
                            ch[i][j] = 'R';
                    }
                }
            }
        }

        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 != 0 and ch[i][j] == '.')
                        ch[i][j] = c;
                    if ((i + j) % 2 == 0 and ch[i][j] == '.')
                    {
                        if (c == 'R')
                            ch[i][j] = 'W';
                        else
                            ch[i][j] = 'R';
                    }
                }
            }
        }

        long long yeh = 0;
        char ck = ch[0][0];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if ((i + j) % 2 == 0 and ch[i][j] == ck)
                    continue;
                if ((i + j) % 2 != 0 and ch[i][j] != ck)
                    continue;
                else
                    yeh = 1;
            }
            if (yeh)
                break;
        }

        if (yeh)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    cout << ch[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}