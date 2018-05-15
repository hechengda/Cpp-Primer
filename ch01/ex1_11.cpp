// Print each number in the range specified by two integers.

#include <iostream>

using namespace std;

void print_range(int lo, int hi)
{
    if (lo > hi)
    {
        print_range(hi, lo);
        return;
    }
    while (lo <= hi)
    {
        cout << lo++ << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter two numbers:" << endl;
    int lo = 0, hi = 0;
    cin >> lo >> hi;
    print_range(lo, hi);
    return 0;
}
