#include <iostream>
using namespace std;

int roma(int x);

int main()
{
  int num = 0, lets_play_again = 1;

  do{
    cout << "input number: " << endl;
    cin >> num;

    if ((num > 1000) or (num < 0)){
      cout << "inputed number is incorrect, number will be integer type, more than 0, but less than 1001" << endl;
      continue;
    }
    roma(num);
    cout << "input 1 to input other number, else input 0" << endl;;
    cin >> lets_play_again;
  }while(lets_play_again == 1);

  return 0;
}

int roma(int x)
{
  if (x == 1000){
    cout << "M";
  }
  else{
    if (x >= 900){
      cout << "CM";
      x -= 900;
    }
    else{
      if (x >= 500){
        cout << "D";
        x -= 500;
      }
      else{
        if (x >= 400){
          cout << "CD";
          x -= 400;
        }
      }
      while (x >= 100){
        cout << "C";
        x -= 100;
      }
    }

    if (x >= 90){
      cout << "XC";
      x -= 90;
    }
    else{
      if (x >= 50){
        cout << "L";
        x -= 50;
      }
      else{
        if (x >= 40){
          cout << "XL";
          x -= 40;
        }
      }
      while (x >= 10){
        cout << "X";
        x -= 10;
      }
    }

    if (x >= 9){
      cout << "IX";
      x -= 9;
    }
    else{
      if (x >= 5){
        cout << "V";
        x -= 5;
      }
      else{
        if (x >= 4){
          cout << "IV";
          x -= 4;
        }
      }
      while (x >= 1){
        cout << "I";
        x -= 1;
      }
    }

  }
  cout << endl;
  return 0;
}
