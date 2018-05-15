// sum the numbers from 50 to 100 (use while)

#include <iostream>

using namespace std;

auto sum(int lo, int hi)
{
    int sum = 0;

    while (lo <= hi)
    {
        sum += lo++;
    }
    return sum;
}

int main()
{
    cout << "sum is: " << sum(50, 100) << endl;
    return 0;
}
