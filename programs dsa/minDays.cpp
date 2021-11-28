#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n,j;
        cin>>n>>j;
        if(n%j==0){
            cout<<n/j<<endl;
        }else{
            cout<<n/j+1<<endl;
        }
    }
    return 0;
}