#include <iostream> 
using namespace std ; 
int main ()
{
    int n ; 
    int tong = 0 ; 
    cout << " moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for (int i = 0 ; i < n ; ++i ) { cin >> a[i] ; } 
    for (int x : a ) { cout << x << " " ; } 
    //for ( int i = 0 ; i < n ; ++i ) { cout << a[i] << " " ; } 
    cout << endl ; 
    for ( int i = 0 ; i < n ; ++i ) { tong += a[i] ;  }
    cout << tong << endl ; 
    return 0 ; 
}