#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    ull n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            cout << (k * 2) - 1;
        }
        else
        {
            cout << (k - (n / 2)) * 2;
        }
    }
    else
    {
        if (k <= (n / 2) + 1)
        {
            cout << (k * 2) - 1;
        }
        else
        {
            cout << (k - (n / 2) - 1) * 2;
        }
    }
}