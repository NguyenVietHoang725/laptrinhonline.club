#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isInteresting(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n / i) && i * (n / i) == n)
        {
            return 1;
        }
    } 
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int n;
    cin >> n;
    
    if (isInteresting(n))
    {
        cout << "true";
    }
    else 
        cout << "false";
        
    return 0;
}