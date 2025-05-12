/*
     * Complete the 'viralAdvertising' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER n as parameter.
*/

public static int viralAdvertising(int n)
{
    int shared = 5, liked, cumulative = 0;
    for (int i = 0; i < n; i++)
    {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
    }
    return cumulative;
}

public static int viralAdvertisingRecursive(int n) { return ViralAdvertisingHelper(n, 5, 0); }

private static int ViralAdvertisingHelper(int day, int shared, int cumulative)
{
    if (day == 0) return cumulative;
    int liked = shared / 2;
    cumulative += liked;
    int newShared = liked * 3;
    return ViralAdvertisingHelper(day - 1, newShared, cumulative);
}