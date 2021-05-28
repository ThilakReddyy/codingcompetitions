#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    ull n;
    cin >> n;
    ull k[n];
    int count = 1, max = 1;
    for (ull i = 0; i < n; i++)
    {
        cin >> k[i];
        if (i != 0 && (k[i] >= k[i - 1]))
        {
            count = count + 1;
            if (max <= count)
            {
                max = count;
            }
        }
        else
        {
            count=1;
        }
    }
    cout << max;
}