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

    // Redefining myGrade would cause an error; removed duplicate

    string greeting = "Hello";
    cout << greeting << endl;

    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << currency << "\n";
    cout << "Total cost = " << total_cost << currency << "\n";

    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    // Using x in arithmetic
    x = 10;
    x += 5;
    cout << x << endl;

    int a1 = 5;
    int b1 = 3;
    cout << (a1 > b1) << endl; // returns 1 (true) because 5 is greater than 3


    // Include the string library
    #include <string>

    // Create a string variable
    string greeting = "Hello";


    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName;

    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)


    int x = 10;
    int y = 20;
    int z = x + y;      // z will be 30 (an integer)

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size();
    
    
    return 0;
}
