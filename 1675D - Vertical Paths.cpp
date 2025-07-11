#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
void Do()
{
    int n;
    cin >> n;
    vector<int>b(n + 1);
    vector<bool>leaf(n + 1, true);
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
        leaf[b[i]] = false;
    }
    if(n == 1){
        cout << 1<<nl<<1<<nl<<1<<nl<<nl;
        return;
    }
    vector<int>paths[n + 1];
    vector<bool>visited(n + 1, false);
    int cnt = 0;
    //đi ngược từ lá lên rễ rồi cắt khi gặp nút đã thăm, nếu là lá thì chắc chắn là một path mới
    for(int i = 1; i <= n; i++){
        if(leaf[i]) {
            visited[i] = true;
            paths[cnt].push_back(i);
            int v = i;
            //truy hồi
            while (b[v] != v && !visited[b[v]])
            {
                v = b[v]; //gáng nút cha
                visited[v] = true;
                paths[cnt].push_back(v);
            }
            ++cnt;
        }
    }
    cout << cnt << nl;
    for (int i = 0; i < cnt; ++i)
    {
        if (!paths[i].empty())
        {
            int m = paths[i].size();
            cout << m << nl;
            reverse(paths[i].begin(), paths[i].end());
            for (int j = 0; j< m; ++j) cout << paths[i][j] << sp;
            cout << nl;
        }
    }
    cout << nl;
}
void solve()
{
    Do();
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) solve();
    return 0;
}
