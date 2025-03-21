#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define llmx LONG_LONG_MAX
#define llmn LONG_LONG_MIN

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
const int INF = 1e9 + 10;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int anna = a + ceil(c / 2.0);
    int ketty = b + floor(c / 2.0);
    if (anna > ketty) cout << "First" << endl;
    else cout << "Second" << endl;
}

/* Hey you should check this out
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}