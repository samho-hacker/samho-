// kiểm tra số thuận nghịch ở trong mảng 
#include <iostream> 
#include <cmath> 
using namespace std ;
bool stn( int n )  
{
    int h = 0  ; 
    for ( int m = n ; m != 0 ; m /= 10  ) {  h = h*10 + m % 10 ; }
    return h == n ; 
}
int main() 
{
    int n ; 
    cout << " moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i < n ; ++i ) { cin >> a[i] ; } 
    for ( int i = 0 ; i < n ; ++i ) { if ( stn(a[i]) == true ) { cout << a[i] << " " ; } }
    return 0 ; 

} 