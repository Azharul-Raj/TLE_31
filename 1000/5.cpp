/**
 *    author:  raj_001
 *    created: 2024-08-22 21:23:59
 **/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define nl '\n'
#define INF 1e18
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define pb push_back
#define ppb pop_back
#define rf(i, a, b) for (int i = a; i < (b); i++)
#define fr(i, a) for (int i = 0; i < (a); i++)
#define frr(i, a) for (int i = (a) - 1; i >= 0; i--)
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

bool csSrt(pi a, pi b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return b.second > a.second;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    vpi aa;
    fr(i, n) cin >> a[i];
    // fr(i, n) cout << a[i] << " ";
    fr(i, n)
    {
        // cout << a[i] << " ";
        int v = a[i] % k;
        // cout << "here " << i << " " << v << nl;
        int idx = i + 1;
        if (v == 0)
        {
            aa.pb({k, idx});
        }
        else
        {
            aa.pb({v, idx});
        }
    }
    // cout << sz(aa);
    sort(all(aa), csSrt);
    fr(i, n) cout << aa[i].second << " ";
    cout << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}