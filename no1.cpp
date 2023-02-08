// Finish
#include <iostream>
using namespace std;

float circleArea(float r) {
    float area = (3.14 *r*r);
    return area;
}


int main(){
    float radius;
    cout << "Enter radius : ";
    cin >> radius;
    float result = circleArea(radius);
    cout << result;
    return 0;
}

