#include <iostream>
using namespace std;  // Apply this for using cout directly without std::

int main() {
    // Basic output examples
    cout << "Hello World!" << endl;
    cout << "Have a good day!" << endl;
    cout << "I am learning C++" << endl;

    // Variable examples
    int myNum = 15;
    cout << myNum << endl;

    myNum = 10;  // Now myNum is 10
    cout << myNum << endl;  // Outputs 10

    int myNum2 = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;     // Floating point number (with decimals)
    char myLetter = 'D';          // Character
    string myText = "Hello";      // String (text)
    bool myBoolean = true;        // Boolean (true or false)

    // Output multiple variables
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;

    const int minutesPerHour = 60;
    const float PI = 3.14;
    
    // Print constants and variables
    cout << "Constants: " << minutesPerHour << ", " << PI << endl;

    // Student data example
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print student data
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";

    // Calculate and print the area of a rectangle
    int length = 4;
    int width = 6;
    int area = length * width;
    cout << "Length: " << length << "\n";
    cout << "Width: " << width << "\n";
    cout << "Area: " << area << "\n";

    // User input example
    cout << "Type a number: "; 
    cin >> x;
    cout << "Your number is: " << x << endl;

    cout << "Type another number: ";
    cin >> y;
    int sum = x + y;
    cout << "Sum is: " << sum << endl;

    // More variable examples
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)

    char myGrade = 'B';
    cout << myGrade << endl;

    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;

    char myGrade = 'B';
    cout << myGrade;
    
    string greeting = "Hello";
    cout << greeting;
    return 0;
}
