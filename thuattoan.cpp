#include <iostream> 
#include <cmath>
using namespace std ; 
bool B(int h ) { if ( h % 3 == 0 ) { return true ; } else { return false ; }}
int cnt( int v ) {   int cn = 0 ; for ( int i = v ; i > 0 ; i /= 10  ) {  ++cn ; } return cn ;  }
bool snt(int n ) { for (  int i = 2 ; i < sqrt(n) ; i++ ) { if ( n % i == 0 ) { return false; } return true ; } }
int main () 
{
  int a ; 
  cout << " moi nhap a " ; cin >> a ; 
  if ( a % 2 == 0) { cout << " YES " ; } 
  else if ( a == 0 ) { cout << " ERROR" ; }
  else { cout <<  " NO " ; } 
  cout << endl ; 
  if ( a % 3 == 0 && a % 5 == 0 ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
  if ( a % 3 == 0  && a % 7 != 0 ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
  if ( a > 30 && a < 50 ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
  if ( a >= 30 && ( a % 2 == 0 || a % 3 == 0 || a % 5 == 0 ) ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
  if ( snt(a%10) == true && cnt(a) == 2 ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
  if ( B(a%10) == true ) { cout << " YES " ; } 
  else { cout << " NO " ; } 
  cout << endl ; 
   return 0 ; 
}