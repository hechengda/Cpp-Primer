//read strings from the standard input, concatenating what is read into one large string. 
//Print the concatenated string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string concat, str;
    while (cin >> str)
    {
        concat += str;
    }
    cout << "The concatenated string is " << concat << endl;
    return 0;
}
