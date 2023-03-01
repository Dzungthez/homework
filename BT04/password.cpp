#include <iostream>
#include <cstring>
using namespace std;

bool StringReverse(string &s1, string &s2)
{
    int i = 0;
    int n = s1.length(), n2 = s2.length();
    if (n != n2) return false;
    while (i <= n/2)
    {
        if (s1[i] != s2[n-1-i]) return false;
        i++;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    string input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (StringReverse(input[i], input[j]))
            {
                int n = input[i].length();
                cout << input[i][n/2];
                return 0;
            }
        }
    }
    return 0;
}