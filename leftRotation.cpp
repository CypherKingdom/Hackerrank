/*
    A left rotation operation on a circular array shifts each of the array's elements 1 unit to the left.
    The elements that fall off the left end reappear at the right end. Given an integer d,
    rotate the array that many steps to the left and return the result.
*/

#include <iostream>
using namespace std;
#include <vector>

// Method 1:
vector<int> rotateLeft(int d, vector<int> arr)
{
    int n = arr.size();
    d = d % n; // Handle cases where d >= n
    vector<int> rotatedArr(n);
    for (int i = 0; i < n; i++)
        rotatedArr[i] = arr[(i + d) % n];
    return rotatedArr;
}

// Method 2:
vector<int> rotateLeft1(int d, vector<int> arr)
{
    int n = arr.size();
    d = d % n;
    vector<int> rotatedArr(arr.begin() + d, arr.end());
    rotatedArr.insert(rotatedArr.end(), arr.begin(), arr.begin() + d);
    return rotatedArr;
}

int main()
{
    int n, d;
    cout << "Enter the number of elements in the array and the number of rotations: ";
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> result = rotateLeft(d, arr);
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
    return 0;
}