#include <iostream>
using namespace std;

int main()
{
  int i, j, k, max;

  cout << "Input first number: " ;
  cin >> i;
  cout << "Input second number: " ;
  cin >> j;
  cout << "Input third number: " ;
  cin >> k;

  if (i >= j and i >= k)
    max = i;
  else
  {
    if (j >= i and j >= k)
      max = j;
    else
      max = k;
  }
  cout << "the biggest number is " << max;

    return 0;
}
