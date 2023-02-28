#include<bits/stdc++.h>
using namespace std;
bool sodoiguong(int x)
{

    int cnt = 0;

    vector<int> v;
    while(x)
    {
        v.push_back(x % 10);
        x /= 10;
    }
    //01234
    //11411
    for(int i = 0 ; i < (v.size()/2);i++)
    {
       if(v[i]!=v[v.size()-i-1]) return false;
    }
    return true;
}
int main()
{	
	int t;cin >> t;
	while(t--){
    int a,b;
    cin >> a >> b;
	int cnt = 0;
    for(int i = a; i <=b ; i++){
        if(sodoiguong(i)) cnt++;

    	}
		cout << cnt << endl;
	}
    return 0;
}
