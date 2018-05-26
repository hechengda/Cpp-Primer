#include <iostream>
#include <string>
using namespace std;

bool any_capital(const string &str)
{
    for (auto c : str)
    {
        if (isupper(c))
        {
            return true;
        }
    }
    return false;
}

void to_lowercase(string &str)
{
    for (auto &c : str)
    {
        c = tolower(c);
    }
}

int main()
{
    string hello("Hello World!");
    cout << any_capital(hello) << endl;

    to_lowercase(hello);
    cout << hello << endl;

    return 0;
}
