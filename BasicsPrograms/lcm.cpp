/*
//(1)not very efficient approach
#include <iostream>
using namespace std;

int main() {

    long long n1 {}, n2 {}, lcm {};

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    (n1 > n2) ? lcm=n1 : lcm = n2;

    while (lcm %n1 != 0 || lcm % n2 != 0) {
        lcm++;
    }

    cout << "lcm = " << lcm << endl;

    return 0;
}
*/

/*
//(2)Better than first approach-but takes lot of time when one of the two numbers is very large
#include <iostream>
#define el endl
#define ull unsigned long long
using namespace std;

ull find_gcd(ull n1, ull n2) {
   
    ull gcd {};
    ull n  = ((n1 <= n2) ? n1 : n2);

    for (ull i = 1;  i <= n; i++) {
        if ((n1 % i == 0) && (n2 % i == 0))
            gcd = i;
    }

    return gcd;
}

int main() {

    ull n1 {}, n2 {}, ans {}, lcm {};

    cout << "Enter 2 Numbers: ";
    cin >> n1 >> n2;

    ans = find_gcd(n1, n2);
    cout << "GCD = " << ans << el;

    lcm = (n1 * n2) / ans;

    cout << "LCM = " << lcm << el;

    return 0;
}
*/

//(3)Recursive Approach-better than above two
#include <iostream>  
using namespace std; 
typedef unsigned long long ull;

class gfg 
{ 
 public:
  // Recursive function to return gcd of a and b   
  ull gcd(ull a, ull b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
 
  ull lcm(ull a, ull b) {
        return (a*b)/gcd(a, b);     
  } 
}; 

int main()  
{  
    gfg g; 
    ull a {}, b {};  
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout<<"LCM = " <<g.lcm(a, b) << endl;  
    return 0;  
}  

