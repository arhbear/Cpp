#include <iostream>
using namespace std;

int main()
{
  int i,j;

  cout << "Input first number: " ;
  cin >> i;
  cout << "Input second number: " ;
  cin >> j;

  if (i > j)
    cout << "the biggest number is " << i;
  else
    cout << "the biggest number is " << j;
    
  return 0;
}
