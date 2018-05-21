#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str("a simple string");
    decltype(str.size()) i = 0;
    while (i < str.size())
    {
        str[i++] = 'X';
    }
    cout << str << endl;
    return 0;
}
