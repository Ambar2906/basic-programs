//program to demonstrate continue statement
//write a program to accept 5, 2-digit numbers from the user and add them. if the user entered a 3 digit number or greater this number should be discarded and again accepted.
#include <iostream>
using namespace std;

int main()
{

    int num{}, total{};

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num > 99)
        {
            cout << "***This number won't be added in the total.***" << endl;
            cout << "Please enter number less than 100" << endl;
            i--;
            continue; 
        }
        else
        {
            total += num;
        }
    }

    cout << "Total = " << total << endl;

    return 0;
}

