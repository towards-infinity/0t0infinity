// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  long long n; cin >> n;
  if(n%2==0) cout << n/2 <<'\n';   // pashapashi 2 term er result 1 so n/2 times 1
  else cout << ((n-1)/2)-n <<'\n'; // last n skip kore (n-1)/2 times 1 then minus odd n 

  return 0;
}

// A 0486


/*// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  long long n; cin >> n;
  if(n%2==0) {
  	long long x = n/2;
  	cout << (x*(x+1)) - (x*x) <<'\n';
  } else {
  	long long y = n/2;
  	cout << (y*(y+1)) - ((y+1)*(y+1)) <<'\n';
  }

  return 0;
}*/