/*
    You are in charge of the cake for a child's birthday. It will have one candle for each
    year of their total age. They will only be able to blow out the tallest of the candles.
    Your task is to count how many candles are the tallest.

    Example:
    candles = [4, 4, 1, 3]
    The tallest candles are 4 units high. There are 2 candles with this height, so the function should return 2.
*/

#include <iostream>
using namespace std;
#include <vector>

int birthdayCakeCandles(vector<int> candles)
{
    int max = 0, count = 0;
    for (auto val : candles)
    {
        if (max < val)
        {
            max = val;
            count = 1;
        }
        else if (max == val)
            count++;
    }
    return count;
}

int main()
{
    vector<int> candles = {4, 4, 1, 3};
    cout << birthdayCakeCandles(candles) << endl;
    return 0;
}