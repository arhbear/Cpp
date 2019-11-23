#include <iostream>
#include <cmath>
using namespace std;
/*
1 - вывести ОК +
2 - проверка ввода-вывода (input-output) +
3 - exceptions (исключительные ситуации) +
4 - d < 0 +
5 - d ==0 +
6 - d > 0 +
7 - decoration +
*/
int main()
{
  double a, b, c, d, x1, x2;
/*
  cout << "ok"; 1
*/
  cout << "Squre Roots Software v1.0.0 by ArhBear (c) 2019" << endl << endl;
  cout << "input a: ";
  cin >> a;
  cout << "input b: ";
  cin >> b;
  cout << "input c: ";
  cin >> c; /* 2.1 */
/*
  cout << a << endl;
  cout << b << endl;
  cout << c << endl; 2.2
*/
  if (a == 0){
    cout << "Error! a = 0";
    return 1;
  } /* 3 */

  d = b * b - 4 * a * c;

  if (d < 0) cout << "no roots";
  else if (d == 0) {
    x1 = (-b) / (2 * a);
    cout << "root: " << x1;
  } /* 4 */
  else{
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    cout << "roots:" << endl << "x1: " << x1 << endl << "x2: " << x2 << endl;
  } /* 5 */
  return 0;
}
