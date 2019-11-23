#include <iostream>
using namespace std;

int main() {
    int n = 0, sum = 0, pr = 1, i, max, min, k = 2;
    bool el = 1;

    cout << "Input number: ";
    cin >> n;

    max = min = n % 10;
    while (k <= n / 2){
        if (n % k ==0){
            el = 0;
            break;
        }
        k++;
    }
    if (el) cout << "number is elementary" << endl;
    else cout << "number isn't elementary" << endl;
    while (n > 0){
        i = n % 10;
        n /= 10;
        cout << i;
        cout << endl;
        sum += i;
        pr *= i;
        if (i > max) max = i;
        if (min > i) min = i;
    }
    cout << endl;
    cout << "sum: " << sum << endl;
    cout << "product: " << pr << endl;
    cout << "maximal number: " << max << endl;
    cout << "minimal number: " << min << endl;

    return 0;
}
