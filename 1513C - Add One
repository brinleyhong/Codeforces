//1513C - Add One
//02-06-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1e9+7;

ll dp[11][200005];

ll DP(int x, int j){

    if(j == 0) return (ll)1;
    if(dp[x][j] != -1) return dp[x][j];

    if(x == 9) dp[x][j] = (DP(1, j-1) + DP(0, j-1)) % MOD;
    else dp[x][j] = DP(x+1, j-1) % MOD;

    return dp[x][j];

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int i = 0; i <= 9; ++i) for(int j = 0; j <= 200000; ++j) dp[i][j] = -1;
    for(int i = 0; i <= 9; ++i){
        for(int j = 0; j <= 200000; ++j) dp[i][j] = DP(i, j);
    }

    while(t--){
        int n, m; cin >> n >> m;

        ll ans = 0;
        for(; n > 0; n /= 10){
            ans = (ans + dp[n%10][m]) % MOD;
        }
        cout << ans << "\n";
    }

    return 0;
}
