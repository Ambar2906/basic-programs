//Program to display first n Natural Numbers using do while loop and 
//pass by reference using pointers 
#include <iostream>
#include <cstdio>
#define el endl
using namespace std;

void display (int *n) {

    int i {1};

    do {

        printf("%d\n", i);
        i++;

    } while (i <= *(n));
}


int main() {

    int num {};

    cout << "Enter a number: ";
    cin >> num;

    display(&num);

    return 0;
}


