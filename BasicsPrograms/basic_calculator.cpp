//menu driven program to perform basic arithmetic operation using functions
#include <iostream>
#include <ios>
#include <limits>
#define el endl
using namespace std;

void menu();
double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);
int modulo(int n1, int n2);   

int main() {

    int choice {};
    double n1 {}, n2 {}, ans {};
 
    do {

        cout << "\nEnter 2 number: ";
        cin >> n1 >> n2;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        menu();
        cin >> choice;

        switch (choice)
        {

        case 1: ans =  add(n1, n2);
        cout << "Addition = " << ans << el;
        break;

        case 2: ans = subtract(n1, n2); 
        cout << "Subtraction = " << ans << el;
        break;

        case 3: ans = multiply(n1, n2);
        cout << "Multiplication = " << ans << el;
        break;

        case 4: ans = divide(n1, n2);
        cout << "Division = " << ans << el;
        break;
        
        case 5: ans = modulo(n1, n2);
        cout << "Modulo = " << ans << el;
        break;

        case 6: break;

        default: cout << "Invalid choice!"; break;
        }
        
    } while (choice != 6);

    return 0;
}

void menu () {
    cout << "\n***Welcome! Enter your choice ***" << el;
    cout << "1.Add \n2.Subtract \n3.Multiply \n4.Divide \n5.Modulo \n6.Exit" 
    << el;
}

double add(double n1, double n2) {
    return n1 + n2;
}

double subtract(double n1, double n2) {
    return n1 - n2;
}

double multiply(double n1, double n2) {
    return n1 * n2;
}

double divide(double n1, double n2) {
    return n1 / n2;
}

int modulo(int n1, int n2) {
    return n1 % n2;
}
