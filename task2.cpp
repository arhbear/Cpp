#include <iostream>
using namespace std;

int main() {
    int n1, n2, n1c, n2c, divider = 1, quotient = 1, i = 2, max;
    bool flag = false;

    cout << "Input first number: ";
    cin >> n1;
    cout << "Input second number: ";
    cin >> n2;
    n1c = n1;
    n2c = n2;
    while (n1 > i and n2 > i){
        if (n1 % i == 0 and n2 % i == 0){
            divider *= i;
            n1 /= i;
            n2 /= i;
            continue;
        }
        i++;
    }
    i = 2;
    while (n1c > 1 or n2c > 1){
        if ((n1c % i == 0 and n2c % i == 0) and n1c > 0 and n2c >0){
            n1c /= i;
            n2c /= i;
            quotient *=i;
            continue;
        }
        if ((n1c % i == 0) and n1c > 0){
            n1c /= i;
            quotient *=i;
            continue;
        }
        if ((n2c % i == 0) and n2c > 0){
            n2c /= i;
            quotient *=i;
            continue;
        }
        i++;
    }
    cout << divider << endl;
    cout << quotient << endl;
    return 0;
}
