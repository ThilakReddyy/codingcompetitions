#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n,m;
  cin>>n>>m;
  cout<<min(n,m)<<" "<<(int)(abs(n-m)/2);
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

