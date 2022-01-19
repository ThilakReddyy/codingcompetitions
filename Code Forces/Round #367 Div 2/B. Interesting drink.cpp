#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	ll n;
	cin >> n;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ll k, b;
	cin >> k;
	sort(arr, arr + n);
	for (ll i = 0; i < k; i++)
	{

		cin >> b;
		ll ans = upper_bound(arr, arr + n, b) - arr;
		cout << ans << "\n";
	}

}
int main()
{
	solve();
}
