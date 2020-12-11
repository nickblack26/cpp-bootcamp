#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    float fValue = 76.4;
    cout << sizeof(float) << endl;
    cout << setprecision(20) << fixed << fValue << endl;
    cout << scientific << fValue << endl;

    double dValue = 76.4;
    cout << sizeof(double) << endl;
    cout << setprecision(20) << fixed << dValue << endl;
    cout << scientific << dValue << endl;

    long double lDValue = 76.4;
    cout << sizeof(long double) << endl;
    cout << setprecision(20) << fixed << lDValue << endl;
    cout << scientific << lDValue << endl;

    return 0;
}