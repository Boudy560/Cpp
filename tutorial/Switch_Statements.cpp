#include <iostream>
using namespace std ;

int main()
{
    int day = 4 ;
    switch (day)
    {
        case 1 : cout << " one "; 
        break ;

        case 2 : cout << "two";
        break ;

        case 3 : cout  << "three";
        break ;

        case 4 : cout << "four";
        break ;
    }


 // anther case for switch 
    int m = 4;
    switch (m) {
    case 6:
    cout << "Today is Saturday";
    break;

    case 7:
    cout << "Today is Sunday";
    break;
    
    default:
    cout << "Looking forward to the Weekend";
}
    return 0 ;
    
}