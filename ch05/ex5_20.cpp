#include <iostream>
#include <string>
using namespace std;

int main()
{
    string w, prew;

    while (cin >> w)
    {
        if (w == prew)
        {
            break;
        }
        prew = w;
    }
    if (cin.eof())
    {
        cout << "no word was repeated." << endl;
    }
    else
    {
        cout << w << " occurs twice in succession." << endl;
    }
    return 0;
}
