#include <iostream>
#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define fi first
#define se second
#define FORU(i , a , b) for(int i = a ; i <= b ; i++)
#define FORD(i , a , b) for(int i = a ; i >= b ; i--)
using namespace std;
const int MAX = 1e6 + 10, MOD = 1e9 + 7;
void unset(int &t, int pos)
{
    t &= (~(1ll << (pos - 1)));
}
void onset(int &t, int pos)
{
    t |= (1ll << (pos - 1));
}
int getbit(int i,int k)
{
    return (k >> (i - 1)) % 2;
}
void minimize(int &x, int y)
{
    x = min(x, y);
}
void maximize(int &x, int y)
{
    x = max(x, y);
}
int ADD(int x, int y)
{
    return (x + y) % MOD;
}
int MINUS(int x, int y)
{
    x %= MOD, y %= MOD;
    if (x < y) x += MOD;
    return (x - y) % MOD;
}
//========================================================================0========================================================================//
struct Point
{
    double x, y;
    Point()
    {
        x = y = 0;
    }
    Point(double _x, double _y)
    {
        x = _x, y = _y;
    }
};
void PBV(Point a)
{
    cout << "PBV: " << &a << '\n';
}
void PBA(Point &a)
{
    cout << "PBA: " << &a;
}
main()
{
    Point a;
    cout << "a: " << &a << '\n';
    PBV(a);
    PBA(a);
    return 0;
}
