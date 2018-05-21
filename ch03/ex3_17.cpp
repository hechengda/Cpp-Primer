//
//@Author  @PEZY @Yue Wang 
//@Date    Aug. 2014 Jun.2015
//@Brief
// Read a sequence of words from cin and store the values a vector.
// After you've read all the words, process the vector and change each word to uppercase.
// Print the transformed elements, eight words to a line.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    vector<string> svec;
    for (string word; cin >> word; svec.push_back(word))
    {
        ;
    }

    for (auto &w : svec)
    {
        for (auto &c : w)
        {
            c = toupper(c);
        }
        cout << w << endl;
    }
    return 0;
}
