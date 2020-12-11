#include <iostream>
#include <limits>

using namespace std;

short Math (short x, short y) {
    short z;
    z = x + y;
    cout << x << " + " << y << " = " << z << endl;
    z = x - y;
    cout << x << " - " << y << " = " << z << endl;
    z = x * y;
    cout << x << " * " << y << " = " << z << endl;
    z = x / y;
    cout << x << " / " << y << " = " << z << endl;
    return z;
}

int main () {
    // you can have multiple types of the integer variable
    // int is used for any numbers not above 2147483647
    int value = 54673;
    cout << "Regular int: " << value << endl;
    cout << "Size of int: " << sizeof(int) << endl;

    // long int can store a larger value but takes up more memory
    long lValue = 50348503458034;
    cout << "\nLong int: " << lValue << endl;
    cout << "Size of long int: " << sizeof(long) << endl;

    // short int uses the smallest amount of memory possible
    short sValue = 12345;
    cout << "\nShort int: " << sValue << endl;
    cout << "Size of short int: " << sizeof(short) << endl;

    // unsigned int can store only positive numbers
    unsigned uValue = 23;
    cout << "\nUnsigned int: " << uValue << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned) << endl;

    // signed ints store only negative numberss
    signed siValue = -1232;
    cout << "\nSigned int: " << siValue << endl;
    cout << "Size of signed int: " << sizeof(signed) << endl;

       

    // LIMITS LIBRARY

    /// you can find limits of variables by using the limits library
    cout << "\nMax int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;



    short val1, val2;
    cout << "Type first number: " << endl;
    cin >> val1;  
    cout << "Type second number: " << endl;
    cin >> val2;

    Math(val1,val2);
    cout << "Size of function: " << sizeof(Math(val1, val2)) << endl;
    return 0;
}