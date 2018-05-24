#include <iostream>
#include <string>
using namespace std;

int main()
{
    pair<string, int> max_dup;
    int count = 0;

    for (string w, prew; cin >> w; prew = w)
    {
        if (w == prew)
        {
            ++count;
        }
        else
        {
            count = 0;
        }
        if (count > max_dup.second)
        {
            max_dup = { w, count };
        }
    }
    if (max_dup.first.empty())
    {
        cout << "There's no duplicated string." << endl;
    }
    else
    {
        cout << "The word " << max_dup.first << " occured " << max_dup.second + 1 << " times." << endl;
    }
    return 0;
}
