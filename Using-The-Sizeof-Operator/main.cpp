#include <iostream>
#include <climits>

using namespace std;
int main() {
    

    cout << "Sizeof Information" << endl;
    cout << "==================" << endl;


    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(_LONGDOUBLE) << " bytes" << endl;

    // Values defined in <climits>

    cout << "Minimum values:" << "\n"
         << "char: " << CHAR_MIN << '\n'
         << "int:" << INT_MIN << '\n'
         << "short: " << SHRT_MIN << '\n'
         << "long: " << LONG_MIN << '\n'
         << "long long: " << LLONG_MIN << '\n';

 cout << "Maximum values:" << "\n"
         << "char: " << CHAR_MAX << '\n'
         << "int:" << INT_MAX << '\n'
         << "short: " << SHRT_MAX << '\n'
         << "long: " << LONG_MAX << '\n'
         << "long long: " << LLONG_MAX << '\n';

    // sizeof with variable namess

    int age {21};
    cout << "size of the age is " << sizeof(age) << " bytes" << '\n';

    double wage {31.69};
    cout << "My wage is " << sizeof wage << " bytes" << '\n';
    
    return 0;
}

