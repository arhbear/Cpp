#include <iostream>
using namespace std;
#define N 11
void InitArray(int a[], int n);
void Output(int a[], int n);
int SumElements(int a[], int n);
double AvElement(int a[], int n);
int MedElement(int a[], int n);
bool IsSorted(int a[], int n);
double MaxElement(int a[], int n);
double MinElement(int a[], int n);
double MaxElementNeg(int a[], int n);
double MinElementPos(int a[], int n);

int main()
{
    int arr[N] = {0};

    InitArray(arr, N);
    cout << "Array: ";
    Output(arr, N);
    cout << endl << "Sum of array's elements: " << SumElements(arr, N) << endl;
    cout << "Average number: " << AvElement(arr, N) << endl;
    cout << "Median ellement: " << MedElement(arr, N) << endl;
    cout << "Is array sorted: " << IsSorted(arr, N) << endl;
    cout << "Maximal ellement: " << MaxElement(arr, N) << endl;
    cout << "Minimal ellement: " << MinElement(arr, N) << endl;
    cout << "Maximal negative ellement: " << MaxElementNeg(arr, N) << endl;
    cout << "Minimal positive ellement: " << MinElementPos(arr, N) << endl;
    return 0;
}

void Output(int a[], int n){
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
void InitArray(int a[], int n){
    for (int i = 0; i < n; i++) a[i] = -100 + rand() % 200;
}
int SumElements(int a[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++) sum += a[i];
    return sum;
}
double AvElement(int a[], int n){
    return SumElements(a, n) / n * 1.0;
}
int MedElement(int a[], int n){
    int m = 0, flag_m = 0, flag_l = 0;

    if (n % 2 == 0)  return int(AvElement(a, n));
    for (int k = 0; k < n; k++){
        flag_m = 0;
        flag_l = 0;
        for (int i = 0; i < n; i++){
            if (a[i] < a[k]) flag_l++;
            if (a[i] > a[k]) flag_m++;
        }
        if (flag_m = flag_l){
            m = k;
            break;
        }
    }
    return a[m];
}

bool IsSorted(int a[], int n){
    bool sortup = 0, sortdown = 0;

    for (int i = 0; i < n - 1; i++){
        if (a[i] <= a[i + 1]) sortup = 1;
        else{
            sortup = 0;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++){
        if (a[i] >= a[i + 1]) sortdown = 1;
        else{
            sortdown = 0;
            break;
        }
    }
    if (sortup != 0 or sortdown != 0) return 1;
    else  return 0;
}
double MaxElement(int a[], int n){
    double max = a[0];
    for (int i = 0; i < n; i++){
        if (max < a[i]) max = a[i];
    }
    return max;
}
double MinElement(int a[], int n){
    double min = a[0];
    for (int i = 0; i < n; i++){
        if (min > a[i]) min = a[i];
    }
    return min;
}
double MaxElementNeg(int a[], int n){
    double max = 0;

    for (int i = 0; i < n; i++){
        if (a[i] < 0) {
            max = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (max < a[i] and a[i] < 0) max = a[i];
    }
    return max;
}
double MinElementPos(int a[], int n){
    double min = a[0];

    for (int i = 0; i < n; i++){
        if (a[i] > 0) {
            min = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] > 0) {
            min = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (min > a[i] and a[i] > 0) min = a[i];
    }
    return min;
}
