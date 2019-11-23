#include <iostream>
using namespace std;

int main()
{
  int t = 0;
  cout << "Input temperature: ";
  cin >> t;

  if (t > 18)
    cout << "Warm!";
  else
    cout << "Cold!";
  return 0;
}
