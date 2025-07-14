//1398C - Good Subarrays
//26-06-2025
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int pf[maxn+5], npf[maxn+5], a[maxn+5];
typedef long long ll;
ll solve()
{
    int n;
    cin >> n;
    pf[0] = 0, npf[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        char x;
        cin >> x;
        a[i] = x - '0';
        pf[i] = pf[i-1] + a[i];
        npf[i] = pf[i] - i;
    }

    map <int, ll> freq;
    freq[0] = 1;
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans = (ll) ans + freq[npf[i]];
        freq[npf[i]] = (ll) freq[npf[i]] + 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cout << solve();
        cout << "\n";
    }
    return 0;
}
