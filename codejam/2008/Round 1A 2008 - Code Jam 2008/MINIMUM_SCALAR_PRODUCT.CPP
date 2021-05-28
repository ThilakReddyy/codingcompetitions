#include <bits/stdc++.h>
typedef long long int ull;
using namespace std;
int main()
{

    int T;
    cin >> T;
    for (int test = 1; test <= T; test++)
    {
        ull n, sum = 0;
        cin >> n;
        ull a[n], b[n];
        for (ull i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (ull i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        for (ull i = 0; i < n; i++)
        {
            sum = a[i] * b[n - i - 1] + sum;
        }
        cout << "Case #" << test << ": " << sum << endl;
    }
}