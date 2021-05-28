#include <iostream>
using namespace std;
typedef long long int ull;
ull max(ull n,ull arr[])
{
    int p;
    for (int i=0;i<60;i++)
    {
        if (arr[i]>n)
        {
            p=i;
            break;
        }
    }
    return arr[p-1]-1;
    
}
int main()
{
    ull arr[60];
    arr[0]=2;
    for (int i=1;i<60;i++)
    {
        arr[i]=arr[i-1]*arr[0];
    }
    ull t;
    cin >> t;
    for (ull i = 0; i < t; i++)
    {
        ull n;
        cin >> n;
        cout<<max(n,arr)<<endl;
    }
}