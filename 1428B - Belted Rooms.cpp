//1428B - Belted Rooms
//18-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
const int maxn = 3e5;
vector <int> adj[maxn+5];
char d[maxn+5];
void solve()
{
    int n; cin >> n;
    int ans = 0;
    int ngang = 0;
    int trai = 0;
    int phai = 0;
    for (int i = 0; i< n; ++i){
        cin >> d[i];
        if (d[i] == '-') ++ngang;
        else if (d[i] == '>') ++phai;
        else ++trai;
    }
    if (trai == 0 || phai == 0)
    {
        cout << n;
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        if (d[i] == '-' || d[(i+1)%n] == '-') ++ans;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
}
