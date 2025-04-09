/*
    This is a staircase of size n = 4:

    #
    ##
    ###
    ####
    Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
    Write a program that prints a staircase of size n.
    Function Description
    Complete the staircase function with the following parameter(s):
    int n: an integer

    Print a staircase as described above. No value should be returned.
    Note: The last line is not preceded by spaces. All lines are right-aligned.
*/

#include <iostream>
using namespace std;

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the staircase: ";
    cin >> n;
    staircase(n);
    return 0;
}