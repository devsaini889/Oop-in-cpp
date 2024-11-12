// In this program we are checking the number is prime or not with 2 different methods

// 1. By using loop

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool isprime(int n)
{
    if (n <= 1)
    {
        cout << "The number is not a prime number" << endl;
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "The number is not a prime number" << endl;
            return false;
        }
    }
    cout << "The number is  a prime number" << endl;
    return true;
}
// 2. By using recursion
int reisprime(int n, int i)
{
    if (i == 1)
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }
    return (n, i - 1);
}
int main()
{
    // cout << "The Prime number is :" << endl;
    // isprime(2);

    
    int num, p;
    cout << "Enter the number :" << endl;
    cin >> num;
    p = reisprime(num, num / 2);
    if (p == true)
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is composite" << endl;
    }

    return 0;
}
