#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, n, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b = b + a;
    }

    cout << setprecision(14) << (double)b / n;
}
