/**
 *    author:  raj_001
 *    created: 2024-08-30 08:41:15
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// Templete from Geothermal

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '[';
    for (auto &i : x)
        cerr << (f++ ? ", " : ""), __print(i);
    cerr << "]";
}
void _print() { cerr << "\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifdef DEBUG
#define dbg(x...)                                                               \
    cerr << /*"\e[91m" << __func__ << ":" << __LINE__ << */ " " << #x << " = "; \
    _print(x);                                                                  \
    // cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int evnE = 0, oddE = 0;
    vi cnt(26, 0);
    for (char c : s)
    {
        cnt[c - 'a']++;
    }
    fr(i, 26)
    {
        if (cnt[i] % 2)
        {
            int div = cnt[i] / 2;
            evnE += (div * 2);
            oddE++;
        }
        else
        {
            evnE += cnt[i];
        }
    }
    // dbg(oddE);
    int req = n - k;
    if (req == 1)
        ys;
    else if (req % 2)
    {
        if (evnE >= req || (oddE > 0 && evnE >= req - 1))
        {
            ys;
        }
        else
            no;
    }
    else if (evnE >= req)
    {
        ys;
    }
    else
        no;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}