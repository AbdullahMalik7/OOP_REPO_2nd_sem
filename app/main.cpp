#include <iostream>
#include "my_math/my_math.h"
using namespace std;
using namespace math;

int main(){
    int a = 10, b = 5;

    cout << "subtraction : " << subtract(a, b) << endl;
    cout << "Addition : " << add(a, b) << endl;
    cout<< "Multiplication : " << multiply(a, b) << endl;
    cout << "Division : " << divide(a, b) << endl;
    
    return 0;
}