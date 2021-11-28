#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll T;cin>>T;
    vector<ll>res ={975, 951, 903, 891, 843, 819, 771, 765, 717, 693, 645 ,633, 585, 561, 513, 511, 495,
    471, 455, 443, 427, 403, 387, 381, 365, 341, 325, 313, 297, 273, 257, 255, 231, 219, 195, 189, 165, 153,129, 127,119 ,107, 99,
    93, 85, 73, 65, 63, 51, 45, 33, 31, 27, 21, 17, 15, 9, 7, 5 ,3, 1};
    while(T--)
    {
        ll n;cin>>n;
        int m=res.size();
        int rem=n;
        int ans=0;
        map<int,int>mp;
        bool flag=true;
        for(int I=0; I<m; I++)
        {
            if(res[I]==0)continue;
            int possible=rem/res[I];
            if(possible==0)continue;
            mp[res[I]]+=possible;
            ans+=possible;
            rem= rem-(possible*res[I]);
            if(ans>12)
            {
                flag=false;
                break;
            }
            if(rem<=0)break;
        }
        if(flag)
        {
            vector<ll>result;
            for(auto &p:mp)
            {
                int times=p.second;
                while(times--)
                {
                    result.push_back(p.first);
                }
            }
            cout<<result.size()<<endl;
            for(int I:result)
            {
                cout<<I<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
  return 0;
}