#include <iostream>
#include <cmath>
using namespace std ;
bool nt(int n) 
{
    for ( int i = 2 ; i <= sqrt(n)  ; ++i ) { if ( n % i == 0 )  {return false ;}  }   return true  ;  // có thể dùng (n-1) hoặc sqrt(n) ở statment 2 của vòng for 

}
 int main () 
 {
     for ( int z = 1 ; z <= 100 ; ++z  ) { if (nt(z)) { cout << z << endl ;} }        
     return 0 ; 
  
 }