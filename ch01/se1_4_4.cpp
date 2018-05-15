#include <iostream>

using namespace std;

int main()
{
    int currVal = 0;

    if (!(cin >> currVal))
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    int val = 0, cnt = 1;

    while (cin >> val)
    {
        if (val == currVal)
        {
            cnt++;
        }
        else
        {
            cout << currVal << " occurs " << cnt << " times" << endl;
            currVal = val;
            cnt = 1;
        }
    }
    cout << currVal << " occurs " << cnt << " times" << endl;
    return 0;
}
