#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	int a;
	cin>>a;
	if(a<=10 || a>21)
	{
		cout<<0;
		return ;
	}
	if(a==20)
	{
		cout<<15;
		return;
	}
	cout<<4;
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	solve();
}
