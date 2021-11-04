#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int m;
    cin>>m;
    ll arr[m];
    ll ans=0;
    ll x=0;
    for(int j=0;j<m;j++)
    {
      cin>>arr[j];
      if(arr[j]>(j+1))
      {
        x=abs((j+1)-arr[j]);
        ans=max(x,ans);
      }
    }
    cout<<ans<<endl;
  }
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   /*int test;
   cin>>test;
   for(int i=1;i<=test;i++)
   {
    cout<<"Case #"<<i<<": ";
    solve();
    cout<<endl;
   }
   */
   solve();
}

