#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
  string s;
  getline(cin,s);
  string p="abcdefghijklmnopqrstuvwxyz";
  string q="ynficwlbkuomxsevzpdrjgthaq";
  
  string ans="";
  int k;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==' ')
    {
      ans=ans+' ';
    }
    else
    {
      k=q.find(s[i]);
    ans=ans+p[k];
    }
    
  }
   cout<<ans;
  
}
int  main()
{
   int test;
   cin>>test;
   cin.ignore();
   for(int i=1;i<=test;i++)
   {
    cout<<"Case #"<<i<<": ";
    solve();
    cout<<endl;
   }
}
