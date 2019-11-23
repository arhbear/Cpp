#include <iostream>
using namespace std;

int fibonachi(int n);

int main(){
    int i = 0;
    cout << "Input number of iterations: ";
    cin >> i;

    cout << i <<"'th element of Fibonachi row is " << fibonachi(i);
}

int fibonachi(int n){
    int i = 3, k = 1, l = 2, m = 0;

    if (n == 0) return m;
    if (n <= 2) return 1;

    while (i < n){
        m = k + l;
        k = l;
        l = m;
        i++;
    }
    return m;
}
