#include<bits/stdc++.h>

using namespace std;
int main()
{
    string txt;
    getline(cin,txt);
    int len=txt.length();   //int l;  for(l=0;txt[l]!='/0';l++);
    for (int i =len-1; i >=0; i--)
    {
        cout<<txt[i];
    }
    
}