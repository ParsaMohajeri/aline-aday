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
    
    string myString = "Hello";
    cout << myString[0];
    // Outputs H    

    string myString = "Hello";
    cout << myString[1];
    // Outputs e
    
    string txt = "We are the so-called \"Vikings\" from the north.";

    string txt = "It\'s alright.";

    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;
    // Type your first name: John
    // Your name is: John

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    // Type your full name: John Doe
    // Your name is: John Doe

    std::string greeting = "Hello";
    std::cout << greeting;
    
    cout << max(5, 10);
    
    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)

    cout << min(5, 10);

    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

    int x = 10;
    int y = 9;
    cout << (x > y); // returns 1 (true), because 10 is higher than 9
    cout << (10 > 9); // returns 1 (true), because 10 is higher than 9

    int x = 10;
    cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10

    cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15

    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

    int myAge = 25;
    int votingAge = 18;
    if (myAge >= votingAge) {
    cout << "Old enough to vote!";
    } else {
    cout << "Not old enough to vote.";
    }
    // Outputs: Old enough to vote!

    if (20 > 18) {
    cout << "20 is greater than 18";
    }

    int x = 20;
    int y = 18;
    if (x > y) {
    cout << "x is greater than y";
    }

    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    // Outputs "Good evening."

    int time = 22;
    if (time < 10) {
    cout << "Good morning.";
    } else if (time < 20) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    // Outputs "Good evening."

    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    int doorCode = 1337;
    if (doorCode == 1337) {
    cout << "Correct code.\nThe door is now open.\n";
    } else {
    cout << "Wrong code.\nThe door remains closed.\n";
    }

    int myNum = 10; // Is this a positive or negative number?
    if (myNum > 0) {
    cout << "The value is a positive number.\n";
    } else if (myNum < 0) {
    cout << "The value is a negative number.\n";
    } else {
    cout << "The value is 0.\n";
    }

    int myAge = 25;
    int votingAge = 18;
    if (myAge >= votingAge) {
    cout << "Old enough to vote!\n";
    } else {
    cout << "Not old enough to vote.\n";
    }

    int myNum = 5;
    if (myNum % 2 == 0) {
    cout << myNum << " is even.\n";
    } else {
    cout << myNum << " is odd.\n";
    }

    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
    // Outputs "Thursday" (day 4)

    int day = 4;
    switch (day) {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }
    // Outputs "Looking forward to the Weekend"

    int i = 0;
    while (i < 5) {
    cout << i << "\n";
    i++;
    }

    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    int countdown = 3;
    while (countdown > 0) {
    cout << countdown << "\n";
    countdown--;
    }
    cout << "Happy New Year!!\n";

    int i = 0;
    while (i <= 10) {
    cout << i << "\n";
    i += 2;
    }

    // A variable with some specific numbers
    int numbers = 12345;
    // A variable to store the reversed number
    int revNumbers = 0;
    // Reverse and reorder the numbers
    while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumbers'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
    }
    cout << "Reversed numbers: " << revNumbers << "\n";

    int dice = 1;
    while (dice <= 6) {
    if (dice < 6) {
        cout << "No Yatzy\n";
    } else {
        cout << "Yatzy!\n";
    }
    dice = dice + 1;
    }

    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
    }

    // Outer loop
    for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }

    for (int i = 0; i <= 100; i += 10) {
    cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
    }

    for (int i = 1; i <= 10; i = i + 2) {
    cout << i << "\n";
    }

    for (int i = 2; i <= 512; i *= 2) {
    cout << i << "\n";
    }

    int number = 2;
    int i;
    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
    cout << number << " x " << i << " = " << number * i << "\n";
    }

    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
      if (i == 4) {
        continue;
    }
    cout << i << "\n";
    }

    int i = 0;
    while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
        break;
    }
    }

    int i = 0;
    while (i < 10) {
    if (i == 4) {
        i++;
        continue;
    }
    cout << i << "\n";
    i++;
    }

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    int myNum[3] = {10, 20, 30};

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];
    // Outputs Volvo

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    // Now outputs Opel instead of Volvo

    // Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    // Loop through strings
    for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
    }

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
    }

    string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements

    string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array elements

    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";

    // A vector with 3 elements
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    // Adding another element to the vector
    cars.push_back("Tesla");

    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }

    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int i;
    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    // Loop through the elements of the array
    for (int age : ages) {
    sum += age;
    }
    // Calculate the average by dividing the sum by the length
    avg = sum / length;
    // Print the average
    cout << "The average age is: " << avg << "\n";

    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int i;
    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];
    // Loop through the elements of the ages array to find the lowest age
    for (int age : ages) {
    if (lowestAge > age) {
        lowestAge = age;
    }
    }
    // Print the lowest age
    cout << "The lowest age is: " << lowestAge << "\n";

    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    string letters[2][2][2] = {
    {
        { "A", "B" },
        { "C", "D" }
    },
    {
        { "E", "F" },
        { "G", "H" }
    }
    };

    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    cout << letters[0][2];  // Outputs "C"

    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    letters[0][0] = "Z";
    cout << letters[0][0];  // Now outputs "Z" instead of "A"

    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
        cout << letters[i][j] << "\n";
    }
    }

    string letters[2][2][2] = {
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
        cout << letters[i][j][k] << "\n";
        }
    }
    }



    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
    };
    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;
    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
    int row, column;
    cout << "Selecting coordinates\n";
    // Ask the player for a row
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;
    // Ask the player for a column
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;
    // Check if a ship exists in those coordinates
    if (ships[row][column]) {
        // If the player hit a ship, remove it by setting the value to zero.
        ships[row][column] = 0;
        // Increase the hit counter
        hits++;
        // Tell the player that they have hit a ship and how many ships are left
        cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {
        // Tell the player that they missed
        cout << "Miss\n\n";
    }
    // Count how many turns the player has taken
    numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";



    struct {             // Structure declaration
    int myNum;         // Member (int variable)
    string myString;   // Member (string variable)
    } myStructure;       // Structure variable



    struct {
    int myNum;
    string myString;
    } myStructure;
    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";
    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";


    struct {
    int myNum;
    string myString;
    } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas

    
    struct {
    string brand;
    string model;
    int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here
    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    struct myDataType { // This structure is named "myDataType"
    int myNum;
    string myString;
    };

    // Declare a structure named "car"
    struct car {
    string brand;
    string model;
    int year;
    };
    int main() {
        // Create a car structure and store it in myCar1;
        car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;
        // Create another car structure and store it in myCar2;
        car myCar2;
        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;
        // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    }

    enum Level myVar;

    int main() {
    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;
    // Print the enum variable
    cout << myVar;
    return 0;
    }


    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };
    int main() {
        enum Level myVar = MEDIUM;
        cout << myVar;  // Now outputs 50
        return 0;
    }

    enum Level {
        LOW = 5,
        MEDIUM, // Now 6
        HIGH // Now 7
    };

    int main() {
        // Create an enum variable and assign a value to it
        enum Level myVar = MEDIUM;
        // Print the enum variable
        cout << myVar;
        return 0;
    }

    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    string food = "Pizza";
    string &meal = food;
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    string food = "Pizza";
    cout << &food; // Outputs 0x6dfed4

    string food = "Pizza"; // A food variable of type string
    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)

    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration
    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    string food = "Pizza";
    string* ptr = &food;
    // Output the value of food (Pizza)
    cout << food << "\n";
    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";
    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";
    // Change the value of the pointer
    *ptr = "Hamburger";
    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";
    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";


// Create a function
    void myFunction() {
        cout << "I just got executed!";
    }
    int main() {
        myFunction(); // call the function
        return 0;
    }

    void myFunction() {
        cout << "I just got executed!\n";
    }
    int main() {
        myFunction();
        myFunction();
        myFunction();
        return 0;
    }

    void myFunction();
        // The main method
    int main() {
        myFunction();  // call the function
        return 0;
    }
        // Function definition
    void myFunction() {
        cout << "I just got executed!";
    }

    void myFunction(string fname) {
        cout << fname << " Refsnes\n";
    }
    int main() {
        myFunction("Liam");
        myFunction("Jenny");
        myFunction("Anja");
        return 0;
    }


        void myFunction(string country = "Norway") {
            cout << country << "\n";
        }
        int main() {
            myFunction("Sweden");
            myFunction("India");
            myFunction();
            myFunction("USA");
            return 0;
        }

    void myFunction(string fname, int age) {
    cout << fname << " Refsnes. " << age << " years old. \n";
    }

    int main() {
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    return 0;
    }
 
    // Liam Refsnes. 3 years old.
    // Jenny Refsnes. 14 years old.
    // Anja Refsnes. 30 years old.


    return 0;
}

