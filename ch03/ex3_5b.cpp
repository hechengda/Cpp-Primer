//separate adjacent input strings by a space.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string concat, str;
    if (cin >> str)
    {
        concat += str;
    }
    while (cin >> str)
    {
        concat += (" " + str);
    }
    cout << "The concatenated string is " << concat << endl;
    return 0;
}
