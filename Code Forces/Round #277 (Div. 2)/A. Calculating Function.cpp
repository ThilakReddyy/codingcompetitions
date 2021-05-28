#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    ull n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << (-1 * (n + 1) / 2);
    }
}