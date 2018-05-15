#include <iostream>
#include "../include/Sales_item.h"

using namespace std;

int main()
{
    Sales_item total;

    if (!(cin >> total))
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    Sales_item trans;

    while (cin >> trans)
    {
        if (total.isbn() == trans.isbn())
        {
            total += trans;
        }
        else
        {
            cout << total << endl;
            total = trans;
        }
    }
    cout << total << endl;

    return 0;
}
