// to remove spaces from string using stringstram
#include <bits/stdc++.h>

using namespace std;

// function to remove spacees
string removeSpaces(string str)
{
    stringstream aa;
    string temp;

    // Storing the whole string into string stream

    aa << str;
    // making string empty
    str = " ";

    // running loop till endvof stream
    while (!aa.eof())
    {

        // Extracting word by word from stream
        aa >> temp;
        // Concatenatiing in the string to be returned

        str = str + temp;
    }
    return str;
}

int main()
{
    // Sample inputs
    string s = "Hello guys i am rutuja tate!!";
    cout << removeSpaces(s) << endl;

    s = "How   r you??";
    cout << removeSpaces(s) << endl;

    s = "I   Love to code";
    cout << removeSpaces(s) << endl;

    return 0;
}