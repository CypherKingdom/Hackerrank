/*
     * Complete the 'beautifulDays' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER i
     *  2. INTEGER j
     *  3. INTEGER k
*/

public static int Reverse(int n)
{
    if (n < 10)
        return n;
    string str = "";
    while (n > 0)
    {
        str += n % 10;
        n /= 10;
    }
    return int.Parse(str);
}

public static int beautifulDays(int i, int j, int k)
{
    int value, count = 0;
    for (int m = i; m <= j; m++)
    {
        value = m - Reverse(m);
        if (value < 0)
            value = -value;
        if (value % k == 0)
            count++;
    }
    return count;
}