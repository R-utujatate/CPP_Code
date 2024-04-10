// program to demonstrate the use of a stringstream to convert int to string
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int val = 234;

    // object from the class stringstream
    stringstream ss;
    // inserting integer val in geek stream
    ss << val;

    // the object has the value 234 and stream it to the string x
    string x;
    ss >> x;

    // now string x holds the value 234
    cout << x + "6" << endl;
    return 0;
}