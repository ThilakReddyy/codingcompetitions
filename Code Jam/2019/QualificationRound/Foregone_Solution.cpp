#include <bits/stdc++.h>
using namespace std;
void solve(int test)
{
  string s;
  cin>>s;
  string p="",q="";
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='4')
    {
      q=q+'3';
      p=p+'1';
    }
    else
    {
      q=q+s[i];
      if(!p.empty())
      {
        p=p+'0';
      }
    }
  }
  if(p.empty())
      {
        p="0";
      }
  cout<<"Case #"<<test<<": "<<q.c_str()<<" " <<p.c_str()<<endl;
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
