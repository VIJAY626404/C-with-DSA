#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int);
int main()
{
    int counter, n;
    cout << "Enter the Number :";
    cin >> n;
    cout << n << " Factorial Value Is " << factorial(n);
    return 0;
}
int factorial(int n)
{
    int counter;
    long fact = 1;

    for (int counter = 1; counter <= n; counter++)
    {
        fact = fact * counter;
    }

    return fact;
} 
