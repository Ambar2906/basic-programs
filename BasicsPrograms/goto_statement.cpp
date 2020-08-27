//program to demonstrate goto statement
//write a program to accept numbers from user and add them. Stop accepting the numbes if the sum is greater than or equal to 100 and display the sum.
#include <iostream>

using namespace std;

int main()
{

    int num{}, total{};

again:  //label, note colon:
{
    cout << "Enter a number: ";
    cin >> num;

    total += num;

    if (total < 100)
        goto again;

    else
        cout << "Total = " << total << endl;
}

    return 0;
}
