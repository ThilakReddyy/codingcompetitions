#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int a,b;
    cin>>a>>b;
    int c=abs(a-b)/10;
    if((a-b)%10!=0)
    {
      c=c+1;
    }
    cout<<c<<endl;
  }

}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

