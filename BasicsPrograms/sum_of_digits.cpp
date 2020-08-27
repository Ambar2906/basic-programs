//Program to find sum and product of user entered digits
#include <iostream>
#include <cstdio>
using namespace std;

void calculate(size_t n);

int main()
{
    size_t num{};
    printf("Enter a number: ");
    scanf("%ld", &num);
    calculate(num);

    return 0;
}

void calculate(size_t n)
{
    int sum{}, remainder{};
    size_t product = 1;

    while (n)
    {
        remainder = n % 10;
        sum += remainder;
        product *= remainder;
        n /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product << endl;
}
