#include <iostream>
using namespace std;

int number(double x);

int main()
{
  double q = 0;
  int lets_play_again = 0;

  for(;;){
    cout << "input positive fractional number: ";
    cin >> q;
    if (q < 0 or int(q) == q){
      cout << "Number was inputed incorrectly, try next time" << endl;
      continue;
    }
    number(q);
    cout << "If you want to play again, input '0', else input '1': " << endl;
    cin >> lets_play_again;
    if (lets_play_again) break;
  }
  return 0;
}

int number(double x)
{
  int i = 0, k = 0;

  i = int(x);
  k = int(10 * x);
  cout << k - (10 * i) << endl;

  return 0;
}
