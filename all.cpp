#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
}

using namespace std;

int main() {
  cout << "Hello World!";
  cout << "Have a good day!";
  cout << "I am learning C++";
  return 0;
}

int main() {
  std::cout << "Hello World!";
  return 0;
}

// This is a comment
int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  cout << "Hello World!" << "\n";
  return 0;


}
int myNum = 15;
cout << myNum;

int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)


int x = 5, y = 6, z = 50;
cout << x + y + z;

const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
