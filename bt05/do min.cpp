#include<iostream>
using namespace std;

void domin(int m,int n,int k,int x, int y, char** b,char ** a)
{

    if (a[x][y]== '*')
    {
        cout<< "you are dead"<< endl;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        int p=0;
        for (int i=max(x-1,0);i<=min(x+1,m);i++)
        {
            for (int j=max(y-1,0);j<min(y+1,n);j++)
            {
                if (j!=i)
                {
                    if (a[i][j]=='*') p++;
                }
            }
        }
        b[x][y] = char(p+'0');
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cout << b[i][j];
            }
            cout << endl;
        }

    }
}


int main()
{
    int m,n,k;
    cin >> m >> n >> k;
    char **a = new char*[m];

    for (int i=0;i<m;i++)
    {
        a[i]= new char[n];
        for (int j=0;j<n;j++)
        {
            a[i][j]= '-';
        }
    }
    int t = 0;
    while (t<k)
    {
        int i1 = rand() %m;
        int i2 = rand() %n;
        if (a[i1][i2]!='') {a[i1][i2] = '';t++;}
    }


    char** b = new char* [m];
    for (int i=0;i<m;i++)
    {   b[i] = new char[n];
        for (int j=0;j<n;j++)
        {
            b[i][j] = '?';
        }
    }
    int x,y;
    while (cin >> x >> y)
    {
        domin(m,n,k,x,y,b,a);
    }
}

