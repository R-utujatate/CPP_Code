// fequencies of words in string
#include <bits/stdc++.h>
using namespace std;

void printFrequency(string s)
{
    // Each word it mapped to its frequency
    map<string, int> freq;
    // used for breaking words
    stringstream ss(s);

    string word;

    while (ss >> word)
        freq[word]++;
    for (auto m : freq)
    
        cout << m.first << "->" << m.second << "\n";
}

int main()
{
    string s = "Would you like to take a cup of tea";
    printFrequency(s);
    return 0;
}