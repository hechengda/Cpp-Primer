#include <iostream>
using namespace std;

int main()
{
    unsigned g = 0;
    while (cin >> g)
    {
        // conditional operators
        auto result = g > 90 ? "high pass" : g > 75 ? "pass" : g > 60 ? "low pass" : "fail";
        cout << result << endl;

        // if statements
        if (g > 90)
        {
            cout << "high pass";
        }
        else if (g > 75)
        {
            cout << "pass";
        }
        else if (g > 60)
        {
            cout << "low pass";
        }
        else
        {
            cout << "fail";
        }
        cout << endl;
    }

    return 0;
}
