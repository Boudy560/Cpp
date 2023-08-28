#include <iostream>
#include <string>
using namespace std ;

int main()
{
    int i = 0;
    while (i < 15)
    {
        i++;
        cout << i << "\n";    
    }

    // do while loop
    int x = 0 ;
    do 
    {
        cout << x << "\n" ;
        x++ ;
    }
    while ( x < 15);
    return 0 ;
}