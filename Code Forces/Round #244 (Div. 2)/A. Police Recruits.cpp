#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin>>n;
  int a[n];
  int police=0,untreated=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<0)
    {
      if(police>0)
      {
        police=police-1;
      }
      else
      {
        untreated=untreated+1;
      }
    }
    else
    {
      police=police+a[i];
    }

  }
  cout<<untreated;

}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

