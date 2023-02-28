#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int m,n;
    cin >> m >> n;
    int a[m][n];
    int c1,c2,h1,h2;
    c1 = 0;c2 = n-1;
    h1 = 0;h2 = m-1;
    int cnt =  1;
    while(c1 <= c2 && h1 <=h2)
    {
        for(int i = c1; i <= c2;i++)
        {
            a[h1][i] = cnt;
            ++cnt;
        }
        ++h1;
        for(int i = h1;i<=h2;i++)
        {
            a[i][c2] = cnt;
            ++cnt;
        }
        --c2;
        if(c1 <= c2)
        {
            for(int i = c2; i>=c1;i--)
            {
                 a[h2][i]=cnt;
                 cnt++;
            }
        --h2;
        }
        if(h1<=h2)
        {
            for(int i = h2;i>=h1;i--)
             {
                 a[i][c1]=cnt;
                    cnt++;
            }
        ++c1;
        }
    }
    for(int i = 0 ; i < m;i++)
    {
        for(int j = 0; j < n;j++)
        {
            cout << a[i][j] << " ";
            if(j==n-1) cout << endl;
        }
    }
    return 0;
}