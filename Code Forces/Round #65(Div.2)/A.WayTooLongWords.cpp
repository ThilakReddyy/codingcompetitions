#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int b = s.length();
        if (b > 10)
        {
            cout << s.at(0) << (b - 2) << s.at(b - 1) << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}