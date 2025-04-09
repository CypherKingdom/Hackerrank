// 2D Array - DS

#include <iostream>
using namespace std;
#include <vector>

int hourglassSum(vector<vector<int>> arr)
{
    int max, sum;
    vector<int> result;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int j = 0; j < arr.size() - 2; j++)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            result.push_back(sum);
        }
    }
    max = result[0];
    for (auto val : result)
        if (max < val)
            max = val;
    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    int val;
    cout << "Enter 36 values:\n";
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++)
        {
            cout<<"Value ["<<i<<"]["<<j<<"]: ";
            cin>>val;
            arr[i][j] = val;
        }
    }
    cout<<"The maximum is: "<<hourglassSum(arr)<<endl;
    return 0;
}