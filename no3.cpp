// Finish
#include <iostream>
using namespace std;

int compare(int d1,int d2) {
    if (d1>d2) {
        return d1;
    }else {
        return d2;
    }
}

int main() {
    int d1,d2;
    cout << "Enter first distance = ";
    cin >> d1;
    cout << "Enter second distance = ";
    cin >> d2;
    int result = compare(d1,d2);
    cout << "The greater number is " << result << ".";
    return 0;
}