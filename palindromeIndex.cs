class Result
{

    /*
     * Complete the 'palindromeIndex' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.
     */

    // Helper function to check if a string is a palindrome
    private static bool IsPalindrome(string s)
    {
        for (int i = 0; i < s.Length / 2; i++)
            if (s[i] != s[s.Length - i - 1])
                return false;
        return true;
    }

    public static int palindromeIndex(string s)
    {
        if (IsPalindrome(s)) return -1; // Already a palindrome, return -1

        int n = s.Length;

        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - i - 1])
            {
                // Try removing character at position i
                if (IsPalindrome(s.Substring(0, i) + s.Substring(i + 1)))
                    return i;

                // Try removing character at position (n-i-1)
                if (IsPalindrome(s.Substring(0, n - i - 1) + s.Substring(n - i)))
                    return n - i - 1;
                return -1; // If neither removal results in a palindrome, return -1
            }
        return -1;
    }
}
