#include <iostream>
using namespace std;

double Factorial(int n);

int main()
{
    int f = 0;

    cout << "Input number for factorial: ";
    cin >> f;
    cout << "Factorial of " << f << " is " << Factorial(f);
    return 0;
}

double Factorial(int n){
    double factor = 1.0;
    int i = 0;
    for(i = 2; i <= n; i++){
        factor *= i;
    }
    return factor;
}
