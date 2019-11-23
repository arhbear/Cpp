#include <iostream>
using namespace std;

double zombie_growth(double x, double y);

int main(){
    double q = 0, g = 0, w = 0;
    int i = 0;
    bool flag = 0;

    do{
        cout << "Input quantity of zombie (> 0) in kg: ";
        cin >> q;
        cout << "Input zombie growing in percents per day: ";
        cin >> g;
        cout << "Input zombie waning in kg per day: ";
        cin >> w;
        if (q > 0 and g >= 0 and w >= 0) flag = 1;
    }while(flag = 0);
    flag = 0;
    if (zombie_growth(q, g) < w){
        while (q > 0){
        q += zombie_growth(q, g);
        q -= w;
        i++;
        }
        cout << "Zombies will be destroyed in " << i << " days";
    }
    else cout << "Sorry, but zombies growth too fast";

    return 0;
}

double zombie_growth (double x, double y){
    x *= (y / 100);
    return x;
}
