// code đếm số lượng số thuần nguyên tố trong một đoạn số nguyên bất kì 
#include <iostream> 
#include <cmath>
using namespace std ; 
bool nt(int) ; 
bool nt2(int) ;
bool tong(int) ; 
bool nt2( int v ) {  for (  int i = v ; i > 0 ; i/= 10   )  { int h = i % 10 ; if ( nt(h) &&  h != 0 &&  h != 1  ) { } else { return false ; } }    return true ;  }                                                     
bool tong( int z ) { int sum = 0 ; while( z > 0 ) { sum += ( z % 10 ) ; z /= 10 ; }  if ( nt(sum) ) { return true ; } else { return false ;} }
bool nt( int n ) 
{
    for ( int i = 2 ; i <= sqrt(n) ; ++i ) { if ( n % i == 0 ) { return false ; } }  return n  ; 
}
int main() 
{ 
     int a , b ; int cnt = 0 ; 
     cout << " moi nhap a : " ; cin >> a ; 
     cout << " moi nhap b : " ; cin >> b ; 
     for (  int i = a ; i <= b ; ++i )  { if ( nt(i) && tong(i) && nt2(i) ) { cout << i << " " ; ++cnt ;   } } 
     cout <<  endl ; 
     cout << " so luong so thuan nguyen to la : " <<  cnt  ; 
     return 0 ;
}