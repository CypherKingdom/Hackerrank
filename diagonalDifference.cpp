/*
    Given a square matrix, calculate the absolute difference between the sums of its diagonals.

    For example, the square matrix  is shown below:
    1 2 3
    4 5 6
    9 8 9
    The left-to-right diagonal = 1 + 5 + 9 = 15.
    The right-to-left diagonal = 3 + 5 + 9 = 17.
    Their absolute difference is |15 - 17| = 2.
*/

#include <iostream>
using namespace std;
#include <vector>

int diagonalDifference(vector<vector<int>> arr)
{
    int sum1 = 0, sum2 = 0, result, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[n - i - 1][i];
    }
    result = sum2 - sum1;
    return (result >= 0) ? result : -result;
}

int main()
{
    int n, val;
    cout << "Enter dimension of the square matrix: ";
    cin >> n;
    vector<vector<int>> arr(n);
    cout << "Enter " << n * n << " values:\n";
    for (int i = 0; i < n; i++)
    {
        arr[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cout << "Value [" << i << "][" << j << "]: ";
            cin >> val;
            arr[i][j] = val;
        }
    }
    cout << "The diagonal difference is: " << diagonalDifference(arr) << endl;
    return 0;
}