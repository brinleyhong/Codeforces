//344B - Simple Molecules
//21-07-2025
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c; cin >>a>>b>>c;
    int y = (-a+b+c)/2;
    int x = b-y;
    int z = c-y;
    if (x<0||y<0||z<0 || ((-a+b+c)%2==1)) cout << "Impossible";
    else cout << x << " " << y << " " << z;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
