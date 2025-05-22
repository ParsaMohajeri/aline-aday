#include <iostream>
using namespace std;  // Apply this for using cout directly without std::

int main() {
    // Basic output examples
    cout << "Hello World!" << endl;
    cout << "Hello World!";
    cout << "Have a good day!";
    cout << 3;
    cout << 3 + 3;
    cout << 2 * 5;
    cout << "Hello World! \n";
    cout << "I am learning C++";
    cout << "Hello World!" << "\n\n";
    cout << "I am learning C++";
    int myNum = 15;
    cout << myNum;
    int myNum = 15;  // myNum is 15
    myNum = 10;  // Now myNum is 10
    cout << myNum;  // Outputs 10
    int x = 5, y = 6, z = 50;
    cout << x + y + z;
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;
    // Good
    int minutesPerHour = 60;
    // OK, but not so easy to understand what m actually is
    int m = 60;
    const int minutesPerHour = 60;
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';
    // Print variables
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";
    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

    return 0;
}




