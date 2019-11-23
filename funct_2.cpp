/* сколько у вас BYN?
программа говорит: "У вас N $"
*/
#include <iostream>
using namespace std;
#define K 2.04

int bankomat(double x);

int main()
{
  double a = 0;

  cout << "Input how much BYN you have: ";
  cin >> a;

  bankomat(a);
  return 0;
}
int bankomat(double x)
{
  x = x / K;
  cout << "You have: " << x << "$";
  return 0;
}
