//program to check if the entered number is prime or not.
#include <iostream>
#define el endl
using std::cin;
using std::cout;
using std::endl;
typedef unsigned long long ull;

void checkPrime(ull n);

int main()
{
    ull num{};
    cout << "Enter a number: ";
    cin >> num;

    checkPrime(num);

    return 0;
}

void checkPrime(ull n)
{
    bool isPrime{false};
    for (ull i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << el;
    }
    else
    {
        cout << n << " is not a prime number." << el;
    }
}


/*
//Another approach
#include <iostream>
using namespace std;

int main() {

    int i {2}, n {};

    cout << "Enter a number: ";
    cin >> n;

    while (n % i != 0) {
        i++;
    }

    cout << ((n == i) ? "Prime Number": "Not a Prime Number") << endl;

    return 0;
}
*/

/*
//program to display first n prime numbers.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n {}, i {}, x {1};
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "The following are" << n << "prime numbers." << endl;
    while(n){
        x++;
        i = 2;
        while(x % i != 0){
            i++;
        }
        
        if(x == i){
        cout << x << endl;
        n--;
        }
    }

    return 0;
}
*/
