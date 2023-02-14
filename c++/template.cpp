//<header_files>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
//</header_files>

#ifndef ONLINE_JUDGE
  #define LOCAL
#endif

//<pragma>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//</pragma>

//<nampespaces>
using namespace __gnu_pbds;
using namespace std;
//</namespaces>

//<loops>
#define rep(i,j,n) for(int i=j;i<n;++i)
#define dep(i,j,n) for(int i=j;i>=n;--i)
#define each(a,b) for(auto a:b)
#define eachr(a,b) for(auto &a:b)
//</loops>

//<template_macros>
#define tcT template<class T
#define tcTU tcT, class U
#define tcTUU tcT, class ...U
//</template_macros>

//<ds_shorthand>
tcT> using ordered_set= tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;

typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<bool> vb;

typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

typedef vector<vi> vvi;
typedef vector<vpi> vvpi;
typedef vector<vpl> vvpl;
typedef vector<vpd> vvpd;

tcT, size_t SZ> using arr = array<T,SZ>;
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
//</ds_shorthand>

//<io>
void io_init()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen ("error.txt", "w", stderr);
  #endif
}
//</io>

//<other_macros>
#define endl "\n" 
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define popb pop_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define rall(x) x.rbegin(), x.rend()
#define sora(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
//</other_macros>

//<constants>
const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18;
const double PI = acos((double)-1);
arr<int,4> dx= {1,0,-1,0}, dy = {0,1,0,-1};
//</constants>

//<stringify>
#define ts to_string
string ts(char c) { return string(1,c); }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
string ts(bool b) { return ts((int)b); }
tcT> string ts(complex<T> c) {	stringstream ss; ss << c; return ss.str(); }
template<size_t SZ> string ts(bitset<SZ> b) 
{
    string res = ""; 
  rep(i,0,SZ) res += char('0'+b[i]);
    return res; 
}
tcTU> string ts(pair<T,U> p) 
{
    #ifdef LOCAL
        return "("+ts(p.ff)+", "+ts(p.ss)+")";
    #else
        return ts(p.ff)+" "+ts(p.ss);
    #endif
}
tcT> string ts(T v) 
{ // containers with begin(), end()
    #ifdef LOCAL
        bool fst = 1; string res = "{";
        eachr(x,v) 
        {
            if (!fst) res += ", ";
                fst = 0; res += ts(x);
            }
            res += "}"; return res;
    #else
    bool fst = 1; string res = "";
        eachr(x,v) 
        {
            if (!fst) res += " ";
            fst = 0; res += ts(x);
        }
        return res;
    #endif
}
//</stringify>

//<read>
tcT> void re(T& x) { cin >> x; }
void re(double& d) { string t; re(t); d = stod(t); }
void re(long double& d) { string t; re(t); d = stold(t); }
tcTUU> void re(T& t, U&... u) { re(t); re(u...); }
tcT> void re(complex<T>& c) { T a,b; re(a,b); c = {a,b}; }
tcTU> void re(pair<T,U>& p) { re(p.ff,p.ss); }
tcT> void re(vector<T>& x) { eachr(a,x) re(a); }
tcT, size_t SZ> void re(arr<T,SZ>& x) { eachr(a,x) re(a); }
tcT> void rv(int n, vector<T>& x) { x.rsz(n); re(x); }
//</read>

//<output>
tcT> void pr(T x) { cout << ts(x); }
tcTUU> void pr(const T& t, const U&... u) {	pr(t); pr(u...); }
void ps() { pr("\n"); } // print w/ spaces
tcTUU> void ps(const T& t, const U&... u) { pr(t); if (sizeof...(u)) pr(" "); ps(u...); }
//</output>

//<debug>

#ifdef LOCAL // compile with -DLOCAL, chk -> fake assert
  void DBG() { cerr << "]" << endl; }
  tcTUU> void DBG(const T& t, const U&... u) 
  {
    cerr << ts(t); if (sizeof...(u)) cerr << ", ";
    DBG(u...); 
  }
    #define dbg(...) cerr << "Line(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
    #define chk(...) if (!(__VA_ARGS__)) cerr << "Line(" << __LINE__ << ") -> function(" << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << "\n", exit(0);
#else
    #define dbg(...) 0
    #define chk(...) 0
#endif
//</debug>

void solve()
{
    
}
int main()
{
  io_init();
  int t=1;
  //cin>>t;//comment this one out if single test case
  while(t-->0)
    solve();
  return 0;
}
/* INT->LL remember 'mark the sweeper' whenever you return any sum of multiple numbers
possibly the entire array, then take care to define int as long long, that has to be the saddest mistake ever*/
