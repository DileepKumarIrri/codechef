#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initializing the main string and target substring
    string s1 = {"This", "is"};
    string s2 = "m ai";

    // using the find() function, checking if the given substring is present in the main string or not
    bool isFound = s1.find(s2) != string::npos;

    // verifying the result
    if (isFound)
    {
        // printing success message if found
        cout << "Substring Found" << endl<<(s1[0])[1];
    }
    else
    {
        // else printing the error message
        cout << "Substring not Found" << endl;
    }

    return 0;
}

