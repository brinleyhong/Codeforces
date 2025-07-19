//1948C - Arrow Path
//09-07-2025
#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sp " "

const int maxn = 2e5;
char a[3][maxn+5];
bool visited[3][maxn+5];
int dx[4] = {-1, 1, 0, 0}; //trai phai len xuong
int dy[4] = {0, 0, -1, 1}; //trai phai len xuong
int n;
bool valid(int x, int y)
{
    return (x >= 1 && x <= 2 && y >= 1 && y <= n);
}
void BFS()
{
    queue <pair<int, int>> q;
    q.push(make_pair(1, 1));
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
//        cout << x << sp << y << nl;
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i]; //thao tac dau
            int ny = y + dy[i]; //thao tac dau
            if (nx == 2 && ny == n)
            {
                visited[nx][ny] = true;
                return;
            }
//            cout << x << sp << y << sp << nx << sp << ny << nl;
            int nx2 = nx; //thao tac sau
            int ny2 = ny; //thao tac sau
            if (!valid(nx, ny)) continue;
            if (a[nx][ny] == '>') ny2++;
            else ny2--;
//            if (valid(nx, ny))
//                cout << nx << sp << ny << sp << nx2 << sp << ny2 <<nl;
//            if (valid(nx, ny) && valid(nx2, ny2))
//                cout << nx << sp << ny << sp << nx2 << sp << ny2 <<nl;
            if (valid(nx, ny) && valid(nx2, ny2) && !visited[nx2][ny2])
            {
//                cout << x << sp << y << sp << nx << sp << ny << nl;
                visited[nx2][ny2] = true;
                q.push(make_pair(nx2, ny2));
            }
        }
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= 2; ++i)
    {
        for (int j =1 ; j <= n; ++j)
        {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }
    BFS();
//    for (int i = 1; i <= 2; ++i)
//    {
//        for (int j =1 ;j <= n; ++j)
//            cout << visited[i][j] << sp;
//        cout << nl;
//    }
    if (visited[2][n]) cout << "YES";
    else cout << "NO";
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}
