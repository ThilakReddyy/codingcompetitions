#include<bits/stdc++.h>
using namespace std;
typedef long long  int ll;
void solvetorow(string s)
{
	string k;
	k = k + "R";
	int index;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			index = i;
			break;
		}
	}
	for (int i = index; i < len; i++)
	{
		k = k + s[i];
	}
	int count = 0;
	for (int i = 0; i < index ; i++)
	{
		count = count + pow(26, i) * (s[index - 1 - i] - 64);
	}
	k = k + "C";
	cout <<  k << count;
}
void solvefromrow(string s)
{
	long input = atol(s.c_str());
	string output = "";
	while (input > 0)
	{
		char letter = 'Z';

		long inputMod = input % 26;
		if (inputMod > 0)
		{
			letter = 'A' + inputMod - 1;

		}
		else
		{
			input = input - 26;

		}
		input = input / 26;
		output = letter + output;
	}
	cout << output;
}
void solve()
{
	string s;
	cin >> s;
	if (s[0] != 'R')
	{
		solvetorow(s);
	}
	else
	{
		string p = "", q = "";
		int c = 0;
		if (s[1] == 'C')
		{
			solvetorow(s);
			return;
		}
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] == 'C')
			{
				c = 1;
			}
			else  if (s[i] != 'C' && (s[i] <= 47 || s[i] >= 58))
			{
				solvetorow(s);
				return;
			}
			else if (s[i] == 'C' && c == 1)
			{
				solvetorow(s);
				return;
			}
			else
			{
				if (c == 0)
				{
					p = p + s[i];
				}
				else
				{
					q = q + s[i];
				}
			}
		}
		if (c != 1)
		{

			solvetorow(s);
			return;
		}
		solvefromrow(q);
		cout  << p;
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	// int p;
	// cin >> p;
	// for (int i = 1; i <= p; i++)
	// {
	// 	cout << "Case #" << i << ": ";

	// 	solve();
	// 	cout << endl;
	// }
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		solve();
		cout << endl;
	}
	// solve();

}
