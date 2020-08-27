//Fibonacci Series Generator using Pass by Refernce
#include <iostream>
#include <vector>
#define el endl
using namespace std;

void solve(int num);
void display(const vector <int> &vec);

int main() {

    int num {};
    cin >> num;

    solve(num);

    return 0;
}

void solve(int n) {

    vector <int> vec {};

    if (n == 1)
        vec.push_back(0);

    else if (n == 2) {

        vec.push_back(0);
        vec.push_back(1);

     } else {

        int a {0}, b {1}, sum {0}, temp {};

        for (int i = 1; i <= n; i++) {
            sum = a+b;
            vec.push_back(sum);
            temp = b;
            b = sum;
            a = temp;
        }
    }

    display(vec);
}

void display (const vector <int> &vec) {

    for (auto i: vec) {
        cout << i << el;
    }
}
