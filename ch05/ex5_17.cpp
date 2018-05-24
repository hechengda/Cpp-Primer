#include <iostream>
#include <vector>
using namespace std;

bool is_prefix(const vector<int> &lhs, const vector<int> &rhs)
{
    if (lhs.size() > rhs.size())
    {
        return is_prefix(rhs, lhs);
    }
    for (auto i = 0; i != lhs.size(); ++i)
    {
        if (lhs[i] != rhs[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> l{ 0,1,1,2 };
    vector<int> r{ 0,1,1,2,3,5,8 };
    cout << is_prefix(l, r) << endl;
    return 0;
}
