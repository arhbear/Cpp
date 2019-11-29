#include <iostream>
using namespace std;
#define USDRATE 2.1160
#define EURRATE 2.3290
#define CNYRATE 0.3030
void ShowMenu(void);
char UserChoice(void);
double InputBYN(void);
double ConvertToUSD(double byn);
double ConvertToEUR(double byn);
double ConvertToCNY(double byn);

int main(){
    char choice;
    double byn = 0.0;
    do{
        ShowMenu();
        choice = UserChoice();
        switch (choice) {
            case '1':
                byn = InputBYN();
                cout << endl << "You entered " << byn << " BYN" << endl << endl;
                break;
            case '2':
                cout << endl << "Get your " << ConvertToUSD(byn) <<" USD" << endl << endl;
                break;
            case '3':
                cout << endl << "Get your " << ConvertToEUR(byn) <<" EUR" << endl << endl;
                break;
            case '4':
                cout << endl << "Get your " << ConvertToCNY(byn) <<" CNY" << endl << endl;
                break;
        }
    }while (choice != '5');

    return 0;
}

void ShowMenu(void){
    cout << "CURRENCY EXCHANGE V1.0" << endl
    << "====== MENU ======" << endl
    << "1) Input BYN" << endl
    << "2) Convert to USD" << endl
    << "3) Convert to EUR" << endl
    << "4) Convert to CNY" << endl
    << "5) EXIT" << endl << endl;
}

char UserChoice(){
    char c;
    cout << endl << "Your choice? ";
    cin >> c;
    return c;
}

double InputBYN(void){
    double b = 0;

    cout << "Enter your BYN: ";
    cin >> b;
    return b;
}

double ConvertToUSD(double byn){
    return byn / USDRATE;
}

double ConvertToEUR(double byn){
    return byn / EURRATE;
}

double ConvertToCNY(double byn){
    return byn / CNYRATE;
}
