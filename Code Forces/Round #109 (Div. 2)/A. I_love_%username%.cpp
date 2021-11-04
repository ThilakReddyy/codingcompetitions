#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin>>n;
  int arr[n];
  int maxi,mini;
  if(n>0)
  {
    cin>>arr[0];
    maxi=arr[0],mini=arr[0];
  }
  int ans=0;
  for(int i=1;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]>maxi)
    {
      maxi=arr[i];
      ans=ans+1;
    }
    if(arr[i] < mini)
    {
      mini=arr[i];
      ans=ans+1;
    }
  }
  cout<<ans;
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   
   solve();
}

