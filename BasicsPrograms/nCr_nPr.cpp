//Program to calculate value of nCr combination
#include <iostream>
#define el endl
using namespace std;

int factorial(int n) {
    int fact {1};

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {

    int n {}, r {}, ans {};

    cout << "Enter 2 Numbers: ";
    cin >> n >> r;

    ans = factorial(n)/(factorial(r)*factorial(n-r));

    cout << ans << el;

    return 0;
}

// //program to find the value of nPr = ((n!)/(n-r)!) combination
// #include <iostream>
// #define el endl
// using namespace std;

// int factorial(int n) {
//     int fact {1};

//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int main() {

//     int n {}, r {}, ans {};

//     cout << "Enter 2 Numbers: ";
//     cin >> n >> r;

//     ans = factorial(n)/factorial(n-r);

//     cout << ans << el;

//     return 0;
// }




