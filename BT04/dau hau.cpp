#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int n;cout << "Nhap vao so n:"; cin >> n; // nhap so n
    bool row[n+1];
    bool column[n+1] ;
    bool diagplus[2*n+1] ;
    bool diagminus[2*n+2];
    for (int i = 1; i <= n; i++) 
    {
        row[i] = true;
        column[i] = true;
    }

    for (int i = 2; i <= 2*n; i++) 
    {
        diagplus[i] = true;
    }

    for (int i = 0; i <= 2*n+1; i++) 
    {
        diagminus[i] = true;
    }
    pair <int, int> pos[n+1];
    int i = 1;
    while (i <= n)
    {
        cin >> pos[i].first >> pos[i].second;
        i++;
    }
    i = 1;
    while (i <= n)
    {
        int x = pos[i].first, y = pos[i].second;
        if (row[x] == false || column[y] == false || diagplus[x+y] == false ||
            diagminus[x-y+n] == false)
        {
         cout << "NO";
         return 0; 
     } 
     else
     {
        row[x] = false;
        column[y] = false;
        diagplus[x+y] = false;
        diagminus[x-y+n] = false;
    }
    i++;
}
cout << "YES. YOU'RE SMART!";

return 0;
}