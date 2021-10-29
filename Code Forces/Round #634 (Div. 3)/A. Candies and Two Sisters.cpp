#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int s;
  cin>>s;
  for(int i=0;i<s;i++)
  {
   int p;
   cin>>p;
   int sum=0;
   if(p%2==0)
   {
      sum=(int)(p/2)-1;
   }
   else
   {
      sum=(int)p/2;
   }
   cout<<sum<<endl;
   }
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

