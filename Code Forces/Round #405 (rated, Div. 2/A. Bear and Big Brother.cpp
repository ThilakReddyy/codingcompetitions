#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        count=count+1;
    }
    cout<<count;
}
