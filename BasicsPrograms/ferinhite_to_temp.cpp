#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

void calculateTemp(float);

int main(){
	float tempInFehrenheit {0.0};
	printf("Enter Temperature in fahrenheit: ");
	scanf("%f",&tempInFehrenheit);
	calculateTemp(tempInFehrenheit);
	return 0;
}

void calculateTemp(float tempInFahrenheit){
	float tempInDegree {0.0};
	tempInDegree = (tempInFahrenheit-32)/1.8;
	cout << fixed << setprecision(3) << 
	"The Temperature in Degreee Celsius is:  " << tempInDegree << endl;
}

