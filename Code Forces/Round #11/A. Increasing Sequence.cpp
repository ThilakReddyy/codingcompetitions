#include <bits/stdc++.h>
using namespace std;


void solve()
{
	int n, d;
	cin >> n >> d;
	int a[n], count = 0;;
	cin >> a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= a[i - 1])
		{
			int temp = a[i - 1] - a[i];
			if (temp < d)
			{
				a[i] += d;
				count += 1;
			}
			else
			{
				int k = temp / d;
				a[i] +=  (k + 1) * d;
				count +=  k + 1;

			}
		}


	}
	cout << count;

}
int main()
{
	solve();
}
