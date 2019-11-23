#include <iostream>
using namespace std;

int main()
{
  int i, j;

  cout << "Input first number: " ;
  cin >> i;
  cout << "Input second number: " ;
  cin >> j;

  if ( i % 2 == 0 and j % 2 == 0 )
    cout << "Ok";
  else
    cout << "CRASH";

  return 0;
}
