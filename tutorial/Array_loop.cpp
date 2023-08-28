#include <iostream>
#include <string>

using namespace std ;

int main()
{
    string name[5] = {"we","are","my","mohamed","ahmed"};

    for (int i =0; i<5;i++)
    {
        cout << name[i] << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
}

//t is also possible to declare an array without specifying the elements on declaration, and add them later:
string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }

//You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

int myNumbers2[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers2);


//To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
}