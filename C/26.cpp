#include <bits/stdc++.h>

using namespace std;
double mean(int n,double  a[]);
double max(int n, double a[]);
double min(int n, double a[]);
int main(){
  int n; cin >> n;
  double a[n+1];
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  cout << "Mean: " << mean(n,a) << endl;
  cout << "Max: " << max(n, a) << endl;
  cout << "Min: " << min(n,a);
return 0;
}
double mean(int n,double  a[]){
  double sum;
  for (int i = 1;i <= n; i++)
  {
    sum += a[i];
  }
  return sum/n;
}
double max(int n, double a[]){
  double max = a[1];
  for (int i = 2; i <= n; i++){
    if (a[i] > max) max = a[i];
  }
  return max;
}
double min (int n, double a[]){
  double min = a[1];
  for (int i = 2; i <= n; i++){
    if (a[i] < min) min = a[i];
  }
  return min;
}