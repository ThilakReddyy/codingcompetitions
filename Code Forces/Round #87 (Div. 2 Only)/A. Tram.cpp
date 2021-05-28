#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    int n, a, b, p=0, q=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p = b - a + p;
        if (q < p)
        {
            q = p;
        }
    }
    cout << q;
}