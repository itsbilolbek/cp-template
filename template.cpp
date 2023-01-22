#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
    #define ar array
    #define ll long long
    #define ld long double
    #define pii pair<int, int>
    #define pll pair<long long, long long>
    #define vi vector<int>
    #define vll vector<long long>
    #define mii map<int, int>
    #define si set<int>
    #define sc set<char>

/* FUNCTIONS */
    #define f(i,s,e) for(long long int i=s;i<e;i++)
    #define cf(i,s,e) for(long long int i=s;i<=e;i++)
    #define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
    #define pb push_back
    #define mp make_pair
    #define eb emplace_back

/* UTILS */
    #define endl "\n"
    #define nl cout<<"<< \"\\n\"";
    #define rep(i, a, b) for(auto i = a; i < b; ++i)
    #define rrep(i, a, b) for(auto i = b - 1; i >= a; --i)
    #define F first
    #define S second
    #define mp make_pair
    #define sp <<" "<<
    #define sza(x) ((int)x.size())
    #define all(a) (a).begin(), (a).end()
    #define rall(a) (a).rbegin(),(a).rend()
    #define fora(u, a) for(auto &(u) : (a))
    #define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}

/* Constants */
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

map<ll, ll> memo;

ll foo(ll v)
{
    return v;
}

ll dp(ll v)
{
    if (memo.contains(v)) return memo[v];
    
    memo[v] = foo(v);
    return memo[v];
}

void solve()
{

    
    
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int tc = 1;
    // cin >> tc;
    
    while (tc--)
    {
        solve();
        cout << endl;
    }

    return 0;
}
