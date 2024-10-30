#include <iostream> 
using namespace std ; 
int main () 
{
    char c ; 
    cout << "moi nhap c " ; cin >> c ; 
    if ( ( c >= 97  && c <= 122  ) || (c >= 65  && c <= 90  ) ) { if ( ( c == 122 ) || ( c == 90 ) ) { cout << 'a' << endl; }  
                                                         else if ( c >= 65   && c <= 89  ) { c += 32 ; cout << ++c << endl ;} 
                                                         else if ( c >= 97 && c <= 121 ) {cout << ++c << endl ; }
                                                          }
    else { cout << "error !"; }                                       
    return 0 ;                

   
}