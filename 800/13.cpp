/**
 *    author:  raj_001
 *    created: 2024-08-09 08:23:37
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

void constract(vector<int> &a, int n, vector<int> &e, vector<int> &o)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2)
        {
            o.pb(a[i]);
        }
        else
        {
            e.pb(a[i]);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), e, o;
    bool even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2)
        {
            odd = 1;
        }
        else
        {
            even = 1;
        }
    }
    //
    if (even && odd)
    {

        constract(a, n, e, o);
    }
    else if (even && !odd)
    {
        constract(a, n, e, o);
        sort(all(e));
        reverse(all(e));
        // for (int v : e)
        //     cout << v << " ";
        if (e[0] == e[sz(e) - 1])
        {
            cout << -1 << nl;
            return;
        }
        int l = e[sz(e) - 1];
        for (int i = sz(e) - 1; i >= 0; i--)
        {

            if (l == e[i])
            {
                o.pb(e[i]);
                e.ppb();
            }
        }
    }
    else
    {
        constract(a, n, e, o);
        sort(all(o));
        if (o[0] == o[sz(o) - 1])
        {
            cout << -1 << nl;
            return;
        }
        int l = o[sz(o) - 1];
        for (int i = sz(o) - 1; i >= 0; i--)
        {

            if (l == o[i])
            {
                e.pb(o[i]);
                o.ppb();
            }
        }
    }
    // printing part is here

    cout << o.size() << " " << e.size() << nl;
    for (int v : o)
        cout << v << " ";
    cout << nl;
    for (int v : e)
        cout << v << " ";
    cout << nl;
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