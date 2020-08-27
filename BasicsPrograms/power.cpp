//Program to display power of user entered number in square root, cube root 
//and forth power
#include <iostream>
#include <cmath>
#define el endl
using namespace std;

void solve(int n) {
    int p {};
    for (int i = 2; i <= 5; i++) {
        p = pow(n, i);
        cout << n << " to the power " << i << " = " << p << el;
    }
}

int main() {

    int num {};
    cin >> num;

    solve(num);

    return 0;
}

