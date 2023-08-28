#include <iostream>
#include <string>

using namespace std ;

/*Why Multi-Dimensional Arrays?

Multi-dimensional arrays are great at representing grids. This example shows a practical use for them.
 In the following example we use a multi-dimensional array to represent a small game of Battleship:
*/

int main()
{
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    // This statement accesses the value of the element in the first row (0) and third column (2) of the letters array.
   cout << letters[0][2] << "\n" ;

//Loop Through a Multi-Dimensional Array
    string table[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << table[i][j] << "\n";
  }
} 



//This example shows how to loop through a three-dimensional array:
string table2[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << table2[i][j][k] << "\n";
    }
  }
} 




}