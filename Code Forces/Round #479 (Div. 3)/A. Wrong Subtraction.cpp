#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    ull n;
    int k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout<<n;
}

