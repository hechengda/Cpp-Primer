#include <iostream>
using namespace std;

int main()
{
    int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
    for (int(&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
    }
    cout << endl;

    for (size_t row = 0; row != 3; ++row)
    {
        for (size_t col = 0; col != 4; ++col)
        {
            cout << ia[row][col] << " ";
        }
    }
    cout << endl;

    for (int(*row)[4] = begin(ia); row != end(ia); ++row)
    {
        for (int *col = begin(*row); col != end(*row); ++col)
        {
            cout << *col << " ";
        }
    }
    cout << endl;
    return 0;
}
