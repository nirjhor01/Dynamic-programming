#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<functional>
#include<climits>
using namespace std;
#define int long long 
signed main() {
    int n, k;
    cin >> n >> k;
    vector<int>coins(n);
    for (auto& i : coins) cin >> i;
    vector<int>dp(k + 2, INT_MAX);
    dp[0] = 0;
    for (int c = 0; c < n; c++) {
        for (int amount = 1; amount <= k; amount++) {
            if (amount - coins[c] >= 0) {
                dp[amount] = min(dp[amount], dp[amount - coins[c]] + 1); // IF WE TAKE COIN 2 AND AMOUNT IS 5, THEN WE HAVE TO ENSURE THAT, THERE IS A WAY TO CONSTRUCT 3 BY TAKING ONE OR MORE PREVIOUS COINS.
            }
        }
    }
    if (dp[k] == INT_MAX) cout << -1 << '\n';
    else cout << dp[k] << '\n';

}
