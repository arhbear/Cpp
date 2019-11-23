#include <iostream>
using namespace std;

void binary_untill(int x, int i = 2, int k = 1);

int main()
{
    int q = 0;

    cout << "Input integer number: ";
    cin >> q;

    if (q < 1){
        cout << "You inputed wrong number";
        return 1;
    }
    binary_untill(q);

    return 0;
}

void binary_untill(int x, int i = 2, int k = 1)
{
    if (i - 1 < x){
      cout << i - 1 << " - " << k << endl;
      k = k * 10 + 1;
      i *= 2;
      binary_untill (x, i, k);
    }
    else cout << "There are all numbers until " << x << " constist of only 1 in bynary representation";

}
