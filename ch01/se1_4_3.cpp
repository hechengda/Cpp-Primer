#include <iostream>

using namespace std;

int main()
{
    int sum = 0, v = 0;

    while (cin >> v)
    {
        sum += v;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}
