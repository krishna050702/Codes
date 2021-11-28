#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter first string\n";
    getline(cin,s1);
    cout<<"Enter second string\n";
    getline(cin,s2);

    cout<<s1.append(s2)<<endl;

}