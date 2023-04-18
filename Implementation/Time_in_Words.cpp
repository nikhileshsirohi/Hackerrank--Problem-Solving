#include <iostream>
#include <vector>
#include <string>
using namespace std;

string timeInWords(int h, int m)
{
    string time;
    string minute[60];
    minute[1] = "one";
    minute[2] = "two";
    minute[3] = "three";
    minute[4] = "four";
    minute[5] = "five";
    minute[6] = "six";
    minute[7] = "seven";
    minute[8] = "eight";
    minute[9] = "nine";
    minute[10] = "ten";
    minute[11] = "eleven";
    minute[12] = "twelve";
    minute[13] = "thirteen";
    minute[14] = "fourteen";
    minute[15] = "quarter";
    minute[16] = "sixteen";
    minute[17] = "seventeen";
    minute[18] = "eighteen";
    minute[19] = "nineteen";
    minute[20] = "twenty";
    minute[30] = "half";
    for (int i = 21; i < 30; i++)
    {
        int k = i % 10;
        minute[i] = minute[20] + " " + minute[k];
    }
    for (int i = 31; i < 60; i++)
    {
        minute[i] = minute[60 - i];
    }
    if (m <= 30)
    {
        if (m == 0)
        {
            time = minute[h] + " o' clock";
        }
        if (m == 1)
        {
            time = minute[m] + " minute past " + minute[h];
        }

        if ((m > 1 && m < 15) || (m > 15 && m < 30))
        {
            time = minute[m] + " minutes past " + minute[h];
        }

        if (m == 15 || m == 30)
        {
            time = minute[m] + " past " + minute[h];
        }
    }
    else
    {
        h++;

        if ((m > 30 && m < 45) || (m > 45 && m < 60))
        {
            time = minute[m] + " minutes to " + minute[h];
        }

        if (m == 45)
        {
            time = minute[m] + " to " + minute[h];
        }
    }
    return time;
}

int main()
{
    int h, m;
    cin >> h >> m;
    cout<<timeInWords(h, m);
    return 0;
}