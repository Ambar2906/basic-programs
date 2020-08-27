//Program to find factors of entered number - @code_isk
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int num {};
    cout << "Enter a number: ";
    cin >> num;

    cout << "The factors of " << num << " are: " << endl;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            cout << i << "\n";
        }
    }

    return 0;
}


/*


Enter a number: 234
The factors of 234 are: 
1
2
3
6
9
13
18
26
39
78
117


*/