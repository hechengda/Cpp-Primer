#include <iostream>
#include <stdexcept>
using namespace std;

int main(void)
{
    int i, j;

    while (cin >> i >> j)
    {
        try
        {
            if (j == 0)
            {
                throw runtime_error("divisor is 0");
            }
            cout << i / j << endl;
        }
        catch (const runtime_error& err)
        {
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;

            if (!cin || c == 'n')
            {
                break;
            }
        }
    }
    return 0;
}
