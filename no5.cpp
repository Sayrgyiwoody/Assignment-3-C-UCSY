// Finish
#include <iostream>
using namespace std;

double powerNum(double n,int p = 2){
    double result = 1;
    for (double i= 1;i<=p;i++) {
        result *= n;
    }
    return result;
}

long powerNum(long n,int p = 2){
    long result = 1;
    for (double i= 1;i<=p;i++) {
        result *= n;
    }
    return result;
}

int main() {
    double num1;
    int power;
    cout << "Enter number (double) = ";
    cin >> num1;
    cout << "Enter power = ";
    cin >> power;
    cout << "Result " << num1 << "^" << power << " : " << powerNum(num1,power) << endl;
    long num2;
    cout << "Enter number (long) = ";
    cin >> num2;
    cout << "Enter power = ";
    cin >> power;
    cout << "Result " << num2 << "^" << power << " : " << powerNum(num2,power) << endl;
    return 0;
}