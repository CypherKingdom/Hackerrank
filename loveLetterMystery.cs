class Result
{

    /*
     * Complete the 'theLoveLetterMystery' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.
     */

    private static bool IsPalindrome(string s)
    {
        for (int i = 0; i < s.Length / 2; i++)
            if (s[i] != s[s.Length - i - 1])
                return false;
        return true;
    }

    public static int theLoveLetterMystery(string s)
    {
        if (IsPalindrome(s)) return 0;
        int n = s.Length, result = 0;
        char c;
        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - i - 1])
            {
                if (s[i] < s[n - i - 1])
                {
                    c = s[n - i - 1];
                    while (c != 'a')
                    {
                        c--;
                        result++;
                        if (c == s[i]) break;
                    }
                }
                else
                {
                    c = s[i];
                    while (c != 'a')
                    {
                        c--;
                        result++;
                        if (c == s[n - i - 1]) break;
                    }
                }
            }
        return result;
    }
}