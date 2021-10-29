#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  string a, b, c, s;
   cin >> a >> b >> c;
   s=a+b;
   sort(s.begin(),s.end());
   sort(c.begin(),c.end());
   if(s==c)
   {
      cout<<"YES";
   }
   else
   {
      cout<<"NO";
   }
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

