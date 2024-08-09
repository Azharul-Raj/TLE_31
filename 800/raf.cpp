/**
 *    author:  raj_001
 *    created: 2024-08-07 21:50:43
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
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << " " << 2 << nl;
        return;
    }
    vector<int> f, s;
    if (n % 2)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            f.pb(i);
        }
        for (int i = n; i > n / 2; i--)
        {
            s.pb(i);
        }
        for (int i = 0; i < f.size() && i < s.size(); i++)
        {
            cout << f[i] << " ";
            cout << s[i] << " ";
        }
        cout << s[s.size() - 1] << nl;
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            f.pb(i);
        }
        for (int i = n; i > n / 2; i--)
        {
            s.pb(i);
        }
        for (int i = 0; i < f.size() && i < s.size(); i++)
        {
            cout << f[i] << " ";
            cout << s[i] << " ";
        }
        cout << nl;
    }
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