#include <iostream>
#include <cmath>
using namespace std ;
int tong (int h ) { int sum = 0  ; while (1) { sum += (h%10) ; h/=10  ;  return sum  ; }}
bool nt(int n) 
{
    for ( int i = 2 ; i <= sqrt(n)  ; ++i ) { if ( n % i == 0 )  {return false ;}  }   return true  ;  // có thể dùng (n-1) hoặc sqrt(n) ở statment 2 của vòng for 

}
 int main () 
 {
    int a ; 
    cout << " moi nhap a " ; cin >> a  ; int r ; 
    tong(a)  ;  
    if (nt(tong(a))) { cout << nt(tong(a)) ; } else { cout << " sai vl ";}
    return 0 ; 

  
 }