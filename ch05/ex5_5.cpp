#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    int grade = 0;

    while (cin >> grade)
    {
        string letter = "";

        if (grade < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[grade / 10 - 5];


            if (grade != 100)
            {
                if (grade % 10 > 7)
                {
                    letter += "+";
                }
                else if (grade % 10 < 3)
                {
                    letter += "-";
                }
            }
        }
        cout << letter << endl;
    }

    return 0;
}
