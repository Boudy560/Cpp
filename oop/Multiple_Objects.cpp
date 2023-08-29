#include <iostream>
#include <string>

using namespace std ;

class calculate
{
    public:
     
     int wight ;
     int price ;
     string kind ;
     string many ;

};

int main()
{
    calculate apple ;
        apple.wight = 3 ;
        apple.price = 25 ;
        apple.kind = "Amircan apple" ;
        apple.many = "10ps";
    cout << apple.wight << "\n" <<apple.price << "\n"<< apple.kind << "\n" <<  apple.many << "\n" ;
    
// Create another object 
    calculate orange ;
    orange.wight = 5 ;
        orange.price = 30 ;
        orange.kind = "Amircan orange" ;
        orange.many = "10ps";
    cout << orange.wight << "\n" <<orange.price << "\n"<< orange.kind << "\n" <<  orange.many << "\n" ;
}