#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6 + 5;
ll dp[N];
int32_t main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
ll n, x;
cin >> n >> x;
vector<ll>coins(n + 1);
for(ll i = 0; i < n; ++i) cin >> coins[i];
for(ll i = 0; i <= x; ++i){
	dp[i] = INT_MAX;
}
 
dp[0] = 0;
 
for(ll i = 1; i <= n; ++i){
	for(ll amount = 0; amount <= x; amount++){
		if(amount - coins[i - 1] >= 0){
			dp[amount] = min(dp[amount], dp[amount - coins[i - 1]] + 1); 
		}
	}
}
if(dp[x] == INT_MAX) cout << -1 << '\n';
else cout << dp[x] << '\n';
 
 
}
 
 
 
 
 
