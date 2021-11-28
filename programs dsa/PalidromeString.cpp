#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int len=s1.length();
    //int l; //Hold length of string
    
    //finding length of string
    //for(l = 0; str[l] != '\0'; l++);

    //Comparing first element with last element till middle of string 
    int i;
    for(i = 0; (i < len/2) && (s1[i] == s1[len - i - 1]); i++);

    if(i == len/2)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
	
    return 0;
    
}