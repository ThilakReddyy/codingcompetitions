#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin>>n;
  string s;
  set <int>p;
  cin.ignore();
  getline(cin,s);
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for(int i=0;i<n;i++)
  {
   
   p.insert(s[i]);
  }
  if(p.size()==26)
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

