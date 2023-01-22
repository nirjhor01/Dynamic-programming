#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000001];
int32_t main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
ll n, x;
cin >> n >> x;
vector<ll>v(n);
for(ll i = 0; i <n; ++i) cin >> v[i];
const ll MOD = (ll) 1e9 + 7;
 
dp[0] = 1;
for(ll i = 0; i < n; ++i){
	for(ll j = v[i]; j <= x; j++){
		if(j - v[i] >= 0){
		dp[j] = dp[j] + dp[j - v[i]];
		dp[j] %= MOD;}
	}
}
cout << dp[x] << '\n';
 
}
 
