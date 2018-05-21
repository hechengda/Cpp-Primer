//
//Write a program to create a vector with ten int elements. 
//Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.
//

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> ivec(10, 1);
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        *it *= 2;
    }

    for (auto i : ivec)
    {
        cout << i << " ";
    }
    return 0;
}
