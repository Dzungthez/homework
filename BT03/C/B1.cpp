#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    int a[n];
    int cnt[256]={0};
    for(int i = 0 ;i < n;i++){
        cin >> a[i];
        cnt[a[i]]++;
        if(cnt[a[i]]>=2) 
        {
            cout << "yes";
            return 0;
        }
    }
    cout << "No";
   
    return 0;
}