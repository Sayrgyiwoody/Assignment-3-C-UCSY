// Finish
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
};

int main() {
    int num1,num2;
    cout << "Enter number 1 = ";
    cin >> num1;
    cout << "Enter number 2 = ";
    cin >> num2;
    cout << "Before swapping: \n" << num1 << " " << num2 << endl;
    swap(num1,num2);
    cout << "After swapping: \n" << num1 << " " << num2 << endl;
    return 0;
}