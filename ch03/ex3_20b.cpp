#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i));

    for (decltype(ivec.size()) i = 0; i != ivec.size(); i++)
    {
        if (!(i % 2))
        {
            if ((i + 1) != ivec.size())
            {
                cout << (ivec[i] + ivec[ivec.size() - 1 - i]) << endl;
            }
            else
            {
                cout << ivec[i / 2] << endl;
            }
        }
    }
    return 0;
}
