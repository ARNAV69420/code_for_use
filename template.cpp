#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
using namespace __gnu_pbds;
using namespace std;
template<class T> using ordered_set= tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const int mod = 1000000007;
#define rep(i,j,n) for(int i=j;i<n;++i)
#define dep(i,j,n) for(int i=j;i>=n;--i)
#define each(a,b) for(auto a:b)
#define eachr(a,b) for(auto &a:b)
typedef pair<int,int> pi;
typedef pair<int,pi> pipi;
typedef vector<pipi> vpipi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
#define endl "\n" 
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define popb pop_back
#define eb emplace_back
#define all(v) v.begin(),v.end()
#define fastio	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fio	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen ("error.txt", "w", stderr);
#define debug(x) cerr << #x << " : "; _print(x); cerr << endl;

void solve()
{
    
}
int32_t main()
{
    fio
    fastio
    int t=1;
    cin>>t;//comment this one out if single test case
    while(t-->0)
        solve();
}
/* INT->LL remember 'mark the sweeper' whenever you return any sum of multiple numbers
possibly the entire array, then take care to define int as long long, that has to be the saddest mistake ever*/