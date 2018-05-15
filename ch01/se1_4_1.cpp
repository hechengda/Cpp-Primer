#include <iostream>

using namespace std;

int main()
{
    int sum = 0, i = 1;

    while (i <= 10)
    {
        sum += i++;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}
