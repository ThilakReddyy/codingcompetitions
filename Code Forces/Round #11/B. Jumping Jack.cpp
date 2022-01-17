#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	ll n;
	cin >> n;
	if (n < 0)
	{
		n = 0 - n;
	}
	int increas = 0;
	int total = 0;
	while (total < n || (total - n) % 2 != 0)
	{
		increas++;
		total += increas;
	}
	cout << increas;

}
int main()
{
	solve();
}
