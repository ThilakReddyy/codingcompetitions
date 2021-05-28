#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve(int i)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> even;
    vector<int> odd;
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            int c = odd.back();
            odd.pop_back();
            t.push_back(c);
        }
        else
        {
            int c = even.back();
            even.pop_back();
            t.push_back(c);
        }
    }

    cout << "Case #" << i << ": ";
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }
}
int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        solve(i);
    }
    cout << endl;
}