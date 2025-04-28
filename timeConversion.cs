class Result
{

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string timeConversion(string s)
    {
        string[] output = s.Split(":");
        if (output[2].Substring(2) == "PM" && output[0] != "12")
            output[0] = Convert.ToString(Convert.ToInt32(output[0]) + 12);
        if (output[0] == "12" && output[2].Substring(2) == "AM")
            output[0] = "00";
        return output[0] + ":" + output[1] + ":" + output[2].Substring(0, 2);
    }

}