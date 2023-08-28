#include <iostream>
using namespace std ;

int main()
{
    
        for (int i = 0 ; i <= 15 ; i++)
        {
                cout << i << "\n";
        }

        // anthor exambel 
        for (int x = 0; x <= 10; x = x + 2) {
             cout << x << "\n";
            }

            // nested loop

             // Outer loop
            for (int i = 1; i <= 3; ++i) {
            cout << "Outer: " << i << "\n"; // Executes 2 times

            // Inner loop
            for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}   



//The foreach Loop (element Array)

/*
for (type variableName : arrayName) {
  // code block to be executed
}
*/

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}




// C++ Break and Continue

// break
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
} 

// continue 
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
} 
return 0 ;
  
}