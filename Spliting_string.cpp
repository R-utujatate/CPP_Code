// C/C++ program to demonstrate working of strtok_r()
// by splitting string based on space character

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    char str[] = "Geeks for Geeks";
    char *token;
    char *rest = str;
    while ((token = strtok(rest, " ")) != NULL)
    {
        cout << token << endl;
        rest = NULL; // to continue tokenizing the same string
    }
    return (0);
}

// Time Complexity :O(n) where n is length of string
