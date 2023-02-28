#include<bits/stdc++.h>
using namespace std;
int main()
{       

    int m,n;cin >> m >> n;
    char a[m+2][n+2];
    int cnt = 0;
    for(int i = 1;i <=m;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i<=n+1;i++){
        a[0][i] = '.';
        a[m+1][i] = '.';
    }
    for(int i = 0;i<=m+1;i++)
    {
        a[i][0] = '.';
        a[i][n+1] = '.';
    }
    for(int i = 1 ; i <=m;i++)
    {
        for(int j = 1; j <=n;j++){
            if(a[i][j]!='*')
            {
                if(a[i-1][j-1] == '*') cnt++;
                if(a[i-1][j]=='*') cnt++;
                if(a[i-1][j+1] == '*') cnt++;
                if(a[i][j-1]=='*') cnt++;
                if(a[i][j+1]=='*') cnt++;
                if(a[i+1][j-1]=='*') cnt++;
                if(a[i+1][j]=='*') cnt++;
                if(a[i+1][j+1]=='*') cnt++;
                cout << cnt << " ";
            } else cout << '*' << " ";
            if(j==n) cout << endl;
            cnt = 0;
        }
    }
    return 0;
}