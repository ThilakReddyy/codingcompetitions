#include <iostream>
using namespace std;
typedef unsigned long long ull;
 ull getSum(ull n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
int main()
{
   // freopen("Input.txt", "r", stdin);
   // freopen("Output.txt", "w", stdout);
   // freopen("Error.txt", "w", stderr);
   ull a;
   cin>>a;
   for ( int i=0;i<a;i++)
   {
       ull b;
       cin>>b;
       if (b%2050==0)
       {
           ull r= b/2050;
           ull sum=0;
            r=getSum(r);
           cout<<r<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
   }
    return 0;
}
