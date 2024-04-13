// Tokenizing a string using stringstream
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line = "Sushant was not present at last party";

    // vector of string to save tokens
    vector<string> tokens;

    // stringstream class
    stringstream check1(line);
    string intermediate;

    // Tokenizing w.r.t space ' '
    while (getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    // printing the token vector
    for (int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';

    return 0;
}