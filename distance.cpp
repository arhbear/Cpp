/** программа получает координаты и возвращает расстояние между ними **/
#include <iostream>
#include <cmath>
using namespace std;

double Distance(int, int, int, int);

int main(){
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;

    cout << "Input x1: ";
    cin >> x1;
    cout << "Input y1: ";
    cin >> y1;
    cout << "Input x2: ";
    cin >> x2;
    cout << "Input y2: ";
    cin >> y2;

    cout << "Distance between points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << Distance(x1, y1, x2, y2) << endl;
    return 0;
}

double Distance(int x1, int y1, int x2, int y2)
{
    return (pow(pow((x1 - x2),2) + pow((y1 - y2),2),0.5));
}
