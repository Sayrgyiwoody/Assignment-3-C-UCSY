//Finish
#include <iostream>
using namespace std;

struct fraction {
    int top;
    int base;
};

//f1.top*f2.base + f1.base * f2.top
//f1.base * f2.base
fraction fAdd(fraction f1,fraction f2) {
    fraction result;
    result.top = f1.top*f2.base + f1.base * f2.top;
    result.base = f1.base * f2.base;
    return result;
}

fraction fSub(fraction f1,fraction f2) {
    fraction result;
    result.top = f1.top * f2.base - f1.base * f2.top ;
    result.base = f1.base * f2.base;
    return result;
}

fraction fMul(fraction f1,fraction f2) {
    fraction result;
    result.top = f1.top * f2.top ;
    result.base = f1.base * f2.base;
    return result;
}

fraction fDiv(fraction f1,fraction f2) {
    fraction result;
    result.top = f1.top * f2.base;
    result.base = f1.base * f2.top;
    return result;
}

int main() {
    fraction f1,f2,result;
    char operator_,choice,slash;
    do {
        cout << "Enter first fraction (a/b) = ";
        cin >> f1.top >> slash >> f1.base;
        cout << "Enter operator (+,-,*,/) = ";
        cin >> operator_;
        cout << "Enter second fraction (c/d)  = ";
        cin >> f2.top >> slash >> f2.base;
        switch (operator_) {
            case '+':
            result = fAdd(f1,f2);
            break;

            case '-':
            result = fSub(f1,f2);
            break;

            case '*':
            result = fMul(f1,f2);
            break;

            case '/':
            result = fDiv(f1,f2);
            break;

            default:
            cout << "Invalid try again!";
            break;
        }
        cout << "Answer = " << result.top << slash << result.base << endl;
        cout << "Do you want to continue (y/n) = ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    cout << "End of program.";
    return 0;
}
