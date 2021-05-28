#include <iostream>
using namespace std;
typedef long long int ull;
int main()
{
   ull n;
   cin>>n;
   int b=(n/5);
   if (n%5!=0)
   {
       b=b+1;
   }
   cout<<b;
}

