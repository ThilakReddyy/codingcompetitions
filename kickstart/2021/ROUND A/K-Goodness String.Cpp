#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int q,r;
	cin>>q>>r;
	string s;
	cin>>s;
	int goodness=0;
	for(int i=0;i<q/2;i++)
	{
		if(s[i]!=s[q-i-1])
		{
			goodness=goodness+1;
		}
	}
	cout<<abs(r-goodness);

}
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Case #"<<i<<": ";
		solve();
		cout<<endl;
	}
	
}
