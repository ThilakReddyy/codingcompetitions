#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;
int main()
{
    int n, m;
    ull a;
    cin >> n >> m >> a;
   cout<<((m + a - 1) / a) * ((n + a - 1) / a);
}
