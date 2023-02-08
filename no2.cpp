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

int main() {
    double num;
    int power;
    cout << "Enter number = ";
    cin >> num;
    cout << "Enter power = ";
    cin >> power;
    double defaultPower = powerNum(num);
    cout << "Answer with default value = " << defaultPower << endl;
    double answer = powerNum(num,power);
    cout << "Answer = " << answer;
    return 0;
}