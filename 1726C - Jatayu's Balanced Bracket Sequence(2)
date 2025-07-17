//1726C - Jatayu's Balanced Bracket Sequence(2)
//17-07-2025
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "

const int maxn = 1e5;
char s[2*maxn+5];
void solve()
{
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= 2*n; ++i) cin >> s[i];
    s[0] = '(';
    for (int i = 1; i <= 2*n; ++i)
    {
        if (s[i] == '(' && s[i-1] == '(') ++cnt;
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
}
