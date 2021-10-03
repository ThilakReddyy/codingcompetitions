#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int test)
{
  int n;
  cin>>n;
  ll a[n],b[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b,b+n);
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i]*b[n-i-1];
  }
  cout<<"Case #"<<test<<": "<<sum<<endl;

}
int  main()
{
   int test;
   cin>>test;
   for(int i=1;i<=test;i++)
   {
    solve(i);
   }
}
