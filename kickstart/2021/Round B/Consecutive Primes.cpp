#include <iostream>
using namespace std;

int isPrimeNumber(int n)
{
    bool isPrime = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{

    int T;
    cin >> T;
    bool isPrime;
        unsigned long long int a[9592];
        unsigned long long int j = 0;
        for (unsigned long long int n = 2; n < 100000; n++)
        {
            

            // isPrime will be true for prime numbers
            isPrime = isPrimeNumber(n);

            if (isPrime == true)
            {

                a[j] = n;
                //cout<<j<<" "<<a[j]<<" ";
                j++;
            }
        }
    for (int test = 1; test <= T; test++)
    {
        unsigned long long int Z;
        cin >> Z;
        
        unsigned long long int product =0;
        for (unsigned long long int i=1;Z>product;i++)
        {
            
            product=a[i]*a[i-1];
            //cout<<a[i]<<" "<<product<<" ";
            if (product>Z)
            {
                product=a[i-1]*a[i-2];
                break;
            }
        }
        cout<<"Case #"<<test<<": "<<product<<" "<<endl;
    }

    return 0;
}