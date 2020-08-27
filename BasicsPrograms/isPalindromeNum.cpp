//Program to find is entered number palindrome or not
#include <iostream>
#include <cstdio>
using namespace std;

long generate_reverse(long n);

int main()
{
    long num{}, reverse_num{};
    printf("Enter a number: ");
    scanf("%ld", &num);
    reverse_num = generate_reverse(num);

    cout << ((num == reverse_num) ? "Palindrome number" : "Not a Palindrome number")
         << "\n";

    return 0;
}

long generate_reverse(long n)
{
    int remainder{};
    long rev = 0;

    while (n)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }

    return rev;
}
