#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	ll n,l,r,k;
	cin>>n>>l>>r>>k;
	ll arr[n];
	vector<int>vec;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>=l && arr[i]<=r)
		{
			vec.push_back(arr[i]);
		}
	}
	int sum=0;
	sort(vec.begin(),vec.end());
	ll i;
	for(i=0;i<vec.size();i++)
	{
		if(sum+vec[i]>k)
		{
			break;
		}
		sum=sum+vec[i];
	}
	cout<<i<<endl;
		
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<"Case #"<<i<<": ";
	// 	cin.ignore();
	// 	solve();
	// 	cout<<endl;
	// }
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		solve();
	}
}
