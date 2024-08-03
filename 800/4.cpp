/**
 *    author:  raj_001
 *    created: 2024-08-03 23:02:41
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back

void solve()
{
    int n;
    cin >> n;
    if (n % 3)
        cout << "First" << nl;
    else
        cout << "Second" << nl;
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