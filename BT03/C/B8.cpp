#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, totalWaitTime;
    cin >> n;
    int arr[n], waitTime[n];
    for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
    sort(arr,arr+n);
    waitTime[0] = 0;
    for(int i = 1; i < n;i++)
        {
            waitTime[i] = waitTime[i - 1] + arr[i - 1];
            totalWaitTime += waitTime[i];
        }
    cout << totalWaitTime;
}