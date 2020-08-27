#include <iostream>
using namespace std;

int main() {

    int marks {};
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks == 100)
        cout << "Superb! you got distinction" << endl;
    else {
        marks /= 10;

        switch(marks) {
            case 1: 
            case 2:
            case 3: cout << "Sorry, you failed" << endl;
            break;

            case 4: cout << "You passed" << endl;
            break;

            case 5: cout << "You got second class" << endl;
            break;

            case 6: cout << "You got first class" << endl;
            break;

            case 7: 
            case 8:
            case 9: cout << "Good job, You got distinction" << endl;
            break;

            default: cout << "Invalid marks!" << endl;
            break;        
        }
    }

    return 0;
}

