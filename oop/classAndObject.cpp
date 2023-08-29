#include <iostream>
#include <string>

using namespace std;

class fruit 
{ // this is class
    public: // this access specifier
     int kg; // this calld Attribute
     int many ; // this calld Attribute
     string  kind; // this calld Attribute

};

int main()
{
    fruit getdata ; // create an object of fruit 

    // Access attributes and set values
    getdata.kg = 5 ;
    getdata.many = 10 ;
    getdata.kind = "Apple" ;

    cout << getdata.kg << "\n" << getdata.many << "\n" << getdata.kind << "\n";

}