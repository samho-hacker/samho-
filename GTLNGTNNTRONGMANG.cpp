#include <iostream> 
using namespace std ; 
int main() 
{
    int n  ; 
    cout << " moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for (int i = 0 ; i < n ; ++i ) { cin >> a[i] ; } 
    for (int i = 0 ; i < n ; ++i ) { cout << a[i] << " "  ; }
    int gtln = a[0] , gtnn = a[0] ; 
    for (int i = 1 ; i < n ; ++i ) { if ( a[i] > gtln ) { gtln = a[i] ; }
                                     if ( a[i] < gtnn ) { gtnn = a[i] ; }  }
    cout << endl << gtln << endl << gtnn ; 
    return 0 ; 

}