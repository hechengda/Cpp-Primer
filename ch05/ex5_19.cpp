#include <iostream>
#include <string>
using namespace std;

int main()
{
    do
    {
        cout << "please enter two strings: " << endl;
        string str1 = "", str2 = "";
        cin >> str1 >> str2;
        cout << (str1 < str2 ? str1 : str2) << endl;
    } while (cin);
    return 0;
}
