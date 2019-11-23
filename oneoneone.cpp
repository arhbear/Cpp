#include <iostream>
#include <cmath>
using namespace std;

int binary_untill(int x);

int main()
{
  int q = 0;

  cout << "Input fractional number: ";
  cin >> q;

  binary_untill(q);

  return 0;
}

int binary_untill(int x)
{
  int k = 0, n = 0;
  bool flag = false;
  for(int i = 0; i <= abs(x); i ++){
    k = i;
    n = 0;
    while (k != 0){
      if (k % 2 == 0){
        flag = false;
        break;
      }
      else{
        flag = true;
        k /= 2;
        n = n * 10 + 1;
      }
    }
    if (x >= 0){
      if (flag) cout << i << " - " << n << endl;
    }
    else if (flag) cout << - i << " - " << n << endl;
  }
  return 0;
}
