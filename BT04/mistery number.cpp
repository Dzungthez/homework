#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }
    for (int i = 0; i <= n; i++)
    {
        cin >> b[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        if (b[i] > max)
        {
            cout << b[i];
            return 0;
        }
    }
    bool checkelement[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        checkelement[a[i]] = true;
    }
    for (int i = 0; i <= n; i++)
    {
        if (checkelement[b[i]] == false)
        {
            cout << b[i];
            return 0;
        }
    }

    return 0;
}