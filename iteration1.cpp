#include <iostream>
#include <cmath>
using namespace std;

int Count(int min, int max, int step);

int main()
{
    int min = 0, max = 0, step = 0, elements = 0;
    cout << "Input minimum: ";
    cin >> min;
    cout << "Input maximum: ";
    cin >> max;
    cout << "Input step: ";
    cin >> step;
    elements = Count(min, max, step);
    cout << endl << elements;
    cout << endl << "My demo" << endl;
    elements = Count(4, -1, -1);
    cout << endl << elements; */

    return 0;
}

int Count(int min, int max, int step){
    int i = 0, n = 0;

    for (i = min; i != max; i += step){
        cout << i << " ";
        n++;
        if (step > 0 and i > max) break;
        if (step < 0 and i < max) break;
    }
    return n;
}
