// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int x; cin >> x;
    int boring_digit = x%10;
    int sum = 10*(boring_digit-1);

    string s = to_string(x);
    int len = s.length();
    if(len == 1) sum += 1;
    else if(len == 2) sum += 3;
    else if(len == 3) sum += 6;
    else if(len == 4) sum += 10;
    cout << sum <<'\n';
  }

  return 0;
}