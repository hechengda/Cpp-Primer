// prints the numbers from ten down to zero.(use while)

#include <iostream>

using namespace std;

int main()
{
    int i = 10;

    while (i >= 0)
    {
        cout << i-- << " ";
    }
    cout << endl;
    return 0;
}
