// 1+2+3+4.......+n

#include<iostream>
//#include<conio.h>
//sumOFmath
using namespace std ;
int main ()
{
    int n , sum = 0 ;

    cout << " The equation is " << endl ;
    cout << " 1+2+3+4.......+n " <<endl ;

    cout <<" Please input n : " ;
    cin >>n ;

    for ( int i=1 ; i<=n ; i=i+1)
    {
        sum = sum + i ;

    }

    cout <<" Sum is " <<sum <<endl ;
    
     return 0 ;
}