#include <iostream>
#include <string>

using namespace std ;

int main ()
{
    /* References and Pointers (which you will learn about in the next chapter) are important in C++, because 
    they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.
    These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.*/
    
    string name = "pobe" ;

    string &DogName = name ;

    // this will be print the value of name
    cout << DogName << endl ;
     // this will be print the Address of name
    cout << &DogName << endl ;

    cout << &name << endl ;
}