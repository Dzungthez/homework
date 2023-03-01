#include <iostream>
using namespace std;

const int MAXN = 100005;

int a[MAXN], n, t;

int main() 
{
    int a[MAXN], n, t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        int leftSum = 0, rightSum = 0;
        for(int i = 1; i <= n; i++)
            rightSum += a[i];
        bool found = false;
        for(int i = 1; i <= n; i++) {
            rightSum -= a[i];
            if(leftSum == rightSum) {
                found = true;
                break;
            }
            leftSum += a[i];
        }
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}