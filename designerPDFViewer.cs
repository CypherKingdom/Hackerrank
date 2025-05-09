/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

public static int designerPdfViewer(List<int> h, string word)
{
    int maxHeight = 0;
    foreach (char c in word)
        if (h[c - 97] > maxHeight)
            maxHeight = h[c - 97];
    return maxHeight * word.Length;
}