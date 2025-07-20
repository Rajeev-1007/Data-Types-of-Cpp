# Data-Types-of-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081
Aim: To study and implement C++ Program Structure and Data Types.


Software Used: VS Code.

Theory: 


C++ offers a rich variety of data types to handle different kinds of data. Basic types include `int` for integers, `float` for decimal values, `char` for single characters, and `bool` for true/false logic. You can also work with **derived types** like arrays, pointers, and functions, as well as **user-defined types** such as `struct`, `class`, and `enum` for custom data modeling. 

A typical C++ program starts with necessary **header files** like `#include <iostream>` and uses the `main()` function as its entry point. Statements are enclosed within `{}` and terminated with semicolons. Using `namespace std` allows cleaner access to standard features like `cin` and `cout`. 

Proper formatting, modular design, and comments help maintain readability and scalability. This structured approach makes C++ well-suited for systems programming, embedded development, and performance-critical applications.


CODE: Data types.

Following code is the example, which will produce correct size of various data types on your computer.

    #include <iostream>
    using namespace std;

    int main()
    {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Integer = " << a << " and size is " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "Enter any number with decimal: ";
    cin >> b;
    cout << "Float = " << b << " and size is " << sizeof(b) << " bytes" << endl;

    char r;
    cout << "Enter any character: ";
    cin >> r;
    cout << "Char = " << r << " and size is " << sizeof(r) << " bytes" << endl;

    string c;
    cout << "Enter a string: ";
    cin >> c;
    cout << "String = " << c << " and size is " << sizeof(c) << " bytes" << endl;

    double d;
    cout << "Enter a long decimal number: ";
    cin >> d;
    cout << "Double = " << d << " and size is " << sizeof(d) << " bytes" << endl;

    return 0;
    }

Conclusion: C++ program structure and data types form the foundation for efficient coding, enabling precise memory control, modular design, and versatile data handling across applications.





