#include <iostream>
using namespace std;

int main()
{
  int i;

  cout << "Input number: " ;
  cin >> i;

  if (i % 2 == 0)
    cout << "Number is even";
  else
    cout << "Number is odd";

  return 0;
}
