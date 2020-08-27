//Program to calculate the value of (1 + 1/2! + 1/3! + ... + 1/n!)
#include <iostream>
#define el endl
using namespace std;


int calculate_fact(int n) {

    static int fact {1};
    fact *= n;
    return fact;

}

void solve(int n) {

    double sum {};

    for (int i = 1; i <= n; ++i) {

        sum += 1.0/calculate_fact(i); 
    }

    cout << sum << el;

}

int main() {

    int num {};
    cin >> num;

    solve(num);

    return 0;
}

