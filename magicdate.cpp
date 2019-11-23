#include <iostream>
using namespace std;

int sum_of_numeral(int x);

int main()
{
  int d = 0, m = 0, y = 0, lets_play_again = 1, l = 0, sum_d = 0, sum_m = 0, sum_y = 0, sum = 0;

  do{
    cout << "Input date of birth: ";
    cin >> d;
    cout << "Input month of birth: ";
    cin >> m;
    cout << "Input year of birth: ";
    cin >> y;
    if (d <= 0 and m <= 0 ){
      cout << "You input something wrong" << endl;
      continue;
    }
    else if (y % 4 == 0 and y % 100 != 0 and m == 2 and d > 29){
      cout << "You input something wrong" << endl;
      continue;
    }
    else if ((y % 4 != 0 or y % 100 == 0) and m == 2 and d > 28){
      cout << "You input something wrong" << endl;
      continue;
    }
    else if (y == 1 and y == 3 and y == 5 and y == 7 and y == 8 and y == 10 and y == 12 and d > 31){
      cout << "You input something wrong" << endl;
      continue;
    }
    else if (y == 2 and y == 4 and y == 6 and y == 9 and y == 11  and d > 31){
      cout << "You input something wrong" << endl;
      continue;
    }
    sum_d = sum_of_numeral(d);
    sum_m = sum_of_numeral(m);
    sum_y = sum_of_numeral(y);
    sum = sum_d + sum_m + sum_y;
    if (sum > 9) sum = sum_of_numeral(sum);
    cout << "your number of fate is: " << sum << endl;
    cout << "If you want to input other date of birth, input 1, else input 0" << endl;
    cin >> lets_play_again;
}while (lets_play_again);
  return 0;
}

int sum_of_numeral(int x)
{
  int i = 0, k = 0;
  while (x >= 1){
    k = x % 10;
    x /= 10;
    i += k;
  }
  if (i > 9) return (sum_of_numeral(i));
  else return i;
}
