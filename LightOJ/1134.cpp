//BISMILLAHIR RAHMANIR RAHIM
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<set>
#include <iostream>
#include<stack>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#define N 1000000
#define sn scanf
#define pf printf
#define pb push_back

typedef long long int ll;
using namespace std;
struct T{
int a;
};
ll bigmod(ll a,ll b,ll mod)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll hh=bigmod(a,b/2,mod);
        return (hh*hh)%mod;
    }
    else
    {
       return (a*bigmod(a,b-1,mod))%mod;
    }
}
ll ar[100005],dp[100005];
int main()
{
    ll i,j,k,l,t,cs=1,r=1,s,m,n,a,b,c,d,e,f,g,h,u,v;
  #ifdef O_judge
   // freopen(".txt","r",stdin);
  #endif
    sn("%lld",&t);
    while(t--)
    {
        sn("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        {
            sn("%lld",&ar[i]);
        }
        memset(dp,0,sizeof(dp));
        c=0;
        s=0;
        for(i=0;i<n;i++)
        {
           s=(s+ar[i])%m;
           c+=dp[s];
           dp[s]++;
        }
        pf("Case %lld: %lld\n",cs++,c+dp[0]);
    }
    return 0;

}

/*
#include <bits/stdc++.h>
  #define _ ios_base::sync_with_stdio(0);cin.tie(0);
*/

