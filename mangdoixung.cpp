#include <iostream>
#include <math.h>
using namespace std;

bool doixung(int a[], int n){
    // i <=> n - i - 1
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    cout << "Mang a doi xung : " << boolalpha <<  doixung(a, n) << endl;
    int m = 5;
    int b[5] = {1, 2, 3, 2, 3};
    cout << "Mang b doi xung : " << boolalpha <<  doixung(b, m) << endl;
    return 0;
}