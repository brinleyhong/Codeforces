//1741D - Masha and a Beatiful Tree
//08-07-2025
#include <bits/stdc++.h>
using namespace std;
const int maxm = 262144; //2^18
int p[maxm+5]; //1 based
int m;
#define nl "\n"
int Do(int l, int r)
{
    if (r == l) return 0; //leaf
    int mid = (r + l) / 2;
    int maxl = -1;
    int maxr = -1;
    for (int i = l; i <= mid; ++i) maxl = max(maxl, p[i]);
    for (int i = mid + 1 ; i <= r; ++i) maxr = max(maxr, p[i]);
    int ans = 0;
    if (maxl > maxr)
    {
        ++ans;
        for (int i = 0; i <= mid - l; ++i) swap(p[l+i], p[mid+i+1]);
    }
    return ans + Do(l, mid) + Do(mid + 1, r);
}
void solve()
{
    //read
    cin >> m;
    for (int i = 1;i <= m; ++i) cin >> p[i];
    int ans = Do(1, m);
    bool s = true;
    for (int i = 2; i <= m; ++i)
    {
        if (p[i] <= p[i-1])
        {
            s = false;
            break;
        }
    }
    if (!s) ans = -1;
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
        cout << nl;
    }
    return 0;
}
