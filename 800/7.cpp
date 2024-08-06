/**
 *    author:  raj_001
 *    created: 2024-08-05 22:26:08
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool y = 1;
    for (int i = 0; i <= 5; i++)
    {
        if (s.find(t) != -1)
        {
            cout << i << nl;
            y = 0;
            break;
        }
        else
        {
            s += s;
        }
    }
    if (y)
        cout << -1 << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}