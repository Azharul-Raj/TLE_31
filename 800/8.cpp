/**
 *    author:  raj_001
 *    created: 2024-08-06 08:36:31
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    bool y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            y = 1;
            break;
        }
    }
    cout << (y ? "YES" : "NO") << nl;
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