#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin>>n;
  int sum=0;
  sum=sum+(int)n/100;
  n=n%100;
  sum=sum+(int)n/20;
  n=n%20;
  sum=sum+(int)n/10;
  n=n%10;
  sum=sum+(int)n/5;
  n=n%5;
  sum=sum+(int)n/1;
  cout<<sum;


}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   
   solve();
}

