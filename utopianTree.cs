/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

public static int utopianTree(int n)
{
    if (n == 0) return 1;
    return (n % 2 == 0) ? 1 + utopianTree(--n) : 2 * utopianTree(--n);
}