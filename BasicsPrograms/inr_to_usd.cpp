#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    const double usd_per_inr {0.013};
    
    cout << "Welcome to the Boost Currency Cunvertor" << endl; 
    cout << "Enter the value in INR: " << endl;
    
    double inr {};
    double usd {};
    
    cin >> inr;
    
    usd = inr * usd_per_inr;
    cout << inr << " is equivalent to " << usd << " dollars." << endl;

    return 0;
}
