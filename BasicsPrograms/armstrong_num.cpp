/*
A number is said to be armstrong number if the sum of the cube of its digits is
equal to the number itself.
example: 153
1*1*1 = 1
5*5*5 = 125
3*3*3 = 27
1+27+125 = 153
In General 0, 1, 153, 370, 371, 407 are the only possible Armstrong Numbers.
*/

//program to determine if the entered number is armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int copy, num, rem, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    copy  = num;

    while(num){
        rem = num % 10;
        sum += pow(rem, 3);
        num /= 10;
    }

    if(copy == sum){
        cout << "armstrong number." << endl;
    }
    else{
        cout << "not an armstrong number." << endl;
    }

    return 0;
}


/*
//Program to generate armstrong number between 1 to 1000
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int track_outer_loop{1}, num{0}, rem{}, copy{};
    cout << "Armstrong numbers between 1 and 1000 are: " << endl;

    while (track_outer_loop <= 1000)
    {

        int sum{0};

        num++;
        copy = num;

        while (num)
        {
            rem = num % 10;
            sum += pow(rem, 3);
            num /= 10;
        }

        if (copy == sum)
        {
            cout << copy << endl;
        }

        num = copy;

        track_outer_loop++;
    }

    return 0;
}
*/
/*
//another approach to generate armstong number between 1 to 1000
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a=1;
    while(a<=999)
    {
        b=a%10;
        c=a/10;
        d=c%10;
        e=c/10;
        if(a==e*e*e+d*d*d+b*b*b)
        printf("%d is armstrong number\n",a);
          
        a++;   
    }
}
*/
