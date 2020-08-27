//Program to find number of digits in a user entered number
#include <iostream>
#include <cstdio>
#define el endl
using namespace std;

void num_of_digits(size_t n);

int main()
{
    size_t num{};
    printf("Enter a number: ");
    scanf("%ld", &num);
    num_of_digits(num);

    return 0;
}

void num_of_digits(size_t n)
{
    int sum{};

    while (n)
    {
        n /= 10;
        sum++;
    }

    cout << "Number of digits  = " << ((sum > 0) ? sum : 1) << el;
}
