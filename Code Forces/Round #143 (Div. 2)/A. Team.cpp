#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
        {
            count = count + 1;
        }
    }
    cout << count;
    return 0;
}