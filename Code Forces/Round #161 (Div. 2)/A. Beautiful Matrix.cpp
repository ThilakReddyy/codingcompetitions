#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[5][5], b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n[i][j];
            if (n[i][j] == 1)
            {
                b = abs(2 - i) + abs(2 - j);
            }
        }
    }
    cout << b;

    return 0;
}