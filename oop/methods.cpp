#include <iostream>
#include <string>

using namespace std ;

class MyClass {        // The class
  public:              // Access specifier
    void sayHi() {  // Method/function defined inside the class
      cout << "Hello World! \n ";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.sayHi();  // Call the method
  return 0;
}