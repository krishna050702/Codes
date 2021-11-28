#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt;
    getline(cin,txt);
    int count=0;
    int i;
    for ( i =1;txt[i]!='\0'; i++)
    {
        if (txt[i]==' ')
        {
            count++;
        }
    }
    cout<<count+1<<endl;
    return 0;
}