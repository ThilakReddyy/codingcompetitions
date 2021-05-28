#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main()
{
    ull n;
    cin>>n;
    int count = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        if (remainder == 7 || remainder == 4)
        {
            count = count + 1;
        }
        n = n / 10;
    }
    if (count == 7 || count == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
