#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int mod = 1e9+7;
  int n, target;
  cin >> target;
  vector<int> c(6);
  for(int i = 0; i < 6; ++i) c[i] = i + 1;
 
  vector<int> dp(target+1,0);
  dp[0] = 1;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < 6; j++) {
      if (i-c[j] >= 0) {
	(dp[i] += dp[i-c[j]]) %= mod;
      }
    }
  }
  cout << dp[target] << endl;
}
