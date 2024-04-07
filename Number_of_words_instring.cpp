#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int countWords(string str)
{
    // breaking input into word using string stream

    stringstream s(str);
    // To store individual wors
    string word;

    int count = 0;
    while (s >> word)

        count++;

    return count;
}

int main()
{
    string s = "Hello Rutuja ! How are you?";
    cout << "Total number of words present in the string: " << countWords(s);
    return 0;
}