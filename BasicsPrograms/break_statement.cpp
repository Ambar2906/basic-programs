//program to demonstrate break statement
//write a program to accept 10, 2-digit numbers from user and add them. if the 
//user enters a three digit number stop accepting the numbers and display the sum.
#include <iostream>
using namespace std;

int main() {

    int num {}, sum {};

    for (int i = 1; i <= 10; ++i) {
        cout << "Enter a 2-digit number: ";
        cin >> num;

        if (num > 99)
            break;
        else 
            sum += num;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
