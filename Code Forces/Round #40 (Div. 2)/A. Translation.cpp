#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = s[n - i - 1];
        s[n - i - 1] = s[i];
        s[i] = temp;
    }
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
