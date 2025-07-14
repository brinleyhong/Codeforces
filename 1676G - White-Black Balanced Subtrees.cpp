//1676G - White-Black Balanced Subtrees
//14-07-25
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
const int maxn = 4000;
int black[maxn+5] = {0};
int white[maxn+5] = {0};
int a[maxn+5];
char color[maxn+5];
bool visited[maxn+5];
vector <int> ch[maxn+1];
void Do(int x)
{
    visited[x] = true;
    if (color[x] == 'B') black[x]++;
    else white[x]++;
    int m = ch[x].size();
    for (int i = 0; i < m; ++i)
    {
        int u = ch[x][i];
        if (!visited[u])
            Do(u);
        black[x] += black[u];
        white[x] += white[u];
    }
}
void reset(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        white[i] = 0;
        black[i] = 0;
        visited[i] = false;
        ch[i].clear();
    }
}
void solve()
{
    int n; cin >> n;
    reset(n);
    for (int i = 2; i <= n; ++i)
    {
        cin >> a[i];
        ch[a[i]].push_back(i);
    }
    for (int i = 1; i <= n; ++i) {
        cin >> color[i];
        if (ch[i].empty())
        {
            if (color[i] == 'B') ++black[i];
            else ++white[i];
            visited[i] = true;
        }
    }
    Do(1);
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (black[i] == white[i]) ++cnt;
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << nl;
    }
    return 0;
}
