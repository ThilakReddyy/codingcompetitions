#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int s;
  cin>>s;
  int sum=0;
  for(int i=0;i<s;i++)
  {
   string s;
   cin>>s;
   if(s=="Icosahedron")
   {
      sum=sum+20;
   }
   else if(s=="Tetrahedron")
   {
      sum=sum+4;
   }
   else if(s=="Cube")
   {
      sum=sum+6;
   }
   else if(s=="Octahedron")
   {
      sum=sum+8;
   }
   else if(s=="Dodecahedron")
   {
      sum=sum+12;
   }
  }
  cout<<sum;
}
int  main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);
   solve();
}

