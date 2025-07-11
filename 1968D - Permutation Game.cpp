//1968D - Permutation Game
//11-07-2025
#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sp " "
typedef long long ll;
const int maxn = 2e5;

int a[maxn+5], p[maxn+5];
ll nostop_sasha[maxn+5], nostop_bodya[maxn+5];

void solve()
{
    int maxval = -1;
    int n, k, PB, PS; cin >> n >> k >> PB >> PS;
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        maxval = max(maxval, p[i]);
    }
    for (int i = 1; i <= n; ++i) cin >> a[i];

    int m = min(n, k);
    ll maxscore_sasha = 0;
    ll maxscore_bodya = 0;

    int sasha_id = PS; //cur id cua sasha
    int bodya_id = PB; //cur id cua bodya
    nostop_bodya[0] = 0;
    nostop_sasha[0] = 0;

    for (int i = 1; i <= m; ++i)
    {
        nostop_sasha[i] = (ll) nostop_sasha[i-1] + a[sasha_id]; //neu di lien tuc
        nostop_bodya[i] = (ll) nostop_bodya[i-1] + a[bodya_id];
        ll sasha = (ll) (k-i+1) * a[sasha_id] + nostop_sasha[i-1]; //neu chon dung lai den cuoi game o luot di thu i
        ll bodya = (ll) (k-i+1) * a[bodya_id] + nostop_bodya[i-1];
        maxscore_sasha = (ll) max(maxscore_sasha, sasha);
        maxscore_bodya = (ll) max(maxscore_bodya, bodya);
        sasha_id = p[sasha_id];
        bodya_id = p[bodya_id];

    }

    if (maxscore_bodya > maxscore_sasha) cout << "Bodya";
    else if (maxscore_bodya == maxscore_sasha) cout << "Draw";
    else cout << "Sasha";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
        cout << nl;
    }
    return 0;
}
