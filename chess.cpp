#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1 = 10, x2 = 10, y1 = 10, y2 = 10, lets_play_again = 1;
	do{
			while (x1 > 8 or x2 > 8 or y1 > 8 or y2 > 8 or (x1 == x2 and y1 == y2) or x1 < 0 or x2 < 0 or y1 < 0 or y2 < 0 ){
				cout << "you don't input coordinates or input they wrong, input coordinates: " << endl;
				cout << "input x coordinate for white horse: ";
				cin >> x1;
				cout << "input y coordinate for white horse: ";
				cin >> y1;
				cout << "input x coordinate for black horse: ";
				cin >> x2;
				cout << "input y coordinate for black horse: ";
				cin >> y2;
			}
			if ((abs(x1 - x2) == 2 and abs(y1 - y2) < 3) or (abs(y1 - y2) == 2 and abs(x1 - x2) < 3) and ((x1 + x2) % 2 != (x1 + x2) % 2)){
				cout << "Congratulates, your horse kick other horse in one step";
			}
			else{
				cout << "Sorry, but your horse don't kick other horse in one step" << endl;
			}
			cout << "If you want to play again, input '1', else input '0': ";
			cin >> lets_play_again;
	}
	while	(lets_play_again == 1);
  return 0;
}
