/*
    Given five positive integers, find the minimum and maximum values that can be calculated
    by summing exactly four of the five integers. Then print the respective minimum and maximum
    values as a single line of two space-separated long integers.

    Example:
    arr = [1, 3, 5, 7, 9]
    The minimum sum is: 1 + 3 + 5 + 7 = 16 and the maximum sum is: 3 + 5 + 7 + 9 = 24.
    The function prints:
    16 24
    Constraints:
    1 <= arr[i] <= 10^9
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr)
{
    if (arr.size() != 5)
    {
        cout << "Invalid input" << endl;
        return;
    }

    long long totalSum = 0;
    long long minElement = 10000000000, maxElement = 0;

    for (int num : arr)
    {
        totalSum += num;
        if (num < minElement)
            minElement = num;
        if (num > maxElement)
            maxElement = num;
    }

    long long minSum = totalSum - maxElement;
    long long maxSum = totalSum - minElement;

    cout << minSum << " " << maxSum << endl;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    miniMaxSum(arr);
    return 0;
}