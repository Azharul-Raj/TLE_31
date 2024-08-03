/**
 *    author:  raj_001
 *    created: 2024-08-03 22:33:13
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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            cnt++;
    }
    if (n <= 3)
    {
        int d = count(s.begin(), s.end(), '.');
        if (d == 3)
            cout << 2 << nl;
        else
            cout << d << nl;
        return;
    }
    bool y = 0;
    for (int i = 2; i < n; i++)
    {
        if (s[i - 2] == '.' && s[i - 1] == '.' && s[i] == '.')
        {
            y = 1;
        }
    }
    cout << (y ? 2 : cnt) << nl;
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