#include <iostream>
using namespace std;
#define RATE 0.1484

int main()
{
  int first_month_total, second_month_total;
  double cost;

  cout << "Input first month total (cwt): " ;
  cin >> first_month_total;
  cout << "Input second month total (cwt): " ;
  cin >> second_month_total;



  for ( ;first_month_total > second_month_total; )
  {
    cout << "wront total, first month total can't be more than second month total" << endl;
    cout << "Input first month total (cwt): " ;
    cin >> first_month_total;
    cout << "Input second month total (cwt): " ;
    cin >> second_month_total;
  }

  cout << first_month_total << " " << second_month_total << endl;

  cost = (second_month_total - first_month_total) * RATE;
  cout << "cost of electricity: " << cost << " BYN";

  return 0;

}
