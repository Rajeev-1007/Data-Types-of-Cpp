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