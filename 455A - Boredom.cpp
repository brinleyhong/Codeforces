#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int cnt[maxn+1];
int a[maxn+1];
long long dp[maxn+1];

int main()
{
    int n;
    cin >> n;
    int maxx = -1;
    for (int i = 1 ;i <= n; ++i)
    {
        cin >> a[i];
        maxx = max(a[i], maxx);
        cnt[a[i]]++;
    }
    dp[0] = 0;
    dp[1] = cnt[1];
    long long ans = -1;
    ans = (long long) max(dp[0], dp[1]);
    for (int i = 2; i <= maxx; ++i)
    {
        dp[i] = (long long) max((long long) dp[i-2] + (long long) cnt[i]*i, (long long) dp[i-1]);
        ans = (long long) max(ans, dp[i]);
    }
    cout << dp[maxx];
    return 0;
}
