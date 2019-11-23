#include <iostream>
using namespace std;

int main()
{
  double i,j;

  cout << "enter i: " << endl;
  cin >> i;
  cout << "enter j: " << endl;
  cin >> j;
  for ( ;j == 0; )
  {
    cout << "j can't be null" << endl;
    cout << "enter j: " << endl;
    cin >> j;
  }
  cout << "sum: " << i + j << endl;
  cout << "queve: " << i - j << endl;
  cout << "multiply: " << i * j << endl;
  cout << "ratio: " << i / j << endl;
  cout << "average: " << (1 + j)/2;

  return 0;

}
