//  @Brief   Revise the program from the exercise in 5.5.1(p. 191)
//           so that it looks only for duplicated words that start with an uppercase letter. 
//  @See     Exercise 5.20
//  @frank67 Rewrite using the 'continue' statement. See #250

#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (string w, prew; cin >> w && !w.empty(); prew = w)
    {
        if (isupper(w[0]) && w == prew)
        {
            cout << w << " occurs twice in succession." << endl;
            break;
        }
    }
    if (cin.eof())
    {
        cout << "no word was repeated." << endl;
    }
    return 0;
}
